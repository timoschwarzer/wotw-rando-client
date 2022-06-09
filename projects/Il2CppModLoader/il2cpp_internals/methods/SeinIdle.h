#include <interception_macros.h>

namespace app::methods::SeinIdle {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (app::SeinIdle * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0100AE90, SeinIdlePuppet*, get_Puppet, (app::SeinIdle * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005D06C0, PlatformMovement*, get_PlatformMovement, (app::SeinIdle * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005D06C0, CharacterPlatformMovement*, get_CharacterPlatformMovement, (app::SeinIdle * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005D06F0, CharacterLeftRightMovement*, get_LeftRightMovement, (app::SeinIdle * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005D0720, CharacterSpriteMirror*, get_SpriteMirror, (app::SeinIdle * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0100AF50, bool, get_IsOnSlope, (app::SeinIdle * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0100B000, bool, get_IsFacingLeft, (app::SeinIdle * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0100B060, bool, get_ShouldIdleAnimationPlay, (app::SeinIdle * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0100B070, void, OnSetReferenceToSein, (app::SeinIdle * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0100B280, bool, get_IsStatePerforming, (app::SeinIdle * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0100B3D0, bool, ShouldIdleAnimationKeepPlaying, (app::SeinIdle * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0100B670, bool, ShouldTurningBlockedAnimationPlay, (app::SeinIdle * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04780228, SeinIdle_ShouldTurningBlockedAnimationPlay__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0100B8D0, void, OnPostAdjustSpeedBasedOnCollisions, (app::SeinIdle * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04766CB0, SeinIdle_OnPostAdjustSpeedBasedOnCollisions__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0100B910, void, UpdateCharacterState, (app::SeinIdle * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0100B920, void, Update, (app::SeinIdle * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0100BBF0, void, UpdateSlopeParam, (app::SeinIdle * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0100BE60, void, PlayIdleAnimation, (app::SeinIdle * this_ptr, app::Func_1_Boolean_* should_keep_playing));
    IL2CPP_REGISTER_METHOD(0x0100C060, void, PlayTurningBlockedAnimation, (app::SeinIdle * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0100C450, void, StartTurningBlockedLoop, (app::SeinIdle * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0472BD48, SeinIdle_StartTurningBlockedLoop__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0100C830, void, FinishTurningBlocked, (app::SeinIdle * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0470E160, SeinIdle_FinishTurningBlocked__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0100CB60, void, OnEnter, (app::SeinIdle * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0100CD40, void, OnExit, (app::SeinIdle * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005C9550, void, __ctor, (app::SeinIdle * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0100B060, bool, _OnSetReferenceToSein_b__25_0, (app::SeinIdle * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04742298, SeinIdle__OnSetReferenceToSein_b__25_0__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0100CF40, bool, _FinishTurningBlocked_b__37_0, (app::SeinIdle * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04715838, SeinIdle__FinishTurningBlocked_b__37_0__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0100D070, void, _FinishTurningBlocked_b__37_1, (app::SeinIdle * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04760550, SeinIdle__FinishTurningBlocked_b__37_1__MethodInfo);
} // namespace app::methods::SeinIdle
