#include <Core/enums/static_text_entries.h>
#include <Core/api/game/game.h>
#include <interop/csharp_bridge.h>
#include <Core/text_database.h>
#include <Core/uber_states/uber_state_interface.h>

#include <Modloader/app/methods/AK/Wwise/State.h>
#include <Modloader/app/methods/AreaMapNavigation.h>
#include <Modloader/app/methods/AreaMapUI.h>
#include <Modloader/app/methods/CartographerEntity.h>
#include <Modloader/app/methods/Game/UI.h>
#include <Modloader/app/methods/GameMapUI.h>
#include <Modloader/app/methods/GameWorld.h>
#include <Modloader/app/methods/MenuScreenManager.h>
#include <Modloader/app/methods/MessageBox.h>
#include <Modloader/app/methods/Moon/Timeline/DiscoverAreasEntity.h>
#include <Modloader/app/methods/QuestsController.h>
#include <Modloader/app/methods/QuestsUI.h>
#include <Modloader/app/methods/RuntimeGameWorldArea.h>
#include <Modloader/app/methods/RuntimeWorldMapIcon.h>
#include <Modloader/app/methods/UnityEngine/Vector3.h>
#include <Modloader/app/types/Input_Cmd.h>
#include <Modloader/app/types/GameMapTransitionManager.h>
#include <Modloader/app/types/QuestsUI.h>
#include <Modloader/app/types/GameWorld.h>
#include <Modloader/common.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>

#include <Core/enums/static_text_entries.h>
#include <game/pickups/quests.h>
#include <Core/text_database.h>
#include <Randomizer/macros.h>
#include <unordered_map>

using namespace modloader;
using namespace app::classes;

namespace {
    enum class LupoSelection {
        Intro = 0,
        SalesPitch = 1,
        NoSale = 2,
        Broke = 3,
        Thanks = 4
    };

    std::unordered_map<app::GameWorldAreaID__Enum, static_text_entry> text_overrides{
        { app::GameWorldAreaID__Enum::InkwaterMarsh, static_text_entry::LupoMarshIntroduction },
        { app::GameWorldAreaID__Enum::KwoloksHollow, static_text_entry::LupoHollowIntroduction },
        { app::GameWorldAreaID__Enum::WaterMill, static_text_entry::LupoWellspringIntroduction },
        { app::GameWorldAreaID__Enum::MidnightBurrow, static_text_entry::LupoBurrowIntroduction },
        { app::GameWorldAreaID__Enum::BaursReach, static_text_entry::LupoReachIntroduction },
        { app::GameWorldAreaID__Enum::LumaPools, static_text_entry::LupoPoolsIntroduction },
        { app::GameWorldAreaID__Enum::MouldwoodDepths, static_text_entry::LupoDepthsIntroduction },
        { app::GameWorldAreaID__Enum::WindsweptWastes, static_text_entry::LupoWastesIntroduction },
        { app::GameWorldAreaID__Enum::WillowsEnd, static_text_entry::LupoWillowIntroduction },
    };

    app::GameWorld* get_game_world() {
        return types::GameWorld::get_class()->static_fields->Instance;
    }

    IL2CPP_INTERCEPT(CartographerEntity, int, get_MapCost, (app::CartographerEntity * this_ptr)) {
        this_ptr->fields.MapQuestCompletedMapCostModifier = 1.f;
        auto area = CartographerEntity::get_CurrentArea(this_ptr);
        auto id = static_cast<int>(area->fields.WorldMapAreaUniqueID);
        return uber_states::UberState(UberStateGroup::LupoGroup, id).get<int>();
    }

    using normal_function = app::MessageProvider* (*)(app::CartographerEntity*);
    app::MessageProvider* handle_lupo_message(app::CartographerEntity* this_ptr, LupoSelection selection, normal_function normal) {
        auto area = CartographerEntity::get_CurrentArea(this_ptr);
        auto text_override = *text_overrides[area->fields.WorldMapAreaUniqueID] + static_cast<int>(selection);
        if (text_database::has_text(text_override))
            return text_database::get_provider(text_override);

        return normal(this_ptr);
    }

