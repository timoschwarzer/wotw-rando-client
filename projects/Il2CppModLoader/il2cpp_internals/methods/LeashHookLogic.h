#include <interception_macros.h>

namespace app::methods::LeashHookLogic {
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::IMoonSetupAnimator *, get_MoonSetupAnimator, (app::LeashHookLogic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x015C54F0, void, set_MoonSetupAnimator, (app::LeashHookLogic * this_ptr, app::IMoonSetupAnimator * value));
    IL2CPP_REGISTER_METHOD(0x015C55C0, app::MoonAnimator *, get_ModelAnimator, (app::LeashHookLogic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x015C55F0, app::MoonTimeline *, get_OpenTransitionTimeline, (app::LeashHookLogic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x015C5610, app::MoonTimeline *, get_CloseTransitionTimeline, (app::LeashHookLogic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x015C5630, app::MoonTimeline *, get_OpenedTimeline, (app::LeashHookLogic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x015C5650, app::MoonTimeline *, get_ClosedTimeline, (app::LeashHookLogic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x015C5670, app::FloatAnimationParameter *, get_OpenAngle, (app::LeashHookLogic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x015C56A0, app::SeinSpiritLeashAbility *, get_Leash, (app::LeashHookLogic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x015C57E0, app::Transform *, get_HookTarget, (app::LeashHookLogic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x015C57E0, app::Transform *, get_HookTargetTransform, (app::LeashHookLogic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x015C5810, void, SetAnimationAngle, (app::LeashHookLogic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x015C5B70, void, Start, (app::LeashHookLogic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x015C5D40, void, OnDestroy, (app::LeashHookLogic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00B5E0F0, void, OnPostRestoreCheckpoint, (app::LeashHookLogic * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047889B8, LeashHookLogic_OnPostRestoreCheckpoint__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x015C5F70, void, Closed, (app::LeashHookLogic * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047984D8, LeashHookLogic_Closed__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x015C5F80, void, Opened, (app::LeashHookLogic * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0477EBB0, LeashHookLogic_Opened__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x015C5F90, void, ChangeState, (app::LeashHookLogic * this_ptr, app::LeashHookLogic_State__Enum new_state));
    IL2CPP_REGISTER_METHOD(0x015C6550, void, FixedUpdate, (app::LeashHookLogic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x015C67D0, void, PlayCurrentTimeline, (app::LeashHookLogic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x015C68A0, void, StopCurrentTimeline, (app::LeashHookLogic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x015C6970, void, SubscribeToCurrentTimelineStop, (app::LeashHookLogic * this_ptr, app::Action * action));
    IL2CPP_REGISTER_METHOD(0x015C6AA0, void, ReleaseLeash, (app::LeashHookLogic * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047500B0, LeashHookLogic_ReleaseLeash__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00D5FD60, void, __ctor, (app::LeashHookLogic * this_ptr));
}
