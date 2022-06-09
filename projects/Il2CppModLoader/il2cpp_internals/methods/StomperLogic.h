#include <interception_macros.h>

namespace app::methods::StomperLogic {
    IL2CPP_REGISTER_METHOD(0x00659560, void, Awake, (app::StomperLogic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00659730, void, OnDestroy, (app::StomperLogic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00659900, void, CalculateDistance, (app::StomperLogic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00659F90, void, OnEnable, (app::StomperLogic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00659F90, void, Start, (app::StomperLogic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00659FA0, void, InitializeIfNeeded, (app::StomperLogic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0065A770, void, FixedUpdate, (app::StomperLogic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0065AD40, void, OnRestoreCheckpoint, (app::StomperLogic * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04790BD8, StomperLogic_OnRestoreCheckpoint__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0065AD80, void, UpdatePosition, (app::StomperLogic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0065B030, void, ChangeState, (app::StomperLogic * this_ptr, app::StomperLogic_State__Enum state));
    IL2CPP_REGISTER_METHOD(0x0065B1B0, void, PlayerTouchedTrigger, (app::StomperLogic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0065B250, void, MoveBody, (app::StomperLogic * this_ptr, app::Rigidbody * rigidbody, app::Vector3 position));
    IL2CPP_REGISTER_METHOD(0x0065B560, bool, get_IsSuspended, (app::StomperLogic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0065B570, void, set_IsSuspended, (app::StomperLogic * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x0065B580, app::SuspendableMask__Enum, get_Mask, (app::StomperLogic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0065B590, void, set_Mask, (app::StomperLogic * this_ptr, app::SuspendableMask__Enum value));
    IL2CPP_REGISTER_METHOD(0x002FBCC0, app::IMoonSetupAnimator *, get_MoonSetupAnimator, (app::StomperLogic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0065B650, void, set_MoonSetupAnimator, (app::StomperLogic * this_ptr, app::IMoonSetupAnimator * value));
    IL2CPP_REGISTER_METHOD(0x0065B720, void, PlaySound, (app::StomperLogic * this_ptr, app::StomperVisuals_SoundEvent__Enum sound_event));
    IL2CPP_REGISTER_METHOD(0x0065B8A0, void, StopSound, (app::StomperLogic * this_ptr, app::StomperVisuals_SoundEvent__Enum sound_event));
    IL2CPP_REGISTER_METHOD(0x0065BA40, void, SpawnStompDust, (app::StomperLogic * this_ptr, app::Vector3 position));
    IL2CPP_REGISTER_METHOD(0x0065BB30, void, PlayTriggerStomperTimeline, (app::StomperLogic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0065BCF0, void, PlayStomperFallingTimeline, (app::StomperLogic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0065BEB0, void, SetVisualsFixedJoint, (app::StomperLogic * this_ptr, app::Rigidbody * body));
    IL2CPP_REGISTER_METHOD(0x0065BF90, void, __ctor, (app::StomperLogic * this_ptr));
}
