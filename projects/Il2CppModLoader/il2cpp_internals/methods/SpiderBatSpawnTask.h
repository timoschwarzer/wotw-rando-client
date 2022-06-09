#include <interception_macros.h>

namespace app::methods::SpiderBatSpawnTask {
IL2CPP_REGISTER_METHOD(0x00960460, void, OnEnterTask, (app::SpiderBatSpawnTask * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x00420EE0, BehaviourStatus__Enum, OnExecuteTask, (app::SpiderBatSpawnTask * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x00960730, void, StartSpawnTimeline, (app::SpiderBatSpawnTask * this_ptr, app::MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x006B38C0, void, OnSpawningFinnished, (app::SpiderBatSpawnTask * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04737900, SpiderBatSpawnTask_OnSpawningFinnished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::SpiderBatSpawnTask * this_ptr));
IL2CPP_REGISTER_METHOD(0x006B38D0, void, __ctor, (app::SpiderBatSpawnTask * this_ptr));
}
