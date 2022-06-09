#include <interception_macros.h>

namespace app::methods::SwimmingLocomotion {
IL2CPP_REGISTER_METHOD(0x0049F2B0, VolumeEntityMovementProcessor *, get_VolumeMovement, (app::SwimmingLocomotion * this_ptr));
IL2CPP_REGISTER_METHOD(0x01827510, bool, get_IsBlockedByObstacle, (app::SwimmingLocomotion * this_ptr));
IL2CPP_REGISTER_METHOD(0x01199DC0, Transform *, get_FeetTransform, (app::SwimmingLocomotion * this_ptr));
IL2CPP_REGISTER_METHOD(0x01199DF0, Vector3, get_FeetPosition, (app::SwimmingLocomotion * this_ptr));
IL2CPP_REGISTER_METHOD(0x01827540, bool, get_HasArrivedAtTarget, (app::SwimmingLocomotion * this_ptr));
IL2CPP_REGISTER_METHOD(0x01199ED0, float, get_Gravity, (app::SwimmingLocomotion * this_ptr));
IL2CPP_REGISTER_METHOD(0x01199EF0, void, set_Gravity, (app::SwimmingLocomotion * this_ptr, float value));
IL2CPP_REGISTER_METHOD(0x00E5BF60, EntityWeightData_EntityWeight__Enum, get_Weight, (app::SwimmingLocomotion * this_ptr));
IL2CPP_REGISTER_METHOD(0x011B47F0, void, set_Weight, (app::SwimmingLocomotion * this_ptr, app::EntityWeightData_EntityWeight__Enum value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsTurning, (app::SwimmingLocomotion * this_ptr));
IL2CPP_REGISTER_METHOD(0x01827570, float, get_CurrentAngle, (app::SwimmingLocomotion * this_ptr));
IL2CPP_REGISTER_METHOD(0x01827760, void, set_CurrentAngle, (app::SwimmingLocomotion * this_ptr, float value));
IL2CPP_REGISTER_METHOD(0x018278A0, bool, get_IsUpsideDown, (app::SwimmingLocomotion * this_ptr));
IL2CPP_REGISTER_METHOD(0x018278E0, void, SetVelocityDirectly, (app::SwimmingLocomotion * this_ptr, app::Vector2 velocity));
IL2CPP_REGISTER_METHOD(0x01827940, void, ConfigureStateMachine, (app::SwimmingLocomotion * this_ptr));
IL2CPP_REGISTER_METHOD(0x005B0220, EntityLocomotionTask *, get_DefaultFSMState, (app::SwimmingLocomotion * this_ptr));
IL2CPP_REGISTER_METHOD(0x01827C50, bool, ShouldTriggerMove, (app::SwimmingLocomotion * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04730040, SwimmingLocomotion_ShouldTriggerMove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A17790, bool, IsLookDirectionLocked, (app::SwimmingLocomotion * this_ptr));
IL2CPP_REGISTER_METHOD(0x01827E50, void, OnEntityInitialization, (app::SwimmingLocomotion * this_ptr, app::Entity * entity));
IL2CPP_REGISTER_METHOD(0x01828050, void, OnFixedUpdate, (app::SwimmingLocomotion * this_ptr));
IL2CPP_REGISTER_METHOD(0x018285D0, EntityLocomotionTask *, GetNextBehaviour, (app::SwimmingLocomotion * this_ptr));
IL2CPP_REGISTER_METHOD(0x01828610, void, ResetLocomotion, (app::SwimmingLocomotion * this_ptr));
IL2CPP_REGISTER_METHOD(0x01828650, void, OnEntityReset, (app::SwimmingLocomotion * this_ptr));
IL2CPP_REGISTER_METHOD(0x00968AA0, void, Stop, (app::SwimmingLocomotion * this_ptr));
IL2CPP_REGISTER_METHOD(0x018289B0, void, MoveToPoint, (app::SwimmingLocomotion * this_ptr, app::Vector3 point, app::EntityBehaviourNode * source));
IL2CPP_REGISTER_METHOD(0x01828B20, void, PropagateTargetPoint, (app::SwimmingLocomotion * this_ptr, app::Vector3 point));
IL2CPP_REGISTER_METHOD(0x01828B70, void, MoveInTheDirection, (app::SwimmingLocomotion * this_ptr, app::Vector2 direction, app::EntityBehaviourNode * source));
IL2CPP_REGISTER_METHOD(0x01828D20, void, SetLookDirectionX_1, (app::SwimmingLocomotion * this_ptr, float x_look_direction, bool instant));
IL2CPP_REGISTER_METHOD(0x01828E30, void, SetLookDirectionX_2, (app::SwimmingLocomotion * this_ptr, float x_look_direction, app::EntityBehaviourNode * source, bool instant));
IL2CPP_REGISTER_METHOD(0x01828F40, void, SetLookDirection, (app::SwimmingLocomotion * this_ptr, app::Vector2 look_direction, app::EntityBehaviourNode * source, bool instant));
IL2CPP_REGISTER_METHOD(0x018290D0, void, SetLookDirectionTowardsPoint, (app::SwimmingLocomotion * this_ptr, app::Vector2 point, app::EntityBehaviourNode * source, bool instant));
IL2CPP_REGISTER_METHOD(0x01829310, void, SetObstacleHitAvoidance, (app::SwimmingLocomotion * this_ptr, bool on));
IL2CPP_REGISTER_METHOD(0x01829340, void, InstantFlip, (app::SwimmingLocomotion * this_ptr, float direction_sign));
IL2CPP_REGISTER_METHOD(0x018295D0, void, LockLookDirection, (app::SwimmingLocomotion * this_ptr, float direction_x, app::EntityBehaviourNode * source));
IL2CPP_REGISTER_METHOD(0x00E318B0, void, UnlockLookDirection, (app::SwimmingLocomotion * this_ptr));
IL2CPP_REGISTER_METHOD(0x018296B0, Vector2, get_LookDirection, (app::SwimmingLocomotion * this_ptr));
IL2CPP_REGISTER_METHOD(0x018298F0, Vector2, get_LookDirectionXYNormalized, (app::SwimmingLocomotion * this_ptr));
IL2CPP_REGISTER_METHOD(0x0119CD80, bool, get_IsFacingLeft, (app::SwimmingLocomotion * this_ptr));
IL2CPP_REGISTER_METHOD(0x0049F2B0, MovementProcessor *, get_MovementProcessor, (app::SwimmingLocomotion * this_ptr));
IL2CPP_REGISTER_METHOD(0x01829A00, void, UpdateWaterCurrent, (app::SwimmingLocomotion * this_ptr));
IL2CPP_REGISTER_METHOD(0x01829BA0, void, __ctor, (app::SwimmingLocomotion * this_ptr));
IL2CPP_REGISTER_METHOD(0x01829BC0, bool, _ConfigureStateMachine_b__35_0, (app::SwimmingLocomotion * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04760638, SwimmingLocomotion__ConfigureStateMachine_b__35_0__MethodInfo);
}