    IL2CPP_INTERCEPT(CartographerEntity, app::MessageProvider*, get_IntroMessageProvider, (app::CartographerEntity * this_ptr)) {
        auto area = CartographerEntity::get_CurrentArea(this_ptr);
        auto id = static_cast<int>(area->fields.WorldMapAreaUniqueID);
        auto cost = uber_states::UberState(UberStateGroup::LupoGroup, id).get<int>();
        area->fields.LupoData.AreaMapSpiritLevelCost = cost;
        area->fields.LupoDataOnCondition.AreaMapSpiritLevelCost = cost;
        return handle_lupo_message(this_ptr, LupoSelection::Intro, next::CartographerEntity::get_IntroMessageProvider);
    }

    IL2CPP_INTERCEPT(CartographerEntity, app::MessageProvider*, get_NoSaleMessage, (app::CartographerEntity * this_ptr)) {
        return handle_lupo_message(this_ptr, LupoSelection::NoSale, next::CartographerEntity::get_NoSaleMessage);
    }

    IL2CPP_INTERCEPT(CartographerEntity, app::MessageProvider*, get_SalesPitchMessage, (app::CartographerEntity * this_ptr)) {
        return handle_lupo_message(this_ptr, LupoSelection::SalesPitch, next::CartographerEntity::get_SalesPitchMessage);
    }

    IL2CPP_INTERCEPT(CartographerEntity, app::MessageProvider*, get_InsufficientFundsMessage, (app::CartographerEntity * this_ptr)) {
        return handle_lupo_message(this_ptr, LupoSelection::Broke, next::CartographerEntity::get_InsufficientFundsMessage);
    }

    IL2CPP_INTERCEPT(CartographerEntity, app::MessageProvider*, get_ThanksMessage, (app::CartographerEntity * this_ptr)) {
        return handle_lupo_message(this_ptr, LupoSelection::Thanks, next::CartographerEntity::get_ThanksMessage);
    }

    IL2CPP_INTERCEPT(RuntimeWorldMapIcon, bool, IsVisible, (app::RuntimeWorldMapIcon * this_ptr, app::AreaMapUI* areaMap)) {
        return true;
    }

    app::GameWorldAreaID__Enum area_id = app::GameWorldAreaID__Enum::None;

    IL2CPP_INTERCEPT(GameMapUI, void, FixedUpdate, (app::GameMapUI * this_ptr)) {
        next::GameMapUI::FixedUpdate(this_ptr);
        auto area = GameMapUI::get_CurrentHighlightedArea(this_ptr);
        if (area == nullptr || area->fields.Area == nullptr)
            return;

        auto aid = area->fields.Area->fields.WorldMapAreaUniqueID;
        if (aid != area_id) {
            area_id = aid;
            csharp_bridge::on_map_pan(area_id);
        }
    }

    // region Quest List UI

    IL2CPP_INTERCEPT(QuestsUI, void, OptionChangeCallback, (app::QuestsUI * this_ptr)) {
        // Noop
    }

    bool allow_showing_description_ui = false;
    IL2CPP_INTERCEPT(QuestsUI, void, OptionPressedCallback, (app::QuestsUI * this_ptr)) {
        ScopedSetter setter(allow_showing_description_ui, true);
        game::pickups::quests::set_allow_changing_active_quest(true);
        next::QuestsUI::OptionPressedCallback(this_ptr);
        game::pickups::quests::set_allow_changing_active_quest(false);

        auto quests_controller = game::pickups::quests::controller();
        auto quest = QuestsController::GetActiveQuest(quests_controller);

        QuestsUI::UpdateDescriptionUI_2(this_ptr, quest);

        auto reward_text = static_cast<static_text_entry>(rand() % 7 + static_cast<int>(static_text_entry::QuestReward1));
        this_ptr->fields.m_questDetailsUI->fields.QuestRewardMessageBox->fields.MessageProvider = text_database::get_provider(*reward_text);
        MessageBox::RefreshText_1(this_ptr->fields.m_questDetailsUI->fields.QuestRewardMessageBox);

        // Moon pls center the thing dammit
        il2cpp::unity::set_local_position(this_ptr->fields.m_questDetailsUI->fields.QuestRewardMessageBox, app::Vector3{ 1.13f, -3.7f, 0.f });

        il2cpp::unity::set_active(this_ptr->fields.m_questDetailsUI->fields.QuestRewardHeader, true);
        il2cpp::unity::set_active(this_ptr->fields.m_questDetailsUI->fields.Keystone, false);
        il2cpp::unity::set_active(this_ptr->fields.m_questDetailsUI->fields.SpiritLight, false);
        il2cpp::unity::set_active(this_ptr->fields.m_questDetailsUI->fields.Ore, false);
    }

