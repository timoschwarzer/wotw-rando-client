#include <interception_macros.h>

namespace app::methods::LeaderboardsController_UpdateCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::LeaderboardsController_UpdateCallback * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (app::LeaderboardsController_UpdateCallback * this_ptr, app::Leaderboard__Enum leaderboard, app::LeaderboardData * data));
    IL2CPP_REGISTER_METHOD(0x015C2600, app::IAsyncResult *, BeginInvoke, (app::LeaderboardsController_UpdateCallback * this_ptr, app::Leaderboard__Enum leaderboard, app::LeaderboardData * data, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::LeaderboardsController_UpdateCallback * this_ptr, app::IAsyncResult * result));
}
