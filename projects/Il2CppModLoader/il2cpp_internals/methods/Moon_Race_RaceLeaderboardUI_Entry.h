#include <interception_macros.h>

namespace app::methods::Moon_Race::RaceLeaderboardUI_Entry {
IL2CPP_REGISTER_METHOD(0x00C49210, void, Display, (app::RaceLeaderboardUI_Entry * this_ptr, int32_t rank, app::String * player_name, float time, bool accuracy, app::Color name_color, app::Color rank_and_time_color));
IL2CPP_REGISTER_METHOD(0x00C49770, void, DisplayEmpty, (app::RaceLeaderboardUI_Entry * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::RaceLeaderboardUI_Entry * this_ptr));
}
