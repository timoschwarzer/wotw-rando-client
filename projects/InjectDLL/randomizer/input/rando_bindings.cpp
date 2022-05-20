#include <input/rando_bindings.h>

#include <interop/csharp_bridge.h>
#include <macros.h>
#include <input/controller_bindings.h>
#include <input/helpers.h>
#include <input/simulator.h>
#include <Common/ext.h>

#include <game/game.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/il2cpp_helpers.h>

#include <fstream>
#include <unordered_map>
#include <unordered_set>

#include <magic_enum/include/magic_enum.hpp>
#include <thread>
#include <uber_states/uber_state_helper.h>
#include <render/shaders.h>

using namespace modloader;

namespace randomizer
{
    namespace input
    {
        namespace
        {
            const std::string KEYBOARD_REBIND_FILE = "keyboard_bindings.json";

            struct KeyboardMouseInput
            {
                std::vector<app::KeyCode__Enum> codes;
                std::vector<int> mouse_buttons;

                bool respects_modifiers = false;
                bool shift = false;
                bool ctrl = false;
                bool alt = false;
                bool altgr = false;
            };

            struct ControlInfo
            {
                std::vector<rando_input_callback> on_pressed_actions;
                std::vector<rando_input_callback> on_release_actions;
                std::vector<KeyboardMouseInput> kbm_bindings;
                bool simulated_state = false;

                bool is_pressed = false;
                bool is_just_pressed = false;
            };

            std::unordered_map<Action, ControlInfo> bindings;

            void add_keyboard_binding(Action action, KeyboardMouseInput input)
            {
                if (action < Action::RANDO_ACTIONS_START)
                    return;

                if (input.codes.empty() && input.mouse_buttons.empty())
                    return;

                bindings[action].kbm_bindings.push_back(input);
            }

            void handle_binding(Action action, std::vector<int> const& buttons, bool respects_modifiers)
            {
                KeyboardMouseInput input;
                input.respects_modifiers = respects_modifiers;
                for (auto const& button : buttons)
                {
                    if (button < 0)
                        input.mouse_buttons.push_back(-button);
                    else
                    {
                        auto code = static_cast<app::KeyCode__Enum>(button);
                        input.codes.push_back(code);
                        input.shift |= code == app::KeyCode__Enum_LeftShift || code == app::KeyCode__Enum_RightShift;
                        input.ctrl |= code == app::KeyCode__Enum_LeftControl || code == app::KeyCode__Enum_RightControl;
                        input.alt |= code == app::KeyCode__Enum_LeftAlt || code == app::KeyCode__Enum_RightAlt;
                        input.altgr |= code == app::KeyCode__Enum_AltGr;
                    }
                }

                add_keyboard_binding(action, input);
            }

            IL2CPP_INTERCEPT(, PlayerInput, void, ClearControls, (app::PlayerInput* this_ptr)) {
                PlayerInput::ClearControls(this_ptr);
                clear_simulators();
                for (auto& binding : bindings)
                    binding.second.kbm_bindings.clear();
            }

            IL2CPP_INTERCEPT(, PlayerInput, void, AddKeyboardControls, (app::PlayerInput* this_ptr)) {
                PlayerInput::AddKeyboardControls(this_ptr);
                read_bindings(base_path + KEYBOARD_REBIND_FILE, handle_binding);
                register_simulators(this_ptr);
            }

            STATIC_IL2CPP_BINDING(UnityEngine, Input, bool, GetKeyInt, (app::KeyCode__Enum key));
            STATIC_IL2CPP_BINDING(UnityEngine, Input, bool, GetMouseButton, (int button));
            bool is_pressed(KeyboardMouseInput const& input)
            {
                if (input.respects_modifiers)
                {
                    auto shift = Input::GetKeyInt(app::KeyCode__Enum_LeftShift) || Input::GetKeyInt(app::KeyCode__Enum_RightShift);
                    auto ctrl = Input::GetKeyInt(app::KeyCode__Enum_LeftControl) || Input::GetKeyInt(app::KeyCode__Enum_RightControl);
                    auto alt = Input::GetKeyInt(app::KeyCode__Enum_LeftAlt) || Input::GetKeyInt(app::KeyCode__Enum_RightAlt);
                    //auto altgr = Input::GetKeyInt(app::KeyCode__Enum_AltGr);

                    if (input.shift != shift || input.ctrl != ctrl || input.alt != alt)
                        return false;
                }

                for (auto code : input.codes)
                    if (!Input::GetKeyInt(code))
                        return false;

                for (auto button : input.mouse_buttons)
                    if (!Input::GetMouseButton(button))
                        return false;

                return true;
            }

