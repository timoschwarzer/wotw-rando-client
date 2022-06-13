#include <game/player.h>
#include <macros.h>

#include <Common/ext.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/app/methods/Game/UI.h>
#include <Il2CppModLoader/app/methods/TimeUtility.h>

using namespace modloader;
using namespace app::methods;

INJECT_C_DLLEXPORT bool in_menu();

namespace {
    constexpr float NO_AIR_DECELERATION_DURATION = 0.2f;
    constexpr float NO_AIR_DECELERATION_RESET_DURATION = 0.2f;
    float aim_timer = 0.0f;
    float reset_timer = 0.0f;

    bool is_aiming_launch(app::CharacterAirNoDeceleration* this_ptr) {
        if (!in_menu()) {
            if (aim_timer >= 0.0f)
                aim_timer -= TimeUtility::get_deltaTime();
            if (reset_timer >= 0.0f)
                reset_timer -= TimeUtility::get_deltaTime();
        }

        auto* sein = game::player::sein();
        auto* wrapper = sein->fields.Abilities->fields.ChargeJumpWrapper;
        if (wrapper->fields.HasState && wrapper->fields.State->fields.m_state == app::SeinChargeJump_State__Enum::Aiming) {
            aim_timer = NO_AIR_DECELERATION_DURATION;
            if (reset_timer > 0.0f)
                this_ptr->fields.m_noDeceleration = true;
        }

        return aim_timer > 0.0f;
    }
} // namespace

void handle_launch_no_deceleration(app::CharacterAirNoDeceleration* this_ptr) {
    auto* left_right_movement = this_ptr->fields.PlatformBehaviour->fields.LeftRightMovement;
    if (!left_right_movement->fields.m_settings->fields.LockInput &&
        !is_aiming_launch(this_ptr) &&
        !eps_equals(left_right_movement->fields.m_horizontalInput, 0.0f)) {
        if (this_ptr->fields.m_noDeceleration)
            reset_timer = NO_AIR_DECELERATION_RESET_DURATION;

        this_ptr->fields.m_noDeceleration = false;
    }
}

INJECT_C_DLLEXPORT bool in_menu() {
    return il2cpp::get_class<app::UI__Class>("Game", "UI")->static_fields->m_sMenu->fields.m_equipmentWhellVisible || Game::UI::get_MainMenuVisible() || Game::UI::get_WorldMapVisible() || Game::UI::get_ShardShopVisible() || Game::UI::IsInventoryVisible();
}
