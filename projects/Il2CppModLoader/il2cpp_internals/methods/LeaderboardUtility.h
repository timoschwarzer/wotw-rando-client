#include <interception_macros.h>

namespace app::methods::LeaderboardUtility {
IL2CPP_REGISTER_METHOD(0x015BA090, Leaderboard__Enum, LeaderboardBToLeaderboard, (app::LeaderboardB__Enum table));
IL2CPP_REGISTER_METHOD(0x015BA0B0, LeaderboardB__Enum, LeaderboardToLeaderboardB, (app::Leaderboard__Enum table, app::DifficultyMode__Enum difficulty_mode));
}
