#include <Core/api/game/death_listener.h>
#include <Core/api/game/game.h>
#include <Core/api/game/loading_detection.h>
#include <Core/api/game/player.h>
#include <Core/async_update.h>
#include <Core/ipc/ipc.h>
#include <Core/save_meta/save_meta.h>
#include <Core/uber_states/uber_state_interface.h>
#include <Modloader/app/methods/GameStateMachine.h>
#include <Modloader/app/methods/PlayerAbilities.h>
#include <Modloader/app/methods/TimeUtility.h>
#include <Modloader/common.h>
#include <Modloader/interception_macros.h>
#include <Modloader/windows_api/console.h>
#include <Randomizer/timing/game_timer.h>
#include <Randomizer/interop/csharp_bridge.h>
#include <fmt/format.h>
#include <atomic>
#include <mutex>
#include <unordered_set>

using namespace app::classes;

namespace randomizer::timing {
    constexpr bool ENABLE_DEBUG_LOGGING = false;

    const std::unordered_set<app::AbilityType__Enum> TRACKED_ABILITIES{
        app::AbilityType__Enum::Bash,
        app::AbilityType__Enum::DoubleJump,
        app::AbilityType__Enum::ChargeJump, // Launch
        app::AbilityType__Enum::Glide,
        app::AbilityType__Enum::WaterBreath,
        app::AbilityType__Enum::Grenade,
        app::AbilityType__Enum::SpiritLeash, // Grapple
        app::AbilityType__Enum::GlowSpell, // Flash
        app::AbilityType__Enum::SpiritSpearSpell, // Spear
        app::AbilityType__Enum::Regenerate,
        app::AbilityType__Enum::Bow,
        app::AbilityType__Enum::Hammer,
        app::AbilityType__Enum::Sword,
        app::AbilityType__Enum::Digging, // Burrow
        app::AbilityType__Enum::DashNew, // Dash
        app::AbilityType__Enum::WaterDash,
        app::AbilityType__Enum::ChakramSpell, // Shuriken
        app::AbilityType__Enum::Blaze,
        app::AbilityType__Enum::TurretSpell, // Sentry
        app::AbilityType__Enum::FeatherFlap, // Flap
        app::AbilityType__Enum::DamageUpgradeA, // Ancestral Light 1
        app::AbilityType__Enum::DamageUpgradeB, // Ancestral Light 2
    };

    const std::unordered_map<uber_states::UberState, WorldEvent> TRACKED_WORLD_EVENTS{
        { uber_states::UberState(UberStateGroup::RandoState, 2000), WorldEvent::CleanWater },
    };

    const uber_states::UberState game_finished_uber_state(34543, 11226);

    // Caches for values that are processed in multiple threads
    std::atomic<bool> game_finished = false;
    std::atomic<GameArea> current_game_area = GameArea::Void;

    // Loading time report throttling
    constexpr float loading_time_reporting_throttle_seconds = 1.f;
    std::atomic<bool> queue_loading_time_report = false;
    float loading_time_reporting_throttled_for = 0.f;

    // This is set to true by some rando routines which grant abilities temporarily
    bool disable_ability_tracking = false;

    std::mutex stats_mutex;
    std::shared_ptr<CheckpointGameStats> checkpoint_stats = std::make_shared<CheckpointGameStats>();
    std::shared_ptr<SaveFileGameStats> save_stats = std::make_shared<SaveFileGameStats>();

    namespace {
        void reset_stats() {
            stats_mutex.lock();

            checkpoint_stats = std::make_shared<CheckpointGameStats>();
            save_stats = std::make_shared<SaveFileGameStats>();

            core::save_meta::register_slot(
                    SaveMetaSlot::CheckpointGameStats,
                    SaveMetaSlotPersistence::None,
                    checkpoint_stats
            );
            core::save_meta::register_slot(
                    SaveMetaSlot::SaveFileGameStats,
                    SaveMetaSlotPersistence::ThroughDeathsAndQTMsAndBackups,
                    save_stats
            );

            queue_loading_time_report = true;

            stats_mutex.unlock();
        }

        void on_before_new_game(GameEvent event, EventTiming timing) {
            reset_stats();
        }

        void on_create_checkpoint(GameEvent event, EventTiming timing) {
            if (game_finished.load()) {
                return;
            }

            stats_mutex.lock();
            save_stats->report_checkpoint_created();
            stats_mutex.unlock();
        }

        void on_respawn(GameEvent event, EventTiming timing) {
            if (game_finished.load()) {
                return;
            }

            stats_mutex.lock();
            save_stats->report_respawn();
            stats_mutex.unlock();
        }

        void on_teleport(GameEvent event, EventTiming timing) {
            if (game_finished.load()) {
                return;
            }

            stats_mutex.lock();
            save_stats->report_teleport();
            stats_mutex.unlock();
        }