    IL2CPP_INTERCEPT(AreaMapNavigation, void, HandleMapScrolling, (app::AreaMapNavigation* this_ptr)) {
        auto previous_x = this_ptr->fields.m_scrollPosition.x;
        auto previous_y = this_ptr->fields.m_scrollPosition.y;

        next::AreaMapNavigation::HandleMapScrolling(this_ptr);

        if (this_ptr->fields.m_scrollPosition.x != previous_x || this_ptr->fields.m_scrollPosition.y != previous_y) {
            ScopedSetter setter(allow_showing_description_ui, true);

            auto quests_ui = types::QuestsUI::get_class()->static_fields->Instance;
            QuestsUI::UpdateDescriptionUI_2(quests_ui, nullptr);
        }
    }

    IL2CPP_INTERCEPT(QuestsUI, void, UpdateDescriptionUI_1, (app::QuestsUI* this_ptr, app::RuntimeQuest* quest)) {
        if (allow_showing_description_ui) {
            next::QuestsUI::UpdateDescriptionUI_1(this_ptr, quest);
        }
    }

    IL2CPP_INTERCEPT(QuestsUI, void, UpdateDescriptionUI_2, (app::QuestsUI* this_ptr, app::Quest* quest)) {
        if (allow_showing_description_ui || quest == nullptr) {
            next::QuestsUI::UpdateDescriptionUI_2(this_ptr, quest);
        }
    }

    IL2CPP_INTERCEPT(QuestsUI, app::Vector3, AddItems, (app::QuestsUI * this_ptr, app::Vector3 base_position, app::Quest_QuestType__Enum type)) {
        auto position = base_position;

        if (type == app::Quest_QuestType__Enum::Main) {
            position.y += 0.6f;
        }

        return next::QuestsUI::AddItems(this_ptr, position, type);
    }

    bool handling_interact_button_on_map = false;
    IL2CPP_INTERCEPT(GameMapUI, void, HandleInteractButton, (app::GameMapUI * this_ptr)) {
        ScopedSetter setter(handling_interact_button_on_map, true);
        next::GameMapUI::HandleInteractButton(this_ptr);
    }

    IL2CPP_INTERCEPT(QuestsUI, void, SelectQuest, (app::QuestsUI * this_ptr, app::Quest* quest)) {
        if (!handling_interact_button_on_map) {
            next::QuestsUI::SelectQuest(this_ptr, quest);
            QuestsUI::UpdateDescriptionUI_2(this_ptr, quest);
        }
    }

    IL2CPP_INTERCEPT(GameMapUI, bool, CanSelectQuest, (app::GameMapUI * this_ptr)) {
        return false;
    }

    IL2CPP_INTERCEPT(AreaMapNavigation, void, UpdateMapTarget, (app::AreaMapNavigation * this_ptr)) {
        next::AreaMapNavigation::UpdateMapTarget(this_ptr);
        this_ptr->fields.m_focusTime = 0.35f;
    }

    IL2CPP_INTERCEPT(AreaMapNavigation, void, SetTargetPosition, (app::AreaMapNavigation * this_ptr, app::Vector3 target_position)) {
        next::AreaMapNavigation::SetTargetPosition(this_ptr, target_position);
        this_ptr->fields.m_focusTime = 0.35f;
        this_ptr->fields.m_focusOnPlayer = true;
    }

    // endregion

