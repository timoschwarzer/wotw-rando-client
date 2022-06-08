#include <interception_macros.h>

namespace app::methods::Projectile {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanGoThroughPortals, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00B39320, bool, get_Explode, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00C74EE0, void, set_Explode, (Projectile * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00C74EF0, int32_t, get_BouncesRemaining, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00C74F00, void, set_BouncesRemaining, (Projectile * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0065FBA0, Projectile_ExplodeCollisionInfo *, get_ExplodeCollision, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x0065FBC0, Projectile_ExplodeCollisionInfo *, get_RicochetCollision, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x0065FBD0, void, set_RicochetCollision, (Projectile * __this, Projectile_ExplodeCollisionInfo * value));
IL2CPP_REGISTER_METHOD(0x00C74F10, Vector3, get_Displacement, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00C74F30, void, set_Displacement, (Projectile * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x00C74F50, Vector3, get_SpeedVector, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00C75050, void, set_SpeedVector, (Projectile * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x005D8A80, bool, ShouldExplodeInWater, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x003FCB00, bool, CanBeBashed, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritFlamed, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsStompBouncable, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeLevelUpBlasted, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00C75270, Vector3, get_Position, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00C75300, void, set_Position, (Projectile * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeStomped, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeChargeFlamed, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeDashed, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeGrenaded, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsDead, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSlashed, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHeavySpiritSlashed, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritLeashed, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHomingMissiled, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTrapped, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSpeared, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByBow, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByHammerHandle, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHitByMelee, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00614BA0, bool, CanBeTeleportedByBeacon, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGlowed, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00C75380, void, SetExplodeLater, (Projectile * __this, bool val));
IL2CPP_REGISTER_METHOD(0x00C75390, void, SetExplode, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00C753A0, void, OnEnterBash, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBashHighlight, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBashDehighlight, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00C754B0, int32_t, get_BashPriority, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00597B10, int32_t, get_HammerPriority, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_HammerEnableAutoTarget, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CountsTowardsPowerOfLightAchievement, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00C754C0, void, OnRecieveDamage, (Projectile * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00C75A10, int32_t, get_HeavySpiritSlashPriority, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00C75A20, void, set_HeavySpiritSlashPriority, (Projectile * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBashed, (Projectile * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnHeavySpiritSlashHighlight, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnHeavySpiritSlashDehighlight, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00C75A30, void, OnPoolSpawned, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00C75BC0, void, OnPoolDespawned, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00C75BE0, Vector3, IPortalVisitor_get_Speed, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00C75CE0, void, IPortalVisitor_set_Speed, (Projectile * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnGoThroughPortal, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPortalOverlapEnter, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPortalOverlapExit, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00C75DE0, Vector3, get_Direction, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00C75E00, void, set_Direction, (Projectile * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x00C75E20, float, get_Speed, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00C75E30, void, set_Speed, (Projectile * __this, float value));
IL2CPP_REGISTER_METHOD(0x0071F210, GameObject *, get_LastReflector, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x0071F220, void, set_LastReflector, (Projectile * __this, GameObject * value));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeReflected, (Projectile * __this, float maximumReflectableDamage));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnGrabbed, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnReleased, (Projectile * __this, float speed, Vector3 direction));
IL2CPP_REGISTER_METHOD(0x00C75E40, void, OnReflected, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CountsTowardsSuperJumpAchievement, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00C75E50, bool, get_IsSuspended, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00C75E60, void, set_IsSuspended, (Projectile * __this, bool value));
IL2CPP_REGISTER_METHOD(0x004B67E0, SuspendableMask__Enum, get_Mask, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00C760C0, void, set_Mask, (Projectile * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00C76180, void, OnValidate, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00C76240, void, Start, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00C76580, void, Awake, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00C76CF0, void, OnEnable, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00C76EA0, void, OnDisable, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00C77010, void, OnDestroy, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00C77370, bool, ShouldDealDamage, (Projectile * __this, GameObject * go));
IL2CPP_REGISTER_METHODINFO(0x04707100, Projectile_ShouldDealDamage__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C77480, void, OnDamageDealt, (Projectile * __this, DamageDealer * damageDealer, DamageResult damageResult));
IL2CPP_REGISTER_METHOD(0x00C77640, void, FixedUpdate, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBeforeExplodeOnWater, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00C77E50, void, Launch, (Projectile * __this, float speed, Vector3 direction, float gravity, GameObject * owner, DamageOwner * damageOwner));
IL2CPP_REGISTER_METHOD(0x00C78080, void, SetDamageParameters, (Projectile * __this, float damage, DamageWeight__Enum damageWeight, DamageLayerMask__Enum damageLayerMask, DamageOwner * damageOwner, AbilityType__Enum abilityType));
IL2CPP_REGISTER_METHOD(0x00C781F0, void, ExplodeProjectile, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00C78450, void, Destroy, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00C787A0, void, OnDestroyTimelineEnded, (Projectile * __this));
IL2CPP_REGISTER_METHODINFO(0x04796848, Projectile_OnDestroyTimelineEnded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C78A80, bool, RicochetProjectile, (Projectile * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00C78EA0, void, OnRicochet, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00C79040, void, OnCollisionEnter, (Projectile * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00C79320, bool, SpawnCollisionVFX, (Projectile * __this, GameObject * prefab));
IL2CPP_REGISTER_METHOD(0x00C795E0, void, UpdateVelocity, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00C79990, void, UpdateWaterDamping, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00C79A70, void, UpdateSpeedAndDirection, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00C79C40, void, HandleGravity, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00C79DF0, bool, ShouldPierce, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00C79E30, int32_t, get_BounceCount, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00C79F10, bool, HandleMirrorStrike, (Projectile * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00C7A760, void, ShootInArc, (Projectile * __this, Vector3 start, Vector3 end, float gravity, float arcHeight));
IL2CPP_REGISTER_METHOD(0x00C7AB50, void, OnBeforeTeleportation, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00C7AB70, void, Teleport, (Projectile * __this, Vector2 newPosition));
IL2CPP_REGISTER_METHOD(0x00C7ACA0, void, OnAfterTeleportation, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00C7ACC0, Vector2, ITeleportBeaconAttackable_get_Position, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_TrackTranformChangesForRecording, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x0043D9E0, RecordableParsingGroup__Enum, get_ParsingGroup, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00C7ADD0, TrackingExclusions, get_TrackingExclusions, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00A5BA50, IDamageReciever__Array *, get_AffectedReceivers, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00C7ADE0, void, __ctor, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, IDamageReciever_get_gameObject, (Projectile * __this));
IL2CPP_REGISTER_METHOD(0x00506170, Transform *, IDamageReciever_get_transform, (Projectile * __this));
}
