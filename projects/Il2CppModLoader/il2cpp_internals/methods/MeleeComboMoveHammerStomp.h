#include <interception_macros.h>

namespace app::methods::MeleeComboMoveHammerStomp {
IL2CPP_REGISTER_METHOD(0x00813FA0, HammerComboMoveBase_BalancingData *, get_BalancingBase, (MeleeComboMoveHammerStomp * __this));
IL2CPP_REGISTER_METHOD(0x0139C560, bool, get_ShockwaveEnabled, (MeleeComboMoveHammerStomp * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsUninterruptable, (MeleeComboMoveHammerStomp * __this));
IL2CPP_REGISTER_METHOD(0x0139C640, int32_t, get_GroundMask, ());
IL2CPP_REGISTER_METHOD(0x0139C650, int32_t, get_DamageableMask, ());
IL2CPP_REGISTER_METHOD(0x0139C660, void, Initialize, (MeleeComboMoveHammerStomp * __this, SeinComboHandler * handler, MeleeWeapon * weapon));
IL2CPP_REGISTER_METHOD(0x0139CA20, float, get_EffectiveDamage, (MeleeComboMoveHammerStomp * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_DealtDamage, (MeleeComboMoveHammerStomp * __this));
IL2CPP_REGISTER_METHOD(0x0139CA30, void, Start, (MeleeComboMoveHammerStomp * __this));
IL2CPP_REGISTER_METHOD(0x0139CB20, void, EnterMove, (MeleeComboMoveHammerStomp * __this));
IL2CPP_REGISTER_METHOD(0x0139CCF0, void, InterruptMove, (MeleeComboMoveHammerStomp * __this));
IL2CPP_REGISTER_METHOD(0x0139CD50, void, ExitMove, (MeleeComboMoveHammerStomp * __this));
IL2CPP_REGISTER_METHOD(0x0139CD80, void, UpdateMove, (MeleeComboMoveHammerStomp * __this));
IL2CPP_REGISTER_METHOD(0x0139CDB0, void, ModifyGravityPlatformMovementSettings, (MeleeComboMoveHammerStomp * __this, GravityPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHOD(0x0139CDE0, void, ModifyHorizontalPlatformMovementSettings, (MeleeComboMoveHammerStomp * __this, HorizontalPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHOD(0x0139CE30, void, OnCollisionGround, (MeleeComboMoveHammerStomp * __this, Vector3 normal, Collider * collider));
IL2CPP_REGISTER_METHODINFO(0x04752000, MeleeComboMoveHammerStomp_OnCollisionGround__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0139CE90, void, ChangeState, (MeleeComboMoveHammerStomp * __this, MeleeComboMoveHammerStomp_State__Enum newState));
IL2CPP_REGISTER_METHOD(0x0139D060, void, EnterInactiveState, (MeleeComboMoveHammerStomp * __this));
IL2CPP_REGISTER_METHOD(0x0139D260, void, EnterStartState, (MeleeComboMoveHammerStomp * __this));
IL2CPP_REGISTER_METHOD(0x0139DCF0, void, ExitStartState, (MeleeComboMoveHammerStomp * __this));
IL2CPP_REGISTER_METHOD(0x0139DD00, bool, KeepStartAnimationPlaying, (MeleeComboMoveHammerStomp * __this));
IL2CPP_REGISTER_METHOD(0x0139DD10, void, OnStartAnimationEnd, (MeleeComboMoveHammerStomp * __this));
IL2CPP_REGISTER_METHODINFO(0x04789008, MeleeComboMoveHammerStomp_OnStartAnimationEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0139DF70, void, OnHitWater, (MeleeComboMoveHammerStomp * __this));
IL2CPP_REGISTER_METHODINFO(0x047890C0, MeleeComboMoveHammerStomp_OnHitWater__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0139E100, void, UpdateStartState, (MeleeComboMoveHammerStomp * __this));
IL2CPP_REGISTER_METHOD(0x0139E350, void, EnterFallState, (MeleeComboMoveHammerStomp * __this));
IL2CPP_REGISTER_METHOD(0x0139E650, void, ExitFallState, (MeleeComboMoveHammerStomp * __this));
IL2CPP_REGISTER_METHOD(0x0139E770, bool, KeepFallAnimationPlaying, (MeleeComboMoveHammerStomp * __this));
IL2CPP_REGISTER_METHOD(0x0139E780, void, UpdateFallState, (MeleeComboMoveHammerStomp * __this));
IL2CPP_REGISTER_METHOD(0x0139EB60, bool, RaycastForDamageableOrGround, (MeleeComboMoveHammerStomp * __this, float rayDistance, RaycastHit * hit));
IL2CPP_REGISTER_METHOD(0x0139EC50, bool, RaycastForDamageableOrGround, (MeleeComboMoveHammerStomp * __this, float rayDistance, RaycastHit * hit, Vector3 offset));
IL2CPP_REGISTER_METHOD(0x0139F110, bool, RaycastForGround, (MeleeComboMoveHammerStomp * __this, float rayDistance, RaycastHit * hit));
IL2CPP_REGISTER_METHOD(0x0139F2C0, void, HandleCollapsingPlatform, (MeleeComboMoveHammerStomp * __this, Collider * hitCollider, bool performCollapse, bool * hitCollapsingPlatform));
IL2CPP_REGISTER_METHOD(0x0139F530, void, EnterLandState, (MeleeComboMoveHammerStomp * __this));
IL2CPP_REGISTER_METHOD(0x013A0BA0, void, UpdateLandState, (MeleeComboMoveHammerStomp * __this));
IL2CPP_REGISTER_METHOD(0x013A1030, void, OnEndAnimationEnd, (MeleeComboMoveHammerStomp * __this));
IL2CPP_REGISTER_METHODINFO(0x04710EC0, MeleeComboMoveHammerStomp_OnEndAnimationEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x013A1070, bool, KeepLandAnimationPlaying, (MeleeComboMoveHammerStomp * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnHammerTopCollision, (MeleeComboMoveHammerStomp * __this, Collider * collider, Vector3 hitDirection, Vector3 damagePosition));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnHammerHandleCollision, (MeleeComboMoveHammerStomp * __this, Collider * collider, Vector3 hitDirection, Vector3 damagePosition));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAnimationEvent, (MeleeComboMoveHammerStomp * __this, SeinController3D_EventId__Enum eventId));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnHammerHitGround, (MeleeComboMoveHammerStomp * __this, RaycastHit hitInfo, float hitSpeed, Ray ray, bool force));
IL2CPP_REGISTER_METHOD(0x013A1080, void, __ctor, (MeleeComboMoveHammerStomp * __this));
}