            IL2CPP_INTERCEPT(, SavePedestalController, void, BeginTeleportation, (app::SavePedestalController* this_ptr, app::Vector2* teleport_target_world_position)) {
                auto player_input = il2cpp::get_class<app::PlayerInput__Class>("", "PlayerInput")->static_fields->Instance;
                auto prev = player_input->fields.Active;
                SavePedestalController::BeginTeleportation(this_ptr, teleport_target_world_position);
                player_input->fields.Active = prev;
            }

            IL2CPP_INTERCEPT(, PlayerInput, void, RefreshControls, (app::PlayerInput* this_ptr)) {
                PlayerInput::RefreshControls(this_ptr);
                refresh_controller_controls();

                for (auto& binding : bindings)
                {
                    auto pressed = is_controller_pressed(binding.first);
                    if (!pressed)
                    {
                        for (auto const& input : binding.second.kbm_bindings)
                        {
                            if (is_pressed(input))
                            {
                                pressed = true;
                                break;
                            }
                        }
                    }

                    pressed |= binding.second.simulated_state;

                    auto is_just_released = !pressed && binding.second.is_pressed;
                    binding.second.is_just_pressed = pressed && !binding.second.is_pressed;
                    binding.second.is_pressed = pressed;
                    if (binding.second.is_just_pressed)
                        for (auto action : binding.second.on_pressed_actions)
                            action(binding.first, true);

                    if (is_just_released)
                        for (auto action : binding.second.on_release_actions)
                            action(binding.first, false);
                }
            }
        }

        bool is_pressed(Action action)
        {
            if (action < Action::RANDO_ACTIONS_START)
                return false;

            return bindings[action].is_pressed;
        }

        void add_on_pressed_callback(Action action, rando_input_callback callback)
        {
            if (action < Action::RANDO_ACTIONS_START)
                return;

            bindings[action].on_pressed_actions.push_back(callback);
        }

        void add_on_released_callback(Action action, rando_input_callback callback)
        {
            if (action < Action::RANDO_ACTIONS_START)
                return;

            bindings[action].on_release_actions.push_back(callback);
        }

        void simulate_action(Action action, bool value)
        {
            auto& binding = input::bindings[action];
            binding.simulated_state = value;
            if (binding.is_pressed != value)
            {
                binding.is_pressed = value;
                binding.is_just_pressed = value;
                auto& callbacks = value ? binding.on_pressed_actions : binding.on_release_actions;
                for (auto callback : callbacks)
                    callback(action, value);
            }
        }

        void csharp_callback(Action action, bool pressed)
        {
            csharp_bridge::on_action_triggered(action);
        }

        int next_enemy_id = 0;
        app::Entity* entity = nullptr;

        IL2CPP_BINDING(UnityEngine, Transform, void, set_position, (app::Transform* this_ptr, app::Vector3* pos));
        IL2CPP_BINDING(, MantisGrayboxEntity, void, set_SpawnType, (app::MantisGrayboxEntity* this_ptr, app::MantisSpawnType__Enum spawn_type))
        void test1(Action action, bool pressed)
        {
            int enemy_id = ++next_enemy_id;

            auto mantis_prefab = il2cpp::unity::find_child(game::container(game::RandoContainer::PreloadedGameObjects), "mantis");
            auto mantis_go = il2cpp::unity::instantiate_object(mantis_prefab);
            il2cpp::invoke(mantis_go, "set_name", il2cpp::string_new(format("mantisEntity_%d", enemy_id)));

            auto mantis = il2cpp::unity::get_component<app::MantisGrayboxEntity>(mantis_go, "", "MantisGrayboxEntity");
            mantis->fields.m_baseJumpAttackCooldown = 0.f;
            MantisGrayboxEntity::set_SpawnType(mantis, app::MantisSpawnType__Enum_Emerge);
            // il2cpp::invoke(mantis, "set_SpawnType", app::MantisSpawnType__Enum_FromForeground);

            il2cpp::unity::set_active(mantis_go, true);
            shaders::duplicate_materials(mantis_go);

            auto player_pos = get_position();
            il2cpp::unity::set_position(mantis_go, {player_pos.x, player_pos.y + 5.f, 0.0f });

            game::add_to_container(game::RandoContainer::GameObjects, mantis_go);
            il2cpp::invoke(mantis, "Start");

            console::console_send("Spawned mantis");
        }

