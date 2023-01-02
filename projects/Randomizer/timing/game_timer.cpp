#include <Randomizer/timing/game_timer.h>
#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/game/death_listener.h>
#include <Core/api/game/loading_detection.h>
#include <Core/save_meta/save_meta.h>
#include <Core/async_update.h>
#include <Core/ipc/ipc.h>
#include <Modloader/interception_macros.h>
#include <Modloader/common.h>
#include <Modloader/windows_api/console.h>
#include <Modloader/app/methods/PlayerAbilities.h>
#include <fmt/format.h>
#include <mutex>

using namespace app::classes;

namespace core::timing {
    constexpr bool ENABLE_DEBUG_LOGGING = false;

    std::mutex stats_mutex;
    std::shared_ptr<CheckpointGameStats> checkpoint_stats = std::make_shared<CheckpointGameStats>();
    std::shared_ptr<SaveFileGameStats> save_stats = std::make_shared<SaveFileGameStats>();

    namespace {
        void reset_stats() {
            stats_mutex.lock();

            checkpoint_stats = std::make_shared<CheckpointGameStats>();
            save_stats = std::make_shared<SaveFileGameStats>();

            core::save_meta::register_slot(SaveMetaSlot::CheckpointGameStats, SaveMetaSlotPersistence::None, checkpoint_stats);
            core::save_meta::register_slot(SaveMetaSlot::SaveFileGameStats, SaveMetaSlotPersistence::ThroughDeathsAndQTMsAndBackups, save_stats);

            stats_mutex.unlock();
        }

        void on_before_new_game(GameEvent event, EventTiming timing) {
            reset_stats();
        }

        void on_create_checkpoint(GameEvent event, EventTiming timing) {
            stats_mutex.lock();
            save_stats->report_checkpoint_created();
            stats_mutex.unlock();
        }

        void on_respawn(GameEvent event, EventTiming timing) {
            stats_mutex.lock();
            save_stats->report_respawn();
            stats_mutex.unlock();
        }

        void on_teleport(GameEvent event, EventTiming timing) {
            stats_mutex.lock();
            save_stats->report_teleport();
            stats_mutex.unlock();
        }

        void on_before_death(api::death_listener::PlayerDeath death, EventTiming timing) {
            stats_mutex.lock();
            save_stats->report_death(game::player::get_current_area());
            stats_mutex.unlock();
        }

        float time_to_next_debug_print = 0.f;
        void on_async_update(float delta) {
            if (game::loading_detection::get_loading_state() == LoadingState::NotLoading) {
                stats_mutex.lock();
                save_stats->report_time_spent(game::player::get_current_area(), delta);
                stats_mutex.unlock();
            }

            if (ENABLE_DEBUG_LOGGING) {
                time_to_next_debug_print -= delta;
                if (time_to_next_debug_print <= 0.f) {
                    modloader::win::console::console_send("");
                    modloader::win::console::console_send(fmt::format("time = {}, pickups = {}", save_stats->total_time, checkpoint_stats->total_pickups));
                    modloader::win::console::console_send(fmt::format("max_ppm = {}, at = {}", save_stats->max_ppm_over_timespan, save_stats->max_ppm_over_timespan_at));
                    modloader::win::console::console_send(fmt::format("time_lost_to_deaths = {}", save_stats->time_lost_to_deaths));
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
            core::api::death_listener::player_death_event_bus().register_handler(EventTiming::Before, &on_before_death);

            async_update::event_bus().register_handler(&on_async_update);
            reset_stats();

            core::ipc::register_request_handler("timer.get_stats", [](const nlohmann::json& j) {
                auto response = core::ipc::respond_to(j);

                stats_mutex.lock();
                response["save"] = *save_stats;
                response["checkpoint"] = *checkpoint_stats;
                stats_mutex.unlock();

                core::ipc::send_message(response);
            });
        }

        CALL_ON_INIT(initialize);

        IL2CPP_INTERCEPT(PlayerAbilities, void, SetAbility, (app::PlayerAbilities * this_ptr, app::AbilityType__Enum ability, bool value)) {
            if (value) {
                stats_mutex.lock();
                save_stats->report_ability_acquired(ability);
                stats_mutex.unlock();
            }

            next::PlayerAbilities::SetAbility(this_ptr, ability, value);
        }
    }
}

void notify_pickup_collected(GameArea area, const char* location_name) {
    core::timing::stats_mutex.lock();
    core::timing::checkpoint_stats->report_pickup(area);
    core::timing::save_stats->report_pickup(area, std::string(location_name));
    core::timing::stats_mutex.unlock();
}