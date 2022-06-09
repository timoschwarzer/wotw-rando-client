#include <interception_macros.h>

namespace app::methods::LeaderboardsController {
IL2CPP_REGISTER_METHOD(0x015BF630, LeaderboardsController *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x015BF790, bool, get_Available, ());
IL2CPP_REGISTER_METHOD(0x015BF850, bool, get_Visible, ());
IL2CPP_REGISTER_METHOD(0x015BF920, void, set_Visible, (bool value));
IL2CPP_REGISTER_METHOD(0x015BFBA0, LeaderboardData *, GetLeaderboard, (app::Leaderboard__Enum leaderboard));
IL2CPP_REGISTER_METHOD(0x015BFD00, bool, Clear, (app::Leaderboard__Enum leaderboard));
IL2CPP_REGISTER_METHOD(0x015BFDF0, bool, UpdateLeaderboard, (app::Leaderboard__Enum leaderboard, app::LeaderboardFilter__Enum filter, app::DifficultyMode__Enum difficulty, app::LeaderboardsController_UpdateCallback * callback));
IL2CPP_REGISTER_METHOD(0x015BFE90, LeaderboardFilter__Enum, get_m_currentFilter, (app::LeaderboardsController * this_ptr));
IL2CPP_REGISTER_METHOD(0x015BFF30, void, set_m_currentFilter, (app::LeaderboardsController * this_ptr, app::LeaderboardFilter__Enum value));
IL2CPP_REGISTER_METHOD(0x015BFFD0, void, Update, (app::LeaderboardsController * this_ptr));
IL2CPP_REGISTER_METHOD(0x015C0610, void, UploadScores, ());
IL2CPP_REGISTER_METHOD(0x015C09D0, void, UploadEndGameScores, ());
IL2CPP_REGISTER_METHOD(0x015C0FC0, void, UploadScore, ());
IL2CPP_REGISTER_METHOD(0x015C1160, void, FixedUpdate, (app::LeaderboardsController * this_ptr));
IL2CPP_REGISTER_METHOD(0x015C13D0, IEnumerator *, UploadScoresRoutine, (app::LeaderboardsController * this_ptr, int32_t time, int32_t death_count, int32_t completion_percentage, app::DifficultyMode__Enum difficulty));
IL2CPP_REGISTER_METHOD(0x015C1540, void, SendExplorerLeaderboardData, (app::LeaderboardEntryData * data, app::DifficultyMode__Enum difficulty_mode));
IL2CPP_REGISTER_METHOD(0x015C1670, void, SendSpeedRunnersLeaderboardData, (app::LeaderboardEntryData * data, app::DifficultyMode__Enum difficulty_mode));
IL2CPP_REGISTER_METHOD(0x015C17A0, void, SendSurvivorLeaderboardData, (app::LeaderboardEntryData * data, app::DifficultyMode__Enum difficulty_mode));
IL2CPP_REGISTER_METHOD(0x015C18D0, String *, GetStatisticName, (app::LeaderboardB__Enum leaderboard));
IL2CPP_REGISTER_METHOD(0x015C1A10, void, SendLeaderboardData, (app::Leaderboard__Enum leaderboard, int32_t data, app::DifficultyMode__Enum difficulty_mode));
IL2CPP_REGISTER_METHOD(0x015C1B20, int32_t, EncodedDataFrom, (app::LeaderboardEntryData * data, app::LeaderboardB__Enum leader_board));
IL2CPP_REGISTER_METHODINFO(0x04736490, LeaderboardsController_EncodedDataFrom__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004BE040, Rect, PushDown, (app::Rect * rect, float offset));
IL2CPP_REGISTER_METHOD(0x015C1C70, void, __ctor, (app::LeaderboardsController * this_ptr));
IL2CPP_REGISTER_METHOD(0x015C1E00, void, __cctor, ());
}