        void test2(Action action, bool pressed)
        {
            //const auto pos = il2cpp::unity::get_position(pooled_entity);
            //console::console_send(format("%.2f %.2f", pos.x, pos.y));
            //console::console_send(il2cpp::convert_csstring(il2cpp::invoke<app::String>(pooled_entity, "get_name")));
//
            //app::Transform *transform = il2cpp::unity::get_transform(pooled_entity);
            //while (transform != nullptr) {
            //    console::console_send(il2cpp::convert_csstring(il2cpp::invoke<app::String>(transform, "get_name")));
            //    transform = il2cpp::unity::get_parent(transform);
            //}
//
           //  console::console_send(il2cpp::invoke<app::Boolean__Boxed>(entity, "get_active")->fields ? "ACTIVE" : "INACTIVE");
            console::console_send(il2cpp::unity::get_path(entity));

            console::console_flush();
        }

        void test3(Action action, bool pressed)
        {

        }

        void test4(Action action, bool pressed)
        {

        }

        void initialize()
        {
            add_on_pressed_callback(Action::Binding1, test1);
            add_on_pressed_callback(Action::Binding2, test2);
            add_on_pressed_callback(Action::Binding3, test3);
            add_on_pressed_callback(Action::Binding4, test4);
            // add_on_pressed_callback(Action::Binding1, csharp_callback);
            // add_on_pressed_callback(Action::Binding2, csharp_callback);
            // add_on_pressed_callback(Action::Binding3, csharp_callback);
            // add_on_pressed_callback(Action::Binding4, csharp_callback);
            add_on_pressed_callback(Action::Binding5, csharp_callback);
            add_on_pressed_callback(Action::Reload, csharp_callback);
            add_on_pressed_callback(Action::ShowLastPickup, csharp_callback);
            add_on_pressed_callback(Action::ShowProgressWithHints, csharp_callback);
            add_on_pressed_callback(Action::WarpCredits, csharp_callback);
            add_on_pressed_callback(Action::ToggleCursorLock, csharp_callback);
            add_on_pressed_callback(Action::ToggleAlwaysShowKeystones, csharp_callback);
            add_on_pressed_callback(Action::ToggleAutoaim, csharp_callback);
            add_on_pressed_callback(Action::ShowDevFlag, csharp_callback);
            add_on_pressed_callback(Action::ToggleDebug, csharp_callback);
            add_on_pressed_callback(Action::PrintCoordinates, csharp_callback);
            add_on_pressed_callback(Action::TeleportCheat, csharp_callback);
            add_on_pressed_callback(Action::UnlockSpoilers, csharp_callback);
            add_on_pressed_callback(Action::TogglePickupNamesOnSpoiler, csharp_callback);
            add_on_pressed_callback(Action::ForceExit, csharp_callback);
        }

        CALL_ON_INIT(initialize);
    }
}

INJECT_C_DLLEXPORT bool action_pressed(Action action)
{
    if (action < Action::RANDO_ACTIONS_START)
        randomizer::input::simulate(action, true);
    else
        randomizer::input::simulate_action(action, true);

    return true;
}

INJECT_C_DLLEXPORT bool action_released(Action action)
{
    if (action < Action::RANDO_ACTIONS_START)
        randomizer::input::simulate(action, false);
    else
        randomizer::input::simulate_action(action, false);

    return true;
}
