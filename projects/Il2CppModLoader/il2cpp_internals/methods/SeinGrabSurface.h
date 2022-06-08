#include <interception_macros.h>

namespace app::methods::SeinGrabSurface {
IL2CPP_REGISTER_METHOD(0x014BE840, SeinGrabSurfacePuppet *, get_Puppet, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014BE900, ActiveAnimationHandle, get_ActiveAnimation, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014BE910, void, set_ActiveAnimation, (SeinGrabSurface * __this, ActiveAnimationHandle value));
IL2CPP_REGISTER_METHOD(0x006C8770, GrabbableSurface *, get_TouchedGrabSurface, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014BE960, void, set_TouchedGrabSurface, (SeinGrabSurface * __this, GrabbableSurface * value));
IL2CPP_REGISTER_METHOD(0x01303770, GrabbableSurface *, get_GrabbedGrabSurface, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014BEBA0, void, set_GrabbedGrabSurface, (SeinGrabSurface * __this, GrabbableSurface * value));
IL2CPP_REGISTER_METHOD(0x014BED10, bool, get_CanTurnPlay, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014BED70, Vector3, get_GrabPosition, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x006E4240, CharacterGravity *, get_CharacterGravity, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x005D06F0, CharacterLeftRightMovement *, get_CharacterLeftRightMovement, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x005D06C0, CharacterPlatformMovement *, get_PlatformMovement, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014BEF70, CapsuleCollider *, get_OriCollider, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014BEFB0, bool, get_IsStatePerforming, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014BEFC0, bool, get_DelayedWheelJumpCleanUpTriggered, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014BEFD0, bool, get_IsRidingWheel, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014BEFE0, void, set_IsRidingWheel, (SeinGrabSurface * __this, bool value));
IL2CPP_REGISTER_METHOD(0x014BEFF0, bool, CanRideWheel, (SeinGrabSurface * __this, GrabbableSurfaceMovingWheel * wheel));
IL2CPP_REGISTER_METHOD(0x014BF1A0, Vector3, get_SurfaceNormal, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014BF2B0, Vector3, get_SurfaceNormalSmooth, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014BF3A0, Vector3, get_SurfaceDirection, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014BF4B0, Vector3, get_SurfacePosition, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014BF5C0, Vector3, get_SurfaceNormalFront, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014BF6D0, Vector3, get_SurfaceDirectionFront, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014BF7E0, Vector3, get_SurfacePositionFront, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014BF8F0, Vector3, get_SurfaceNormalBack, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014BFA00, Vector3, get_SurfaceDirectionBack, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014BFB10, Vector3, get_SurfacePositionBack, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014BFC20, void, UpdateTouchedSurface, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateGrabbedSurface, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_WantToGrab, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014BFF40, bool, get_CanStartGrab, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C04A0, bool, get_ShouldStopGrab, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C04F0, bool, get_PlatformMovementIsOnWall, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C0520, bool, get_PlatformMovementIsOnLeftWall, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C05B0, bool, get_PlatformMovementIsOnRightWall, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C0640, bool, get_PlatformMovementIsOnCeiling, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C06D0, bool, get_PlatformMovementIsOnGround, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C0750, bool, get_IsOnWall, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C0980, bool, get_IsOnLeftWall, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C0A70, bool, get_IsOnRightWall, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C0BB0, bool, get_IsOnCeiling, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C0D90, bool, get_IsOnGround, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C0E80, bool, get_IsMoving, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C0F40, bool, get_ShouldClimbAnimationPlay, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C0FA0, bool, get_ShouldGrabWallDownAnimationPlay, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C0FE0, bool, get_ShouldGrabWallIdleAnimationPlay, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C1040, bool, get_ShouldGrabGroundIdleAnimationPlay, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C1070, bool, get_ShouldGrabGroundMovingAnimationPlay, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014BEFB0, bool, get_IsGrabbing, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C10C0, void, set_IsGrabbing, (SeinGrabSurface * __this, bool value));
IL2CPP_REGISTER_METHOD(0x014C1110, bool, get_SpriteMirrorLock, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C1120, void, set_SpriteMirrorLock, (SeinGrabSurface * __this, bool value));
IL2CPP_REGISTER_METHOD(0x014C11E0, float, get_OriAngleForMovingWheel, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C1290, void, set_OriAngleForMovingWheel, (SeinGrabSurface * __this, float value));
IL2CPP_REGISTER_METHOD(0x014C1430, void, OnEnable, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C16D0, void, OnDisable, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C1990, void, OnPreRestoreCheckpoint, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHODINFO(0x0472DA18, SeinGrabSurface_OnPreRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x014C19C0, void, OnRestoreCheckpoint, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHODINFO(0x0471ECE8, SeinGrabSurface_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x014BEFB0, bool, ShouldGrabAnimationKeepPlaying, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHODINFO(0x04740670, SeinGrabSurface_ShouldGrabAnimationKeepPlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005E1300, bool, ShouldJumpDownAnimationKeepPlaying, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHODINFO(0x0472F360, SeinGrabSurface_ShouldJumpDownAnimationKeepPlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x014C1D30, void, OnSetReferenceToSein, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C1E10, void, Start, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C2220, void, OnAwake, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C2400, void, OnDestroy, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C2820, void, ModifyGravityPlatformMovementSettings, (SeinGrabSurface * __this, GravityPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x0470B068, SeinGrabSurface_ModifyGravityPlatformMovementSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x014C2850, void, ModifyHorizontalPlatformMovementSettings, (SeinGrabSurface * __this, HorizontalPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x0470C098, SeinGrabSurface_ModifyHorizontalPlatformMovementSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x014C29A0, void, OnExit, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C29D0, void, StartIgnoringColliders, (SeinGrabSurface * __this, GameObject * target));
IL2CPP_REGISTER_METHOD(0x014C2B60, void, StopIgnoringColliders, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C2D10, void, InitializeClimbSpeed, (SeinGrabSurface * __this, Vector2 velocity));
IL2CPP_REGISTER_METHOD(0x014C2F00, void, OnSurfaceTouchStart, (SeinGrabSurface * __this, GrabbableSurface * surface));
IL2CPP_REGISTER_METHOD(0x0090CE60, void, OnSurfaceTouchEnd, (SeinGrabSurface * __this, GrabbableSurface * surface));
IL2CPP_REGISTER_METHOD(0x014C3000, void, OnSurfaceGrabStart, (SeinGrabSurface * __this, GrabbableSurface * surface));
IL2CPP_REGISTER_METHOD(0x014C3220, void, OnSurfaceGrabEnd, (SeinGrabSurface * __this, GrabbableSurface * surface));
IL2CPP_REGISTER_METHOD(0x014C3250, void, OnGrab, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C3670, void, OnRelease, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C3A50, void, EnterWheel, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C4450, void, UpdateWheel, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C49F0, void, ShootOutFromWheel, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C5E10, void, ReleaseWheel, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C6780, void, CancelWheel, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C6EE0, void, TriggerDelayedWheelJumpCleanUp, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C6F00, void, WheelJumpCleanUp, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C7030, void, CancelDelayedWheelJumpCleanUp, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C7040, void, HandleWheelJumpCleanUp, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C70F0, ActiveAnimationHandle, PlayAnimation, (SeinGrabSurface * __this, MoonAnimation * animation, int32_t layer, Action * onStopPlaying, Func_1_Boolean_ * condition, float speed));
IL2CPP_REGISTER_METHOD(0x014C7200, Vector2, get_m_currentClimbVelocity, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C7320, void, CheckStopGrabbingConditions, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C7500, void, UpdateGrabbing, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C7F80, bool, RaycastReleaseTest, (SeinGrabSurface * __this, Vector3 newPos, Vector3 oldPos));
IL2CPP_REGISTER_METHOD(0x014C81C0, void, ChangeAnimationState, (SeinGrabSurface * __this, SeinGrabSurface_AnimationState__Enum newState));
IL2CPP_REGISTER_METHOD(0x014C8AF0, void, UpdateAnimationState, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C9260, float, CalculateDesiredClimbSpeed, (SeinGrabSurface * __this, Vector2 moveDirection));
IL2CPP_REGISTER_METHOD(0x014C92D0, void, UpdateSound, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C9490, void, UpdateCurvatureParameter, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C98C0, void, UpdateGravity, (SeinGrabSurface * __this, bool force));
IL2CPP_REGISTER_METHOD(0x014C9B90, void, SetWheel, (SeinGrabSurface * __this, GrabbableSurfaceMovingWheel * movingWheel));
IL2CPP_REGISTER_METHOD(0x014C9C50, void, UpdateCharacterState, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014C9F20, void, CalculateSurfaceSlope, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014CA2C0, void, EnterGrabbing, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014CA4D0, void, RequestGrabSurface, (SeinGrabSurface * __this, GrabbableSurface * surface));
IL2CPP_REGISTER_METHOD(0x014CA560, void, RequestGrabSurface, (SeinGrabSurface * __this, GrabbableSurface * surface, Vector3 position));
IL2CPP_REGISTER_METHOD(0x014CA690, void, PerformJump, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014CB040, void, TransitionToWalkOnGround, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014CB1A0, void, OnTakeDamage, (SeinGrabSurface * __this, Damage * damage));
IL2CPP_REGISTER_METHODINFO(0x04772200, SeinGrabSurface_OnTakeDamage__MethodInfo);
IL2CPP_REGISTER_METHOD(0x014CB1F0, void, OnPreDash, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHODINFO(0x0471ED60, SeinGrabSurface_OnPreDash__MethodInfo);
IL2CPP_REGISTER_METHOD(0x014CB370, bool, CanDash, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014CB550, bool, CanChargeJump, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014CB710, bool, get_IsStandingOnTopOfSurface, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014CB820, void, UpdateVFX, (SeinGrabSurface * __this, SurfaceMaterialType__Enum surfaceType));
IL2CPP_REGISTER_METHOD(0x014CBDE0, void, StopEfffect, (SeinGrabSurface * __this, SurfaceMaterialType__Enum surfaceType));
IL2CPP_REGISTER_METHOD(0x014CBEE0, void, StopAllEfffects, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014CC060, void, __ctor, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHOD(0x014BEFB0, bool, _EnterWheel_b__194_0, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHODINFO(0x0477A3B8, SeinGrabSurface__EnterWheel_b__194_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005E1300, bool, _ShootOutFromWheel_b__196_0, (SeinGrabSurface * __this));
IL2CPP_REGISTER_METHODINFO(0x04702310, SeinGrabSurface__ShootOutFromWheel_b__196_0__MethodInfo);
}
