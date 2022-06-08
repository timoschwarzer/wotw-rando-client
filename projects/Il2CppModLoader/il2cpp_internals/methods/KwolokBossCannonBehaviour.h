#include <interception_macros.h>

namespace app::methods::KwolokBossCannonBehaviour {
IL2CPP_REGISTER_METHOD(0x0124C3F0, Vector3, get_ProjectedShootPoint, (KwolokBossCannonBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsLocomotionFollowAllowed, (KwolokBossCannonBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsLocomotionStayAtRangeAllowed, (KwolokBossCannonBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0124C560, void, OnDestroy, (KwolokBossCannonBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0124C6F0, void, OnEntityInitialized, (KwolokBossCannonBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0124C870, void, OnEnter, (KwolokBossCannonBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0124D5C0, BehaviourStatus__Enum, OnExecute, (KwolokBossCannonBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0124D750, void, OnExit, (KwolokBossCannonBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0124DF20, float, ComputeUtility, (KwolokBossCannonBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanAccumulateHits, (KwolokBossCannonBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanHitReact, (KwolokBossCannonBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0124E170, void, ModifyAcceleration, (KwolokBossCannonBehaviour * __this, float * acceleration, float * deceleration));
IL2CPP_REGISTER_METHODINFO(0x047074C0, KwolokBossCannonBehaviour_ModifyAcceleration__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0124E210, void, ModifyMaxMovementSpeed, (KwolokBossCannonBehaviour * __this, float * speed));
IL2CPP_REGISTER_METHODINFO(0x04768FE0, KwolokBossCannonBehaviour_ModifyMaxMovementSpeed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0124E220, void, ModifyDesiredLookAngle, (KwolokBossCannonBehaviour * __this, float * angle));
IL2CPP_REGISTER_METHODINFO(0x04793D78, KwolokBossCannonBehaviour_ModifyDesiredLookAngle__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0124E3C0, void, OnDamageReceivedCallback, (KwolokBossCannonBehaviour * __this, DamageResult result));
IL2CPP_REGISTER_METHODINFO(0x0472D7F8, KwolokBossCannonBehaviour_OnDamageReceivedCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0124E5F0, void, CacheTarget, (KwolokBossCannonBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0124E8C0, void, Shoot, (KwolokBossCannonBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0124EA10, void, FixedUpdate, (KwolokBossCannonBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0124EB40, void, ProjectileCollision, (KwolokBossCannonBehaviour * __this, Collision * collision));
IL2CPP_REGISTER_METHODINFO(0x04732208, KwolokBossCannonBehaviour_ProjectileCollision__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0124EEC0, bool, CanSpawnCreep, (KwolokBossCannonBehaviour * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x0124F070, void, SpawnCreep, (KwolokBossCannonBehaviour * __this, Vector3 position, Vector3 up, Transform * parent));
IL2CPP_REGISTER_METHOD(0x0124F3D0, Projectile *, SpawnProjectile, (KwolokBossCannonBehaviour * __this, Vector2 shootPoint, Vector3 shootVelocity));
IL2CPP_REGISTER_METHOD(0x0124F820, void, OnShootEvent, (KwolokBossCannonBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047526A8, KwolokBossCannonBehaviour_OnShootEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0124F840, void, InitializeCancellableController, (KwolokBossCannonBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0124F8D0, void, InitializeHitReactionController, (KwolokBossCannonBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0124F960, void, OnCanFinishEnd, (KwolokBossCannonBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0124F970, void, OnCanFinishStart, (KwolokBossCannonBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0124F980, void, PlayTimeline, (KwolokBossCannonBehaviour * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x0124FA80, void, PlayStart, (KwolokBossCannonBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0124FB60, void, OnStartEnded, (KwolokBossCannonBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04703DD0, KwolokBossCannonBehaviour_OnStartEnded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0124FB70, void, PlayShoot, (KwolokBossCannonBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0124FC50, void, OnShootEnded, (KwolokBossCannonBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04746DD0, KwolokBossCannonBehaviour_OnShootEnded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0124FE00, void, PlayEnd, (KwolokBossCannonBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0124FEE0, void, OnEndEnded, (KwolokBossCannonBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04734E38, KwolokBossCannonBehaviour_OnEndEnded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0124FEF0, void, UpdateState, (KwolokBossCannonBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01250010, void, PositionOnSide, (KwolokBossCannonBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012503B0, void, ClearMoveRequest, (KwolokBossCannonBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01250410, bool, RepositionIfNeeded, (KwolokBossCannonBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01250690, Enum__Array *, GetEntries, (KwolokBossCannonBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01250730, Enum, Evaluate, (KwolokBossCannonBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, (KwolokBossCannonBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012507F0, void, __ctor, (KwolokBossCannonBehaviour * __this));
}
