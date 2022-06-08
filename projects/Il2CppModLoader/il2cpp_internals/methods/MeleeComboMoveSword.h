#include <interception_macros.h>

namespace app::methods::MeleeComboMoveSword {
IL2CPP_REGISTER_METHOD(0x002FA000, void, Awake, (MeleeComboMoveSword * __this));
IL2CPP_REGISTER_METHOD(0x013A1220, float, get_EffectiveDamage, (MeleeComboMoveSword * __this));
IL2CPP_REGISTER_METHOD(0x013A1280, String *, get_AnimationSpeedMultiplierParameterName, (MeleeComboMoveSword * __this));
IL2CPP_REGISTER_METHOD(0x013A1300, Vector2, get_EffectiveRootMotionMultiplier, (MeleeComboMoveSword * __this));
IL2CPP_REGISTER_METHOD(0x013A1410, float, get_EffectiveKnockbackAddY, (MeleeComboMoveSword * __this));
IL2CPP_REGISTER_METHOD(0x009C1070, CharacterPlatformMovement *, get_PlatformMovement, (MeleeComboMoveSword * __this));
IL2CPP_REGISTER_METHOD(0x006A67A0, MeleeWeaponSword *, get_Sword, (MeleeComboMoveSword * __this));
IL2CPP_REGISTER_METHOD(0x013A1420, void, Initialize, (MeleeComboMoveSword * __this, SeinComboHandler * handler, MeleeWeapon * weapon));
IL2CPP_REGISTER_METHOD(0x013A1950, bool, CanExecute, (MeleeComboMoveSword * __this));
IL2CPP_REGISTER_METHOD(0x013A1A90, bool, get_MoveHasFinished, (MeleeComboMoveSword * __this));
IL2CPP_REGISTER_METHOD(0x00CC8D40, AbilityType__Enum, get_ComboAbilityType, (MeleeComboMoveSword * __this));
IL2CPP_REGISTER_METHOD(0x013A1AA0, void, ModifyGravityPlatformMovementSettings, (MeleeComboMoveSword * __this, GravityPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHOD(0x013A1AD0, void, ModifyHorizontalPlatformMovementSettings, (MeleeComboMoveSword * __this, HorizontalPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHOD(0x013A1B20, void, OnMoveWindowOpen, (MeleeComboMoveSword * __this, MoveEventType__Enum eventType));
IL2CPP_REGISTER_METHOD(0x013A1C30, void, OnMoveWindowClosed, (MeleeComboMoveSword * __this, MoveEventType__Enum eventType));
IL2CPP_REGISTER_METHOD(0x013A1C60, bool, HitGroundSinceLastUse, (MeleeComboMoveSword * __this));
IL2CPP_REGISTER_METHOD(0x013A1D60, void, Boost, (MeleeComboMoveSword * __this));
IL2CPP_REGISTER_METHODINFO(0x047226A8, MeleeComboMoveSword_Boost__MethodInfo);
IL2CPP_REGISTER_METHOD(0x013A22E0, void, SpawnEffects, (MeleeComboMoveSword * __this));
IL2CPP_REGISTER_METHODINFO(0x04791990, MeleeComboMoveSword_SpawnEffects__MethodInfo);
IL2CPP_REGISTER_METHOD(0x013A2830, void, ApplySettings, (MeleeComboMoveSword * __this));
IL2CPP_REGISTER_METHODINFO(0x04757510, MeleeComboMoveSword_ApplySettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x013A2B10, void, EnterMove, (MeleeComboMoveSword * __this));
IL2CPP_REGISTER_METHOD(0x013A32E0, void, UpdateMove, (MeleeComboMoveSword * __this));
IL2CPP_REGISTER_METHOD(0x013A3870, void, ExitMove, (MeleeComboMoveSword * __this));
IL2CPP_REGISTER_METHOD(0x013A3AC0, void, InterruptMove, (MeleeComboMoveSword * __this));
IL2CPP_REGISTER_METHOD(0x013A3CE0, void, OnAnimationFinished, (MeleeComboMoveSword * __this));
IL2CPP_REGISTER_METHODINFO(0x04765510, MeleeComboMoveSword_OnAnimationFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x013A3CF0, bool, KeepAnimationPlaying, (MeleeComboMoveSword * __this));
IL2CPP_REGISTER_METHOD(0x013A3D00, void, OnCollision, (MeleeComboMoveSword * __this, Collider * collider, Vector3 hitDirection, Vector3 damagePosition));
IL2CPP_REGISTER_METHOD(0x013A3D50, Vector2, ComputeEffectiveKickback, (MeleeComboMoveSword * __this, Vector3 enemyPosition));
IL2CPP_REGISTER_METHOD(0x013A3F10, bool, CanDealDamage, (MeleeComboMoveSword * __this, IAttackable * attackable));
IL2CPP_REGISTER_METHOD(0x013A4370, void, TryToDealDamage, (MeleeComboMoveSword * __this, Collider * collider, Vector3 hitDirection, Vector3 damagePosition));
IL2CPP_REGISTER_METHOD(0x013A4E60, EffectSpawn, DamageEffectProvider, (MeleeComboMoveSword * __this, DamageResult damageResult));
IL2CPP_REGISTER_METHODINFO(0x0478BA50, MeleeComboMoveSword_DamageEffectProvider__MethodInfo);
IL2CPP_REGISTER_METHOD(0x013A50F0, IEnumerator *, DummyHitStop, (MeleeComboMoveSword * __this, GameObject * toSuspend, float suspendTime));
IL2CPP_REGISTER_METHOD(0x013A5260, void, BeginAttackSegment, (MeleeComboMoveSword * __this));
IL2CPP_REGISTER_METHOD(0x013A5340, void, EndAttackSegment, (MeleeComboMoveSword * __this));
IL2CPP_REGISTER_METHOD(0x013A5430, void, __ctor, (MeleeComboMoveSword * __this));
IL2CPP_REGISTER_METHOD(0x013A55B0, void, _TryToDealDamage_b__100_0, (MeleeComboMoveSword * __this, DamageResult damageResult));
IL2CPP_REGISTER_METHODINFO(0x04765B60, MeleeComboMoveSword__TryToDealDamage_b__100_0__MethodInfo);
}
