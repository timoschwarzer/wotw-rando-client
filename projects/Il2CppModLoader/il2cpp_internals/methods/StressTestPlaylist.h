#include <interception_macros.h>

namespace app::methods::StressTestPlaylist {
IL2CPP_REGISTER_METHOD(0x0065DFB0, void, Start, (app::StressTestPlaylist * this_ptr));
IL2CPP_REGISTER_METHOD(0x0065E4E0, void, Update, (app::StressTestPlaylist * this_ptr));
IL2CPP_REGISTER_METHOD(0x0065E580, void, SetupStaticConfigs, (app::StressTestPlaylist * this_ptr));
IL2CPP_REGISTER_METHOD(0x0065EA60, bool, UseNextConfig, (app::StressTestPlaylist * this_ptr));
IL2CPP_REGISTER_METHOD(0x0065EED0, void, QueueResume, (app::StressTestPlaylist * this_ptr, app::Action * action));
IL2CPP_REGISTER_METHOD(0x0065EEE0, void, PauseCapture, (app::StressTestPlaylist * this_ptr));
IL2CPP_REGISTER_METHOD(0x0065EF00, void, ResumeCapture, (app::StressTestPlaylist * this_ptr));
IL2CPP_REGISTER_METHOD(0x0065F060, void, ResumeImmediate, (app::StressTestPlaylist * this_ptr));
IL2CPP_REGISTER_METHOD(0x0065F080, void, PauseBrief, (app::StressTestPlaylist * this_ptr));
IL2CPP_REGISTER_METHOD(0x0065F0B0, StressTester *, GetNextTest, (app::StressTestPlaylist * this_ptr));
IL2CPP_REGISTER_METHOD(0x0065F170, bool, IsLastTest, (app::StressTestPlaylist * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC00, Action *, get_OnTestSetupBegin, (app::StressTestPlaylist * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC10, void, set_OnTestSetupBegin, (app::StressTestPlaylist * this_ptr, app::Action * value));
IL2CPP_REGISTER_METHOD(0x002FBC20, Action *, get_OnTestStarted, (app::StressTestPlaylist * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC30, void, set_OnTestStarted, (app::StressTestPlaylist * this_ptr, app::Action * value));
IL2CPP_REGISTER_METHOD(0x002FBC40, Action *, get_OnTestFinished, (app::StressTestPlaylist * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC50, void, set_OnTestFinished, (app::StressTestPlaylist * this_ptr, app::Action * value));
IL2CPP_REGISTER_METHOD(0x0065F200, String *, GetTestID, (app::StressTestPlaylist * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldDisable, (app::StressTestPlaylist * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldEnable, (app::StressTestPlaylist * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldChildrenEnable, (app::StressTestPlaylist * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldSetMoonReady, (app::StressTestPlaylist * this_ptr));
IL2CPP_REGISTER_METHOD(0x0065F260, void, __ctor, (app::StressTestPlaylist * this_ptr));
IL2CPP_REGISTER_METHOD(0x0065F280, void, _UseNextConfig_b__17_0, (app::StressTestPlaylist * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0478D450, StressTestPlaylist__UseNextConfig_b__17_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0065F060, void, _UseNextConfig_b__17_1, (app::StressTestPlaylist * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0477E4E8, StressTestPlaylist__UseNextConfig_b__17_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0065F060, void, _ResumeCapture_b__20_0, (app::StressTestPlaylist * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04799BA0, StressTestPlaylist__ResumeCapture_b__20_0__MethodInfo);
}