    /**
     * Always show "Focus Objective" on the map since "Focus Ori" is broken on KBM (they
     * calculate distance from the cursor instead of screen center).
     */
    IL2CPP_INTERCEPT(GameMapUI, void, NormalInput, (app::GameMapUI * this_ptr)) {
        auto focus_objective_button = types::Input_Cmd::get_class()->static_fields->MapFocusObjective;

        auto focus_objective_button_pressed = focus_objective_button->fields.IsPressed && !focus_objective_button->fields.WasPressed && !focus_objective_button->fields.Used;
        if (focus_objective_button_pressed) {
            focus_objective_button->fields.Used = true;
        }

        next::GameMapUI::NormalInput(this_ptr);

        this_ptr->fields.LeftStickMessageBox->fields.MessageProvider = this_ptr->fields.FocusOnObjectiveMessageProvider;
        MessageBox::RefreshText_1(this_ptr->fields.LeftStickMessageBox);

        if (focus_objective_button_pressed) {
            QuestsUI::ScrollToQuest(this_ptr->fields.m_questsUI);
        }
    }

    IL2CPP_INTERCEPT(Moon::Timeline::DiscoverAreasEntity, void, ChangeState, (app::DiscoverAreasEntity * this_ptr, app::DiscoverAreasEntity_State__Enum value)) {
        // Since we don't want the map to show up, lets speedrun the timeline entity.
        if (value == app::DiscoverAreasEntity_State__Enum::Start) {
            auto menu = Game::UI::get_Menu();
            MenuScreenManager::HideMenuScreen(menu, true, false);
            AK::Wwise::State::SetValue(menu->fields.Sounds->fields.NoUIDisplayedState);

            next::Moon::Timeline::DiscoverAreasEntity::ChangeState(this_ptr, app::DiscoverAreasEntity_State__Enum::Reveal);
            next::Moon::Timeline::DiscoverAreasEntity::ChangeState(this_ptr, app::DiscoverAreasEntity_State__Enum::Fade);
            next::Moon::Timeline::DiscoverAreasEntity::ChangeState(this_ptr, app::DiscoverAreasEntity_State__Enum::WaitForInput);
        } else
            next::Moon::Timeline::DiscoverAreasEntity::ChangeState(this_ptr, value);
    }

    float scaling_factor = 2.0f;
    float original_zoom = -1.0f;
    float original_scale = -1.0f;
    IL2CPP_INTERCEPT(AreaMapUI, void, Awake, (app::AreaMapUI * this_ptr)) {
        next::AreaMapUI::Awake(this_ptr);
        auto transition = types::GameMapTransitionManager::get_class();
        transition->static_fields->WorldMapEnabled = csharp_bridge::check_ini("WorldMapEnabled");
        if (original_zoom < 0.0f)
            original_zoom = this_ptr->fields._Navigation_k__BackingField->fields.AreaMapZoomLevel;
        if (original_scale < 0.0f)
            original_scale = this_ptr->fields._IconScaler_k__BackingField->fields.MaxScaleFactor;

        this_ptr->fields._Navigation_k__BackingField->fields.AreaMapZoomLevel = original_zoom / scaling_factor;
        this_ptr->fields._Navigation_k__BackingField->fields.WorldMapZoomLevel = original_zoom / scaling_factor;
        this_ptr->fields._IconScaler_k__BackingField->fields.MaxScaleFactor = original_scale / scaling_factor;
    }

    void on_area_map(GameEvent game_event, EventTiming timing) {
        area_id = app::GameWorldAreaID__Enum::None;
    }

    void initialize() {
        game::event_bus().register_handler(GameEvent::OpenAreaMap, EventTiming::After, &on_area_map);
    }

    CALL_ON_INIT(initialize);
} // namespace

RANDOMIZER_C_DLLEXPORT bool discover_everything() {
    auto game_world = get_game_world();
    if (game_world) {
        // 15 is the max value of app::GameWorldAreaID__Enum when this was written.
        for (int32_t i = 0; i <= 15; i++) {
            auto area = GameWorld::GetArea(game_world, static_cast<app::GameWorldAreaID__Enum>(i));
            if (!area) {
                // Areas: None, WeepingRidge, GorlekMines, Riverlands would crash the game
                continue;
            }

            auto runtimeArea = GameWorld::FindRuntimeArea(game_world, area);
            if (!runtimeArea)
                continue;

            RuntimeGameWorldArea::DiscoverAllAreas(runtimeArea);
        }

        trace(MessageType::Debug, 5, "game", "Map revealed");
        return true;
    } else {
        trace(MessageType::Warning, 3, "game", "Tried to discover all, but haven't found the GameWorld Instance yet :(");
        return false;
    }
}
