#include <interception_macros.h>

namespace app::methods::MeleeComboMove {
IL2CPP_REGISTER_METHOD(0x01386280, void, ResetHitTracking, (MeleeComboMove * __this));
IL2CPP_REGISTER_METHOD(0x01386360, Entity *, GetEntityForCollider, (MeleeComboMove * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x013863F0, bool, HaveBeenHit, (MeleeComboMove * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x013865B0, void, TrackHit, (MeleeComboMove * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x01386720, Vector2, get_EffectiveRootMotionMultiplier, (MeleeComboMove * __this));
IL2CPP_REGISTER_METHOD(0x002FBC40, MeleeWeapon *, get_Weapon, (MeleeComboMove * __this));
IL2CPP_REGISTER_METHOD(0x002FBC60, MaterialBasedSeinEffectsMap *, get_HitVFX, (MeleeComboMove * __this));
IL2CPP_REGISTER_METHOD(0x01386740, bool, get_DealtDamage, (MeleeComboMove * __this));
IL2CPP_REGISTER_METHOD(0x013867D0, Vector3, get_GetTargetPosition, (MeleeComboMove * __this));
IL2CPP_REGISTER_METHOD(0x01386AF0, bool, get_HasStingerShardEquipped, (MeleeComboMove * __this));
IL2CPP_REGISTER_METHOD(0x009C5D90, bool, get_WasAttackButtonReleasedDuringThisMove, (MeleeComboMove * __this));
IL2CPP_REGISTER_METHOD(0x012025B0, float, get_MoveTime, (MeleeComboMove * __this));
IL2CPP_REGISTER_METHOD(0x01386BB0, void, OnGroundCollision, (MeleeComboMove * __this, Vector2 hitPoint, Vector2 hitNormal, Vector3 surfaceNormal, SurfaceMaterialType__Enum surfaceType, bool forceEffect, bool charged));
IL2CPP_REGISTER_METHOD(0x01387120, GameObject *, GetHitEffectPrefab, (MeleeComboMove * __this, DamageResult damageResult));
IL2CPP_REGISTER_METHOD(0x00805AA0, int32_t, get_GroundMask, ());
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_MoveHasFinished, (MeleeComboMove * __this));
IL2CPP_REGISTER_METHOD(0x008A34C0, float, get_MoveCooldown, (MeleeComboMove * __this));
IL2CPP_REGISTER_METHOD(0x00437A70, float, get_MoveCooldownTimer, (MeleeComboMove * __this));
IL2CPP_REGISTER_METHOD(0x00D33510, void, set_MoveCooldownTimer, (MeleeComboMove * __this, float value));
IL2CPP_REGISTER_METHOD(0x0043BB80, float, get_ProviderCooldown, (MeleeComboMove * __this));
IL2CPP_REGISTER_METHOD(0x00437A80, float, get_ProviderCooldownTimer, (MeleeComboMove * __this));
IL2CPP_REGISTER_METHOD(0x01387250, void, set_ProviderCooldownTimer, (MeleeComboMove * __this, float value));
IL2CPP_REGISTER_METHOD(0x00420EE0, ComboMoveType__Enum, get_ComboMoveType, (MeleeComboMove * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, ButtonInputType__Enum, get_ButtonInputType, (MeleeComboMove * __this));
IL2CPP_REGISTER_METHOD(0x01387260, bool, get_WasGroundedSinceLastExecution, (MeleeComboMove * __this));
IL2CPP_REGISTER_METHOD(0x01387270, void, set_WasGroundedSinceLastExecution, (MeleeComboMove * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01387280, IComboMove *, GetComboMove, (MeleeComboMove * __this, ComboInput * input));
IL2CPP_REGISTER_METHOD(0x013873F0, List_1_Moon_ComboSystem_IComboMove_ *, get_ComboMoves, (MeleeComboMove * __this));
IL2CPP_REGISTER_METHOD(0x01387420, void, EnterMove, (MeleeComboMove * __this));
IL2CPP_REGISTER_METHOD(0x01387740, void, InitializeTimeline, (MeleeComboMove * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x01387BC0, void, OnMoveWindowOpen, (MeleeComboMove * __this, MoveEventType__Enum eventType));
IL2CPP_REGISTER_METHOD(0x01387CD0, void, OnMoveWindowClosed, (MeleeComboMove * __this, MoveEventType__Enum eventType));
IL2CPP_REGISTER_METHOD(0x01387DE0, void, UpdateGroundAngle, (MeleeComboMove * __this));
IL2CPP_REGISTER_METHOD(0x013882B0, bool, GroundRayCast, (MeleeComboMove * __this, RaycastHit * hit));
IL2CPP_REGISTER_METHOD(0x01388460, bool, GroundRayCast, (MeleeComboMove * __this));
IL2CPP_REGISTER_METHOD(0x01388600, void, UpdateMove, (MeleeComboMove * __this));
IL2CPP_REGISTER_METHOD(0x01388D40, void, ExitMove, (MeleeComboMove * __this));
IL2CPP_REGISTER_METHOD(0x01388ED0, bool, get_IsAttackButtonUsed, (MeleeComboMove * __this));
IL2CPP_REGISTER_METHOD(0x01388F00, bool, get_IsAttackButtonDown, (MeleeComboMove * __this));
IL2CPP_REGISTER_METHOD(0x01388F30, bool, get_OnAttackButtonPressed, (MeleeComboMove * __this));
IL2CPP_REGISTER_METHOD(0x01388F60, bool, get_OnAttackButtonReleased, (MeleeComboMove * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsUninterruptable, (MeleeComboMove * __this));
IL2CPP_REGISTER_METHOD(0x01388F90, bool, CanExecute, (MeleeComboMove * __this));
IL2CPP_REGISTER_METHOD(0x0061E5C0, bool, CanInputBeQueued, (MeleeComboMove * __this));
IL2CPP_REGISTER_METHOD(0x01388FC0, bool, CanBeInterruptedBy, (MeleeComboMove * __this, IComboMove * move));
IL2CPP_REGISTER_METHOD(0x013891A0, void, InterruptMove, (MeleeComboMove * __this));
IL2CPP_REGISTER_METHOD(0x013893A0, void, Initialize, (MeleeComboMove * __this, SeinComboHandler * handler, MeleeWeapon * weapon));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Deinitialize, (MeleeComboMove * __this));
IL2CPP_REGISTER_METHOD(0x01389660, void, OnAnimationEvent, (MeleeComboMove * __this, SeinController3D_EventId__Enum eventId));
IL2CPP_REGISTER_METHOD(0x01389680, void, PlayAnimation, (MeleeComboMove * __this, MoonAnimation * animation, float speedMultiplier, Action * onStopPlaying, Func_1_Boolean_ * condition, int32_t animationPriority));
IL2CPP_REGISTER_METHOD(0x01389930, void, OnAnimationStarted, (MeleeComboMove * __this));
IL2CPP_REGISTER_METHODINFO(0x0475C558, MeleeComboMove_OnAnimationStarted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01389AB0, bool, IsValidGroundCollisionNormal, (MeleeComboMove * __this, Vector3 surfaceNormal));
IL2CPP_REGISTER_METHOD(0x01389CB0, bool, IsValidTargetPosition, (MeleeComboMove * __this, Vector2 position));
IL2CPP_REGISTER_METHOD(0x01389F30, IAttackable *, GetNearestTarget, (MeleeComboMove * __this));
IL2CPP_REGISTER_METHOD(0x0138A3C0, IAttackable *, GetNearestPotentialTarget, (MeleeComboMove * __this));
IL2CPP_REGISTER_METHOD(0x0138A920, float, ComputeAngleTo, (MeleeComboMove * __this, IAttackable * attackable));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDestroyMove, (MeleeComboMove * __this));
IL2CPP_REGISTER_METHOD(0x0138AB40, void, ResetAirLimits, (MeleeComboMove * __this));
IL2CPP_REGISTER_METHODINFO(0x0470FDA0, MeleeComboMove_ResetAirLimits__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0138ABA0, void, OnDestroy, (MeleeComboMove * __this));
IL2CPP_REGISTER_METHOD(0x0138ADA0, void, __ctor, (MeleeComboMove * __this));
}
