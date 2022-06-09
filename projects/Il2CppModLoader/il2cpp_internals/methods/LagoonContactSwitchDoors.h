#include <interception_macros.h>

namespace app::methods::LagoonContactSwitchDoors {
IL2CPP_REGISTER_METHOD(0x00F00170, void, Awake, (app::LagoonContactSwitchDoors * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F00440, void, OnDestroy, (app::LagoonContactSwitchDoors * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F004E0, void, Start, (app::LagoonContactSwitchDoors * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F00820, void, OnEnable, (app::LagoonContactSwitchDoors * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F009C0, void, OnDisable, (app::LagoonContactSwitchDoors * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F00B60, void, FixedUpdate, (app::LagoonContactSwitchDoors * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F00B70, void, UpdateVerletStructuresState, (app::LagoonContactSwitchDoors * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F00F40, void, StopAllTimelines, (app::LagoonContactSwitchDoors * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F00FB0, void, PlayTimeline, (app::LagoonContactSwitchDoors * this_ptr, app::MoonTimeline * moon_timeline));
IL2CPP_REGISTER_METHOD(0x00F01040, void, OpenDoor, (app::LagoonContactSwitchDoors * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F01160, void, CloseDoor, (app::LagoonContactSwitchDoors * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0473EA88, LagoonContactSwitchDoors_CloseDoor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F012F0, void, ApplyOpen, (app::LagoonContactSwitchDoors * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F01310, void, OnRestoreCheckpoint, (app::LagoonContactSwitchDoors * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x047849F0, LagoonContactSwitchDoors_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F01330, void, OnFrustumEnter, (app::LagoonContactSwitchDoors * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F01340, void, OnFrustumExit, (app::LagoonContactSwitchDoors * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FF790, bool, get_InsideFrustum, (app::LagoonContactSwitchDoors * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F01350, Bounds, get_Bounds, (app::LagoonContactSwitchDoors * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_AllowCacheBounds, (app::LagoonContactSwitchDoors * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F01370, void, __ctor, (app::LagoonContactSwitchDoors * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F01400, void, _Start_b__12_0, (app::LagoonContactSwitchDoors * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04790040, LagoonContactSwitchDoors__Start_b__12_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F01410, void, _Start_b__12_1, (app::LagoonContactSwitchDoors * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0474E280, LagoonContactSwitchDoors__Start_b__12_1__MethodInfo);
}
