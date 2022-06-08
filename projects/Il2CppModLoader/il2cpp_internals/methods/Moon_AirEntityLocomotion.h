#include <interception_macros.h>

namespace app::methods::Moon::AirEntityLocomotion {
IL2CPP_REGISTER_METHOD(0x0049F2B0, AirEntityMovementProcessor *, get_AirMovement, (AirEntityLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x01334BA0, Transform *, get_FeetTransform, (AirEntityLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x01334BC0, Vector3, get_FeetPosition, (AirEntityLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x01334C60, bool, get_HasArrivedAtTarget, (AirEntityLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x01334CA0, float, get_Gravity, (AirEntityLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x01334CD0, void, set_Gravity, (AirEntityLocomotion * __this, float value));
IL2CPP_REGISTER_METHOD(0x00974AE0, EntityWeightData_EntityWeight__Enum, get_Weight, (AirEntityLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x01199F10, void, set_Weight, (AirEntityLocomotion * __this, EntityWeightData_EntityWeight__Enum value));
IL2CPP_REGISTER_METHOD(0x01334D00, void, ConfigureStateMachine, (AirEntityLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00418200, EntityLocomotionTask *, get_DefaultFSMState, (AirEntityLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x01335450, bool, ShouldTriggerTurn, (AirEntityLocomotion * __this));
IL2CPP_REGISTER_METHODINFO(0x0475E1E8, AirEntityLocomotion_ShouldTriggerTurn__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01335830, bool, ShouldTriggerMove, (AirEntityLocomotion * __this));
IL2CPP_REGISTER_METHODINFO(0x04702C28, AirEntityLocomotion_ShouldTriggerMove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0065FBA0, LocomotionAirMoveBehaviour *, get_MovementBehaviour, (AirEntityLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x013359E0, bool, IsLookDirectionLocked, (AirEntityLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x01335AB0, void, OnEntityInitialization, (AirEntityLocomotion * __this, Entity * entity));
IL2CPP_REGISTER_METHOD(0x01335DA0, void, GetMovementBehaviour, (AirEntityLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x01335EA0, void, OnFixedUpdate, (AirEntityLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x01335ED0, EntityLocomotionTask *, GetNextBehaviour, (AirEntityLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x01336480, void, ResetLocomotion, (AirEntityLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00968AA0, void, Stop, (AirEntityLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x013364C0, void, MoveToPoint, (AirEntityLocomotion * __this, Vector3 point, EntityBehaviourNode * source));
IL2CPP_REGISTER_METHOD(0x01336620, void, PropagateTargetPoint, (AirEntityLocomotion * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x01336660, void, MoveInTheDirection, (AirEntityLocomotion * __this, Vector2 direction, EntityBehaviourNode * source));
IL2CPP_REGISTER_METHOD(0x01336800, void, SetLookDirectionX, (AirEntityLocomotion * __this, float xLookDirection, bool instant));
IL2CPP_REGISTER_METHOD(0x01336910, void, SetLookDirectionX, (AirEntityLocomotion * __this, float xLookDirection, EntityBehaviourNode * source, bool instant));
IL2CPP_REGISTER_METHOD(0x01336A20, void, SetLookDirection, (AirEntityLocomotion * __this, Vector2 lookDirection, EntityBehaviourNode * source, bool instant));
IL2CPP_REGISTER_METHOD(0x01336BB0, void, SetLookDirectionTowardsPoint, (AirEntityLocomotion * __this, Vector2 point, EntityBehaviourNode * source, bool instant));
IL2CPP_REGISTER_METHOD(0x01336DF0, void, InstantFlip, (AirEntityLocomotion * __this, float directionSign));
IL2CPP_REGISTER_METHOD(0x01337010, void, LockLookDirection, (AirEntityLocomotion * __this, float directionX, EntityBehaviourNode * source));
IL2CPP_REGISTER_METHOD(0x00E2C9D0, void, UnlockLookDirection, (AirEntityLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x013370F0, Vector2, get_LookDirection, (AirEntityLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x01337200, Vector2, get_LookDirectionXYNormalized, (AirEntityLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00E2CC10, bool, get_IsFacingLeft, (AirEntityLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x0119CDB0, bool, get_IsTurning, (AirEntityLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x0049F2B0, MovementProcessor *, get_MovementProcessor, (AirEntityLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x004F1990, void, __ctor, (AirEntityLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x01337310, bool, _ConfigureStateMachine_b__19_0, (AirEntityLocomotion * __this));
IL2CPP_REGISTER_METHODINFO(0x047348B8, AirEntityLocomotion__ConfigureStateMachine_b__19_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0119CE00, bool, _ConfigureStateMachine_b__19_1, (AirEntityLocomotion * __this));
IL2CPP_REGISTER_METHODINFO(0x04796A40, AirEntityLocomotion__ConfigureStateMachine_b__19_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01337350, bool, _ConfigureStateMachine_b__19_2, (AirEntityLocomotion * __this));
IL2CPP_REGISTER_METHODINFO(0x04720C98, AirEntityLocomotion__ConfigureStateMachine_b__19_2__MethodInfo);
}