        void on_before_death(core::api::death_listener::PlayerDeath death, EventTiming timing) {
            if (game_finished.load()) {
                return;
            }

            stats_mutex.lock();
            save_stats->report_death(game::player::get_current_area());
            stats_mutex.unlock();
        }

        float time_to_next_debug_print = 0.f;

        void on_fixed_update(GameEvent event, EventTiming timing) {
            // Only set these values when in game because the main menu sets some wonky states
            if (GameStateMachine::get_IsGame()) {
                game_finished.store(game_finished_uber_state.get<bool>());
                current_game_area.store(game::player::get_current_area());
            }

            if (queue_loading_time_report && loading_time_reporting_throttled_for <= 0.f) {
                loading_time_reporting_throttled_for = loading_time_reporting_throttle_seconds;
                queue_loading_time_report = false;
                stats_mutex.lock();
                csharp_bridge::report_loading_time(save_stats->get_total_loading_time());
                stats_mutex.unlock();
            }

            loading_time_reporting_throttled_for -= TimeUtility::get_fixedDeltaTime();
        }

        void on_async_update(float delta) {
            if (game_finished.load()) {
                return;
            }

            stats_mutex.lock();
            auto loading_state = game::loading_detection::get_loading_state();
            if (loading_state == LoadingState::NotLoading) {
                save_stats->report_time_spent(current_game_area.load(), delta);
            } else {
                save_stats->report_loading_time(delta, loading_state);
                queue_loading_time_report = true;
            }
            stats_mutex.unlock();

            if (ENABLE_DEBUG_LOGGING) {
                time_to_next_debug_print -= delta;
                if (time_to_next_debug_print <= 0.f) {
                    modloader::win::console::console_send("");
                    modloader::win::console::console_send(fmt::format("time = {}, pickups = {}", save_stats->total_time, checkpoint_stats->total_pickups));
                    modloader::win::console::console_send(
                            fmt::format("max_ppm = {}, at = {}", save_stats->max_ppm_over_timespan, save_stats->max_ppm_over_timespan_at)
                    );
                    modloader::win::console::console_send(
                            fmt::format("time_lost_to_deaths = {}", save_stats->time_lost_to_deaths)
                    );
                    modloader::win::console::console_send(fmt::format("got bash at = {}", save_stats->ability_timestamps.contains(app::AbilityType__Enum::Bash) ? save_stats->ability_timestamps.at(app::AbilityType__Enum::Bash) : -1.f));
                    time_to_next_debug_print = 0.5f;
                }
            }
        }

        void initialize() {
            game::event_bus().register_handler(GameEvent::NewGame, EventTiming::Before, &on_before_new_game);
            game::event_bus().register_handler(GameEvent::CreateCheckpoint, &on_create_checkpoint);
            game::event_bus().register_handler(GameEvent::Respawn, &on_respawn);
            game::event_bus().register_handler(GameEvent::Teleport, &on_teleport);
            game::event_bus().register_handler(GameEvent::FixedUpdate, &on_fixed_update);
            core::api::death_listener::player_death_event_bus().register_handler(EventTiming::Before, &on_before_death);

            core::async_update::event_bus().register_handler(&on_async_update);
            reset_stats();

            core::ipc::register_request_handler("timer.get_stats", [](const nlohmann::json& j) {
                auto response = core::ipc::respond_to(j);

                stats_mutex.lock();
                response["payload"]["save"] = *save_stats;
                response["payload"]["checkpoint"] = *checkpoint_stats;
                stats_mutex.unlock();

                core::ipc::send_message(std::move(response));
            });

            uber_states::register_value_notify([](auto state, auto previous_value) {
                if (!state.get<bool>() || game_finished_uber_state.get<bool>()) {
                    return;
                }

                auto world_event_it = TRACKED_WORLD_EVENTS.find(state);
                if (world_event_it != TRACKED_WORLD_EVENTS.end()) {
                    stats_mutex.lock();
                    save_stats->report_world_event(world_event_it->second);
                    stats_mutex.unlock();
                }
            });
        }

        CALL_ON_INIT(initialize);

        IL2CPP_INTERCEPT(PlayerAbilities, void, SetAbility, (app::PlayerAbilities * this_ptr, app::AbilityType__Enum ability, bool value)) {
            if (value && !disable_ability_tracking && TRACKED_ABILITIES.contains(ability) && !game_finished_uber_state.get<bool>()) {
                stats_mutex.lock();
                save_stats->report_ability_acquired(ability);
                stats_mutex.unlock();
            }

            next::PlayerAbilities::SetAbility(this_ptr, ability, value);
        }
    } // namespace
} // namespace randomizer::timing

void notify_pickup_collected(GameArea area, const char* location_name) {
    if (randomizer::timing::game_finished.load()) {
        return;
    }

    randomizer::timing::stats_mutex.lock();
    randomizer::timing::checkpoint_stats->report_pickup(area);
    randomizer::timing::save_stats->report_pickup(area, std::string(location_name));
    randomizer::timing::stats_mutex.unlock();
}