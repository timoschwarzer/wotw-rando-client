#include <interception_macros.h>

namespace app::methods::SwimmingLocomotion {
IL2CPP_REGISTER_METHOD(0x0049F2B0, VolumeEntityMovementProcessor *, get_VolumeMovement, (SwimmingLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x01827510, bool, get_IsBlockedByObstacle, (SwimmingLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x01199DC0, Transform *, get_FeetTransform, (SwimmingLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x01199DF0, Vector3, get_FeetPosition, (SwimmingLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x01827540, bool, get_HasArrivedAtTarget, (SwimmingLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x01199ED0, float, get_Gravity, (SwimmingLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x01199EF0, void, set_Gravity, (SwimmingLocomotion * __this, float value));
IL2CPP_REGISTER_METHOD(0x00E5BF60, EntityWeightData_EntityWeight__Enum, get_Weight, (SwimmingLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x011B47F0, void, set_Weight, (SwimmingLocomotion * __this, EntityWeightData_EntityWeight__Enum value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsTurning, (SwimmingLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x01827570, float, get_CurrentAngle, (SwimmingLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x01827760, void, set_CurrentAngle, (SwimmingLocomotion * __this, float value));
IL2CPP_REGISTER_METHOD(0x018278A0, bool, get_IsUpsideDown, (SwimmingLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x018278E0, void, SetVelocityDirectly, (SwimmingLocomotion * __this, Vector2 velocity));
IL2CPP_REGISTER_METHOD(0x01827940, void, ConfigureStateMachine, (SwimmingLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x005B0220, EntityLocomotionTask *, get_DefaultFSMState, (SwimmingLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x01827C50, bool, ShouldTriggerMove, (SwimmingLocomotion * __this));
IL2CPP_REGISTER_METHODINFO(0x04730040, SwimmingLocomotion_ShouldTriggerMove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A17790, bool, IsLookDirectionLocked, (SwimmingLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x01827E50, void, OnEntityInitialization, (SwimmingLocomotion * __this, Entity * entity));
IL2CPP_REGISTER_METHOD(0x01828050, void, OnFixedUpdate, (SwimmingLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x018285D0, EntityLocomotionTask *, GetNextBehaviour, (SwimmingLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x01828610, void, ResetLocomotion, (SwimmingLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x01828650, void, OnEntityReset, (SwimmingLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00968AA0, void, Stop, (SwimmingLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x018289B0, void, MoveToPoint, (SwimmingLocomotion * __this, Vector3 point, EntityBehaviourNode * source));
IL2CPP_REGISTER_METHOD(0x01828B20, void, PropagateTargetPoint, (SwimmingLocomotion * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x01828B70, void, MoveInTheDirection, (SwimmingLocomotion * __this, Vector2 direction, EntityBehaviourNode * source));
IL2CPP_REGISTER_METHOD(0x01828D20, void, SetLookDirectionX, (SwimmingLocomotion * __this, float xLookDirection, bool instant));
IL2CPP_REGISTER_METHOD(0x01828E30, void, SetLookDirectionX, (SwimmingLocomotion * __this, float xLookDirection, EntityBehaviourNode * source, bool instant));
IL2CPP_REGISTER_METHOD(0x01828F40, void, SetLookDirection, (SwimmingLocomotion * __this, Vector2 lookDirection, EntityBehaviourNode * source, bool instant));
IL2CPP_REGISTER_METHOD(0x018290D0, void, SetLookDirectionTowardsPoint, (SwimmingLocomotion * __this, Vector2 point, EntityBehaviourNode * source, bool instant));
IL2CPP_REGISTER_METHOD(0x01829310, void, SetObstacleHitAvoidance, (SwimmingLocomotion * __this, bool on));
IL2CPP_REGISTER_METHOD(0x01829340, void, InstantFlip, (SwimmingLocomotion * __this, float directionSign));
IL2CPP_REGISTER_METHOD(0x018295D0, void, LockLookDirection, (SwimmingLocomotion * __this, float directionX, EntityBehaviourNode * source));
IL2CPP_REGISTER_METHOD(0x00E318B0, void, UnlockLookDirection, (SwimmingLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x018296B0, Vector2, get_LookDirection, (SwimmingLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x018298F0, Vector2, get_LookDirectionXYNormalized, (SwimmingLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x0119CD80, bool, get_IsFacingLeft, (SwimmingLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x0049F2B0, MovementProcessor *, get_MovementProcessor, (SwimmingLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x01829A00, void, UpdateWaterCurrent, (SwimmingLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x01829BA0, void, __ctor, (SwimmingLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x01829BC0, bool, _ConfigureStateMachine_b__35_0, (SwimmingLocomotion * __this));
IL2CPP_REGISTER_METHODINFO(0x04760638, SwimmingLocomotion__ConfigureStateMachine_b__35_0__MethodInfo);
}
