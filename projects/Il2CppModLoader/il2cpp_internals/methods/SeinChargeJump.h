#include <interception_macros.h>

namespace app::methods::SeinChargeJump {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A47990, bool, get_IsStatePerforming, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A479B0, bool, get_IsCharging, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A479D0, bool, get_IsJumping, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x002FBC60, List_1_Moon_ComboSystem_IComboMove_ *, get_ComboMoves, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A479E0, float, get_MoveCooldown, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x003FD590, float, get_MoveCooldownTimer, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A479F0, void, set_MoveCooldownTimer, (SeinChargeJump * __this, float value));
IL2CPP_REGISTER_METHOD(0x006C14C0, bool, get_WasGroundedSinceLastExecution, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x006C14D0, void, set_WasGroundedSinceLastExecution, (SeinChargeJump * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FD740, float, get_ProviderCooldown, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x003FDAA0, float, get_ProviderCooldownTimer, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A47A00, void, set_ProviderCooldownTimer, (SeinChargeJump * __this, float value));
IL2CPP_REGISTER_METHOD(0x00A47A10, float, get_EffectiveDamage, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A47A30, SeinChargeJumpPuppet *, get_Puppet, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x005D0720, CharacterSpriteMirror *, get_CharacterSpriteMirror, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, ButtonInputType__Enum, get_ButtonInputType, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x005D06C0, PlatformMovement *, get_PlatformMovement, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x007E3F20, AbilityType__Enum, get_ComboAbilityType, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A47AF0, bool, get_MoveHasFinished, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A47B00, bool, get_CanTurnPlay, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00417920, ComboMoveType__Enum, get_ComboMoveType, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A47B40, bool, get_CanStartCharging, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A47BA0, bool, get_CanCharge, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A47C90, bool, get_IsAttackButtonDown, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A47CE0, bool, get_OnAttackButtonPressed, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A47D50, bool, get_OnAttackButtonReleased, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A47DA0, bool, CanExecute, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A47E20, bool, CanGrabSurface, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A47E50, void, UpdateMode, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A47F50, IAttackable *, GetValidTarget, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A481A0, IComboMove *, GetComboMove, (SeinChargeJump * __this, ComboInput * input));
IL2CPP_REGISTER_METHOD(0x00A48230, void, OnAwake, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A488E0, void, OnPostRestoreCheckpoint, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHODINFO(0x0477B7D8, SeinChargeJump_OnPostRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A48950, void, OnExit, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A48970, void, ResetChargeJump, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A48970, void, OnResetAirLimits, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHODINFO(0x04754AC8, SeinChargeJump_OnResetAirLimits__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A48980, void, JumpTimelineFinished, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHODINFO(0x0470B0A0, SeinChargeJump_JumpTimelineFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A489A0, void, DashTimelineFinished, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHODINFO(0x04746C08, SeinChargeJump_DashTimelineFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A489C0, void, BounceTimelineFinished, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHODINFO(0x0478CBB0, SeinChargeJump_BounceTimelineFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A489E0, void, EnterMove, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnGoThroughPortal, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHODINFO(0x04731A48, SeinChargeJump_OnGoThroughPortal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A48BC0, void, OnWentThroughPortal, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateMove, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A48FC0, void, ExitMove, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A49190, void, InterruptMove, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A491C0, void, ClampSpeedX, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A49380, void, ChangeState, (SeinChargeJump * __this, SeinChargeJump_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00A49770, void, Update, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A49780, void, UpdateTurnAnimations, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A49B70, bool, JumpAnimationContinueCondition, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHODINFO(0x04775388, SeinChargeJump_JumpAnimationContinueCondition__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A49BE0, void, EnableGenericJumpFlipTransition, (SeinChargeJump * __this, float time));
IL2CPP_REGISTER_METHOD(0x00A488E0, void, CancelGenericJumpFlipTransition, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A49C50, void, UpdateCharacterState, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A49F60, void, UpdateState, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A4A130, void, OnEnterIdle, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A4A4F0, void, UpdateIdle, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A4A560, void, OnExitIdle, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A4A820, void, OnEnterCharging, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A4A840, void, UpdateCharging, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitCharging, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A4A8F0, void, UpdateCharged, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A4A930, void, DealDamage, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A4AF60, void, DamageTicked, (SeinChargeJump * __this, DamageResult damageResult));
IL2CPP_REGISTER_METHODINFO(0x047809F0, SeinChargeJump_DamageTicked__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A4B0E0, EffectSpawn, DamageEffectProvider, (SeinChargeJump * __this, DamageResult damageResult));
IL2CPP_REGISTER_METHODINFO(0x04792438, SeinChargeJump_DamageEffectProvider__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A4B200, void, OnEnterDashAttack, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A4B2D0, void, OnEnterBounceAttack, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A4B6A0, void, OnExitDashAttack, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A4B760, void, OnExitBounceAttack, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A4B820, void, Land, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A4BAE0, void, UpdateDashAttack, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A4BCD0, bool, TryAttacking, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x003F8E90, void, DrawDebug, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A4BDC0, void, UpdateBounceAttack, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A4C040, void, OnEnterAiming, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A4CDE0, void, UpdateDPadAngle, (bool smooth, float * angleInOut, float * kbdSpeedInOut, float * kbdAngleInOut, bool * kbdClockwiseInOut));
IL2CPP_REGISTER_METHOD(0x00A4D100, void, UpdateAngle, (SeinChargeJump * __this, bool smooth));
IL2CPP_REGISTER_METHOD(0x00A4D650, void, UpdateDirection, (SeinChargeJump * __this, Vector3 defaultDirection));
IL2CPP_REGISTER_METHOD(0x00A4DC70, void, UpdateAiming, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A4E0F0, void, ModifyHorizontalPlatformMovementSettings, (SeinChargeJump * __this, HorizontalPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHOD(0x00A4E1A0, void, ModifyGravityPlatformMovementSettings, (SeinChargeJump * __this, GravityPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHOD(0x00A4E1D0, void, OnExitAiming, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, MoveTowardsTargetPosition, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A4E3B0, void, Jump, (SeinChargeJump * __this, Vector2 direction));
IL2CPP_REGISTER_METHOD(0x00A4E9C0, void, DisableAttack, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A4E9E0, void, OnEnterJumping, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A4EDB0, void, UpdateChargeJumpEffects, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A4EF20, void, UpdateJumping, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A4F0C0, void, UpdateJumpSpeed, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A4F830, void, UpdateDirectionParameter, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A4FA30, void, OnCollision, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHODINFO(0x0470A2C8, SeinChargeJump_OnCollision__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A4FA50, void, OnExitJumping, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAnimationEvent, (SeinChargeJump * __this, SeinController3D_EventId__Enum eventId));
IL2CPP_REGISTER_METHOD(0x005D06F0, CharacterLeftRightMovement *, get_LeftRightMovement, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A4FB10, void, OnPreTurningHandlerTurn, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHODINFO(0x0474B740, SeinChargeJump_OnPreTurningHandlerTurn__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A4FEE0, void, OnSetReferenceToSein, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A504E0, void, OnDestroy, (SeinChargeJump * __this));
IL2CPP_REGISTER_METHOD(0x00A50960, void, __ctor, (SeinChargeJump * __this));
}
