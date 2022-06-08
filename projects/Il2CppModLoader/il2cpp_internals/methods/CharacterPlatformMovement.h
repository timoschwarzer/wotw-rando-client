#include <interception_macros.h>

namespace app::methods::CharacterPlatformMovement {
IL2CPP_REGISTER_METHOD(0x01303670, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x01303710, void, AggressiveForceStickOn, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01303720, void, AggressiveForceStickOff, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01303730, Collider *, get_GroundCollider, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01303740, void, set_GroundCollider, (CharacterPlatformMovement * __this, Collider * value));
IL2CPP_REGISTER_METHOD(0x01303770, Collider *, get_CeilingCollider, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01303780, void, set_CeilingCollider, (CharacterPlatformMovement * __this, Collider * value));
IL2CPP_REGISTER_METHOD(0x013037B0, Collider *, get_WallLeftCollider, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x013037C0, void, set_WallLeftCollider, (CharacterPlatformMovement * __this, Collider * value));
IL2CPP_REGISTER_METHOD(0x013037F0, Collider *, get_WallRightCollider, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01303800, void, set_WallRightCollider, (CharacterPlatformMovement * __this, Collider * value));
IL2CPP_REGISTER_METHOD(0x00696600, DamageDealer *, get_GroundDamageDealer, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01303830, DamageDealer *, get_CeilingDamageDealer, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x006A67A0, DamageDealer *, get_WallLeftDamageDealer, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01303840, DamageDealer *, get_WallRightDamageDealer, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01303850, bool, get_UseSafeMovementCode, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01303860, void, set_UseSafeMovementCode, (CharacterPlatformMovement * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01303870, void, SetCollider, (CharacterPlatformMovement * __this, Collider * collider, Collider * * m_collider, DamageDealer * * m_dmgDealer));
IL2CPP_REGISTER_METHOD(0x013039B0, bool, get_IsGroundHurting, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01303A50, bool, get_IsWallLeftHurting, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01303AF0, bool, get_IsWallRightHurting, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01303B90, bool, get_IsWallHurting, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01303D10, bool, IsSurfaceDamageDealerHurting, (DamageDealer * dmgDealer));
IL2CPP_REGISTER_METHOD(0x01303DE0, bool, get_FaceLeft, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01303E50, bool, get_FaceRight, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01303EC0, Vector2, get_KickbackDirection, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01303F80, void, set_KickbackDirection, (CharacterPlatformMovement * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x01303FB0, bool, get_HeadAndFeetAgainstWall, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01303FD0, bool, get_HeadOrFeetAgainstWall, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01303FF0, float, get_MaxGroundAngle, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01304040, float, get_MaxCeilingAngle, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01304090, bool, IsWallLeft, (CharacterPlatformMovement * __this, Vector3 normal));
IL2CPP_REGISTER_METHOD(0x01304110, bool, IsWallRight, (CharacterPlatformMovement * __this, Vector3 normal));
IL2CPP_REGISTER_METHOD(0x01304190, bool, IsGround, (CharacterPlatformMovement * __this, Vector3 normal));
IL2CPP_REGISTER_METHOD(0x013042F0, bool, IsCeiling, (CharacterPlatformMovement * __this, Vector3 normal));
IL2CPP_REGISTER_METHOD(0x01304450, bool, get_IsSuspended, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01304460, void, set_IsSuspended, (CharacterPlatformMovement * __this, bool value));
IL2CPP_REGISTER_METHOD(0x013044E0, Vector3, get_RigidbodyVelocity, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01304570, bool, get_StickToMovingPlatform, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01304590, bool, get_IsAnticipatingLanding, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x013045B0, RaycastHit, get_AntecipationRayHit, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x013045E0, void, OnAwake, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01304870, void, OnDestroy, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01304B70, void, OnEnable, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01304C20, void, OnDisable, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01304E30, void, OnPreRestore, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHODINFO(0x04769308, CharacterPlatformMovement_OnPreRestore__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01305020, void, OnPrewarm, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01305120, CharacterPlatformMovement_ScheduledSpeedCurve *, ScheduleSpeedCurve, (CharacterPlatformMovement * __this, CharacterPlatformMovement_ScheduledSpeedCurve * curveEntry));
IL2CPP_REGISTER_METHOD(0x013051F0, void, AddExternalForce, (CharacterPlatformMovement * __this, ExternalForceEntry entry, bool updateEntryFromSameSource));
IL2CPP_REGISTER_METHOD(0x01305520, Vector2, GetExternalForceFromSource, (CharacterPlatformMovement * __this, Object_1 * source));
IL2CPP_REGISTER_METHOD(0x01305720, void, ClearExternalForces, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x013057D0, String *, GetExternalForceSummary, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01305B10, Vector2, GetExternalForce, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01305C90, void, UpdateExternalForceEntries, (CharacterPlatformMovement * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01306050, void, ClearScheduleCurves, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01306100, void, OnMoonControllerColliderHit, (CharacterPlatformMovement * __this, MoonControllerColliderHit * hitInfo));
IL2CPP_REGISTER_METHOD(0x01306BC0, void, OnCollisionEnter, (CharacterPlatformMovement * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x01306BD0, void, OnCollisionStay, (CharacterPlatformMovement * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x01306BE0, Vector2, get_LastSpeed, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01306C00, void, OnCollision, (CharacterPlatformMovement * __this, Collision * collision, bool justCollided));
IL2CPP_REGISTER_METHOD(0x013076D0, void, UpdateSurfaceDetails, (CharacterPlatformMovement * __this, GameObject * soundHostGameObject));
IL2CPP_REGISTER_METHOD(0x013077D0, void, ShrinkCapsule, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01307910, void, ExpandCapsule, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01307A40, void, Move, (CharacterPlatformMovement * __this, Vector3 move));
IL2CPP_REGISTER_METHOD(0x01307B80, bool, Test, (CharacterPlatformMovement * __this, Vector3 move, MoonControllerColliderHit * moonControllerColliderHit));
IL2CPP_REGISTER_METHOD(0x01307D50, bool, Test, (CharacterPlatformMovement * __this, Vector3 move, MoonControllerColliderHit * moonControllerColliderHit, LayerMask mask, QueryTriggerInteraction__Enum triggerInteraction));
IL2CPP_REGISTER_METHOD(0x01307F40, bool, Test, (CharacterPlatformMovement * __this, Vector3 move));
IL2CPP_REGISTER_METHOD(0x00805AA0, int32_t, get_GroundMask, ());
IL2CPP_REGISTER_METHOD(0x013080F0, bool, TeleportAndPlaceOnGround, (CharacterPlatformMovement * __this, Vector3 target, float lift, float distance));
IL2CPP_REGISTER_METHOD(0x01308150, bool, TeleportAndPlaceOnGround, (CharacterPlatformMovement * __this, Vector3 target, RaycastHit * hit, float lift, float distance));
IL2CPP_REGISTER_METHOD(0x01308440, bool, TryPlaceOnGround, (CharacterPlatformMovement * __this, RaycastHit * hit, float distance));
IL2CPP_REGISTER_METHOD(0x01308710, bool, PlaceOnGround, (CharacterPlatformMovement * __this, float lift, float distance));
IL2CPP_REGISTER_METHOD(0x01308B70, bool, get_IsOnClimbableWall, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01308C20, bool, get_IsOnClimbableWallInternal, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x013099F0, bool, IsNormalInLimit, (CharacterPlatformMovement * __this, Vector3 normal, float limit, Vector3 side));
IL2CPP_REGISTER_METHOD(0x01309BF0, void, TestAgainstWall, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x0130A050, void, HackSpeeds, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x0043D9E0, UpdateType__Enum, get_UpdateType, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x0130A1A0, bool, OnUpdate, (CharacterPlatformMovement * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x0130AA60, void, ScheduleJobs, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x0130AA90, void, CompleteUpdate, (CharacterPlatformMovement * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x0130B240, bool, get_IsAllowedNonZeroZPosition, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x0130B250, void, UpdateLandingAnticipation, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x0130BD40, bool, LandAnticipationCheck, (CharacterPlatformMovement * __this, float time, Vector2 velocity, LayerMask groundMask));
IL2CPP_REGISTER_METHOD(0x0130BFD0, void, LateUpdate, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x0130C090, void, KeepOnSurface, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x0130CE00, void, AdjustSpeedBasedOnCollisions, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x0130D3B0, Vector2, CalculatePositionDelta, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x0130DC50, void, UpdateRaysSched, (CharacterPlatformMovement * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x0130F0B0, void, UpdateRaysComplete, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x0130F780, Vector3, get_FeetRayPosition, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x0130F7B0, Vector3, get_HeadRayPosition, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x0130F7E0, void, Unity5PhysicsBugWorkAround, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x0130F990, bool, get_GroundNormalIsValid, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x0130F9A0, void, set_GroundNormalIsValid, (CharacterPlatformMovement * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0130F9B0, void, UpdateNormals, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x0130FE50, void, UpdateIsOnClimbableWall, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x0130FF80, void, OverrideGroundContactNormal, (CharacterPlatformMovement * __this, Vector2 newGroundContactNormal));
IL2CPP_REGISTER_METHOD(0x0130FFB0, void, AddKickback, (CharacterPlatformMovement * __this, Kickback * kickback, float airSustainDuration, bool instant));
IL2CPP_REGISTER_METHOD(0x01310000, void, AddKickback, (CharacterPlatformMovement * __this, AnimationCurve * curve, Vector2 direction, float kickbackMultiplier, float airHangTime, bool instant, bool applyForceAlongTheGround));
IL2CPP_REGISTER_METHOD(0x013103F0, void, AddKickback, (CharacterPlatformMovement * __this, Vector2 direction, float kickbackMultiplier, float airHangTime, bool instant, bool applyForceAlongTheGround));
IL2CPP_REGISTER_METHOD(0x01310700, void, RemoveKickbacks, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01310710, void, AddSimpleKickback, (CharacterPlatformMovement * __this, Vector2 force));
IL2CPP_REGISTER_METHOD(0x01310730, void, UpdateKickback, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x01310D50, IEnumerator *, MoveSeinToPositionSmoothly, (CharacterPlatformMovement * __this, float position, int32_t frames));
IL2CPP_REGISTER_METHOD(0x01310EC0, void, __ctor, (CharacterPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x013119E0, void, __cctor, ());
}
