#include <interception_macros.h>

namespace app::methods::SeinHold {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (SeinHold * __this));
IL2CPP_REGISTER_METHOD(0x01001B50, bool, get_IsStatePerforming, (SeinHold * __this));
IL2CPP_REGISTER_METHOD(0x005D06C0, PlatformMovement *, get_PlatformMovement, (SeinHold * __this));
IL2CPP_REGISTER_METHOD(0x01001B90, bool, get_IsPickingUp, (SeinHold * __this));
IL2CPP_REGISTER_METHOD(0x01001BD0, bool, get_IsHolding, (SeinHold * __this));
IL2CPP_REGISTER_METHOD(0x01001C10, bool, get_IsDropping, (SeinHold * __this));
IL2CPP_REGISTER_METHOD(0x01001C50, bool, get_IsThrowing, (SeinHold * __this));
IL2CPP_REGISTER_METHOD(0x01001C90, bool, get_RequiresTorchPose, (SeinHold * __this));
IL2CPP_REGISTER_METHOD(0x00CA2550, bool, get_IsUsing, (SeinHold * __this));
IL2CPP_REGISTER_METHOD(0x01001CF0, void, set_IsUsing, (SeinHold * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FBC80, IHoldable *, get_CurrentHoldable, (SeinHold * __this));
IL2CPP_REGISTER_METHOD(0x00A35F10, bool, get_SpriteMirrorLock, (SeinHold * __this));
IL2CPP_REGISTER_METHOD(0x01001D30, void, set_SpriteMirrorLock, (SeinHold * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01001DF0, bool, get_IsDropButtonDown, (SeinHold * __this));
IL2CPP_REGISTER_METHOD(0x01001F20, bool, get_OnDropButtonPressed, (SeinHold * __this));
IL2CPP_REGISTER_METHOD(0x01002050, bool, get_OnDropButtonReleased, (SeinHold * __this));
IL2CPP_REGISTER_METHOD(0x01002170, bool, get_IsThrowButtonDown, (SeinHold * __this));
IL2CPP_REGISTER_METHOD(0x01002290, bool, get_IsDropButtonUsed, (SeinHold * __this));
IL2CPP_REGISTER_METHOD(0x01002340, void, set_IsDropButtonUsed, (SeinHold * __this, bool value));
IL2CPP_REGISTER_METHOD(0x010023F0, bool, get_OnUseButtonPressed, (SeinHold * __this));
IL2CPP_REGISTER_METHOD(0x01002520, bool, get_IsUseButtonUsed, (SeinHold * __this));
IL2CPP_REGISTER_METHOD(0x010025D0, void, set_IsUseButtonUsed, (SeinHold * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01002680, bool, get_ShouldThrow, (SeinHold * __this));
IL2CPP_REGISTER_METHOD(0x01002690, void, OnSetReferenceToSein, (SeinHold * __this));
IL2CPP_REGISTER_METHOD(0x01002770, void, OnAwake, (SeinHold * __this));
IL2CPP_REGISTER_METHOD(0x01003B50, void, Start, (SeinHold * __this));
IL2CPP_REGISTER_METHOD(0x01003F10, void, OnDestroy, (SeinHold * __this));
IL2CPP_REGISTER_METHOD(0x01004340, void, OnPreRestoreCheckpoint, (SeinHold * __this));
IL2CPP_REGISTER_METHODINFO(0x0476F360, SeinHold_OnPreRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01004450, void, OnPostRestoreCheckpoint, (SeinHold * __this));
IL2CPP_REGISTER_METHODINFO(0x04735D40, SeinHold_OnPostRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01004460, void, SyncWithPlayerUberState, (SeinHold * __this));
IL2CPP_REGISTER_METHOD(0x01004760, void, UpdateCharacterState, (SeinHold * __this));
IL2CPP_REGISTER_METHOD(0x01004820, void, OnExit, (SeinHold * __this));
IL2CPP_REGISTER_METHOD(0x010049B0, void, OnDisable, (SeinHold * __this));
IL2CPP_REGISTER_METHOD(0x01004B00, void, OnModifyHorizontalPlatformMovementSettings, (SeinHold * __this, HorizontalPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x047179F8, SeinHold_OnModifyHorizontalPlatformMovementSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01004C60, void, PickUp, (SeinHold * __this, IHoldable * holdable));
IL2CPP_REGISTER_METHOD(0x01004EA0, void, ForcePickup, (SeinHold * __this, IHoldable * holdable));
IL2CPP_REGISTER_METHOD(0x010050F0, void, Drop, (SeinHold * __this));
IL2CPP_REGISTER_METHOD(0x01005220, void, DropImmediate, (SeinHold * __this));
IL2CPP_REGISTER_METHOD(0x01005350, void, SetCurrentHoldableToNull, (SeinHold * __this));
IL2CPP_REGISTER_METHOD(0x01005370, void, OnDestroyHoldable, (SeinHold * __this, IHoldable * holdable));
IL2CPP_REGISTER_METHOD(0x01005620, void, EnterPickupState, (SeinHold * __this));
IL2CPP_REGISTER_METHODINFO(0x0473B778, SeinHold_EnterPickupState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01005840, void, OnPickupAnimationPart1Finished, (SeinHold * __this));
IL2CPP_REGISTER_METHODINFO(0x04729900, SeinHold_OnPickupAnimationPart1Finished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01005B20, void, OnPickupAnimationPart2Finished, (SeinHold * __this));
IL2CPP_REGISTER_METHODINFO(0x04707C00, SeinHold_OnPickupAnimationPart2Finished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01005B30, bool, ShouldPickupAnimationPart2KeepPlaying, (SeinHold * __this));
IL2CPP_REGISTER_METHODINFO(0x04701190, SeinHold_ShouldPickupAnimationPart2KeepPlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01005CA0, void, ExitPickupState, (SeinHold * __this));
IL2CPP_REGISTER_METHODINFO(0x0474E420, SeinHold_ExitPickupState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdatePickupState, (SeinHold * __this));
IL2CPP_REGISTER_METHODINFO(0x04794C70, SeinHold_UpdatePickupState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01005DA0, void, EnterDroppingState, (SeinHold * __this));
IL2CPP_REGISTER_METHODINFO(0x047701E0, SeinHold_EnterDroppingState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010060E0, void, OnDropAnimationPart1Finished, (SeinHold * __this));
IL2CPP_REGISTER_METHODINFO(0x047168A0, SeinHold_OnDropAnimationPart1Finished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01006120, bool, ShouldDropAnimationsKeepPlaying, (SeinHold * __this));
IL2CPP_REGISTER_METHODINFO(0x04791698, SeinHold_ShouldDropAnimationsKeepPlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01006420, void, ExitDroppingState, (SeinHold * __this));
IL2CPP_REGISTER_METHODINFO(0x04704560, SeinHold_ExitDroppingState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateDroppingState, (SeinHold * __this));
IL2CPP_REGISTER_METHODINFO(0x047055D8, SeinHold_UpdateDroppingState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01006540, void, ChangeToHoldingState, (SeinHold * __this));
IL2CPP_REGISTER_METHOD(0x01006580, void, EnterHoldingState, (SeinHold * __this));
IL2CPP_REGISTER_METHODINFO(0x04702290, SeinHold_EnterHoldingState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010066A0, void, ExitHoldingState, (SeinHold * __this));
IL2CPP_REGISTER_METHODINFO(0x04775E10, SeinHold_ExitHoldingState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01006840, void, UpdateHoldingState, (SeinHold * __this));
IL2CPP_REGISTER_METHODINFO(0x0472DBF0, SeinHold_UpdateHoldingState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01005350, void, EnterInactiveState, (SeinHold * __this));
IL2CPP_REGISTER_METHODINFO(0x04755450, SeinHold_EnterInactiveState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01006B20, void, UpdateInactiveState, (SeinHold * __this));
IL2CPP_REGISTER_METHODINFO(0x04720A78, SeinHold_UpdateInactiveState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01006BA0, IHoldable *, FindHoldableToPickup, (SeinHold * __this));
IL2CPP_REGISTER_METHOD(0x01007300, void, ChangeToThrowingState, (SeinHold * __this));
IL2CPP_REGISTER_METHOD(0x01007340, void, EnterThrowingState, (SeinHold * __this));
IL2CPP_REGISTER_METHODINFO(0x047087F0, SeinHold_EnterThrowingState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01007910, void, UpdateThrowingState, (SeinHold * __this));
IL2CPP_REGISTER_METHODINFO(0x047358B8, SeinHold_UpdateThrowingState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010083A0, void, ThrowTorch, (SeinHold * __this, Action * endThrowCallback));
IL2CPP_REGISTER_METHOD(0x010084F0, void, ThrowTorchInner, (SeinHold * __this, SeinHold_ThrowAnimationSet * animationSet));
IL2CPP_REGISTER_METHOD(0x010089F0, void, OnAnimStoped, (SeinHold * __this));
IL2CPP_REGISTER_METHODINFO(0x04704768, SeinHold_OnAnimStoped__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01008A30, void, ExitThrowingState, (SeinHold * __this));
IL2CPP_REGISTER_METHODINFO(0x04706C88, SeinHold_ExitThrowingState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01008A60, Vector2, GetVelocityFromDirection, (SeinHold * __this, Vector3 direction));
IL2CPP_REGISTER_METHOD(0x01001C50, bool, ShouldContinuePlayingThrowAim, (SeinHold * __this));
IL2CPP_REGISTER_METHODINFO(0x047293A0, SeinHold_ShouldContinuePlayingThrowAim__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01008C50, void, __ctor, (SeinHold * __this));
IL2CPP_REGISTER_METHOD(0x01008FF0, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x01009080, void, _ThrowTorchInner_b__130_0, (SeinHold * __this));
IL2CPP_REGISTER_METHODINFO(0x04748780, SeinHold__ThrowTorchInner_b__130_0__MethodInfo);
}
