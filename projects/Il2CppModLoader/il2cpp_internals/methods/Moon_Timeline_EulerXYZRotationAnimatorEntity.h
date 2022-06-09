#include <interception_macros.h>

namespace app::methods::Moon_Timeline::EulerXYZRotationAnimatorEntity {
IL2CPP_REGISTER_METHOD(0x01BB8900, Transform *, get_TransformTarget, (app::EulerXYZRotationAnimatorEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BB89A0, GameObject *, get_ExternalTarget, (app::EulerXYZRotationAnimatorEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BB8A50, Transform *, get_EffectiveTransform, (app::EulerXYZRotationAnimatorEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BB8B60, void, OnStartPlayback, (app::EulerXYZRotationAnimatorEntity * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x01BB8BC0, void, SetupInitialValues, (app::EulerXYZRotationAnimatorEntity * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0478A8B0, EulerXYZRotationAnimatorEntity_SetupInitialValues__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUpdate, (app::EulerXYZRotationAnimatorEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BB8CB0, void, OnUpdateEntity, (app::EulerXYZRotationAnimatorEntity * this_ptr, float delta_time));
IL2CPP_REGISTER_METHOD(0x01BB8D10, void, OnStartTimelineSample, (app::EulerXYZRotationAnimatorEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BB8D40, void, OnEndTimelineSample, (app::EulerXYZRotationAnimatorEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BB8E30, void, OnTimelineSample, (app::EulerXYZRotationAnimatorEntity * this_ptr, float value));
IL2CPP_REGISTER_METHOD(0x01BB9010, float, GetAnimationCurveDuration, (app::EulerXYZRotationAnimatorEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BB90C0, Vector3, GetRotationOffsetAtValue, (app::EulerXYZRotationAnimatorEntity * this_ptr, float value));
IL2CPP_REGISTER_METHOD(0x01BB9260, void, OnDrawGizmos, (app::EulerXYZRotationAnimatorEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC20, MoonReference_1_UnityEngine_Transform_ *, GetTransformTarget, (app::EulerXYZRotationAnimatorEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BB9730, bool, GetCurrentValueAssociatedWithCurve, (app::EulerXYZRotationAnimatorEntity * this_ptr, app::String * curve, app::float * value));
IL2CPP_REGISTER_METHOD(0x01BB99F0, void, SynchronizePad, (app::EulerXYZRotationAnimatorEntity * this_ptr, app::MoonTimeline * timeline, app::TimelineEntityRecord * record, app::TimelineEntity * entity, app::Constraint__Enum type));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (app::EulerXYZRotationAnimatorEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BB9E30, GameObject *, get_ObservedTarget, (app::EulerXYZRotationAnimatorEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x005D89A0, SetupStateModifierDataType__Enum, get_ObservedModifierType, (app::EulerXYZRotationAnimatorEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FFB70, int32_t, get_FromStateGuid, (app::EulerXYZRotationAnimatorEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x014EB3E0, void, set_FromStateGuid, (app::EulerXYZRotationAnimatorEntity * this_ptr, int32_t value));
IL2CPP_REGISTER_METHOD(0x003FFBD0, int32_t, get_ToStateGuid, (app::EulerXYZRotationAnimatorEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x00E6FE10, void, set_ToStateGuid, (app::EulerXYZRotationAnimatorEntity * this_ptr, int32_t value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStartObserving, (app::EulerXYZRotationAnimatorEntity * this_ptr, app::SetupControllerStateHolder * controller, app::SetupStateModifier * modifier));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopObserving, (app::EulerXYZRotationAnimatorEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSetupChanged, (app::EulerXYZRotationAnimatorEntity * this_ptr, app::SetupControllerStateHolder * controller, app::SetupStateModifier * modifier));
IL2CPP_REGISTER_METHOD(0x01BB9EB0, void, GetManagedEarlyZDynamicGraphicTargets, (app::EulerXYZRotationAnimatorEntity * this_ptr, app::List_1_UnityEngine_GameObject_ * targets));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SetSerializedKeys, (app::EulerXYZRotationAnimatorEntity * this_ptr, app::SetupControllerStateHolder * controller, app::SetupStateModifier * modifier));
IL2CPP_REGISTER_METHOD(0x01BB9FB0, void, __ctor, (app::EulerXYZRotationAnimatorEntity * this_ptr));
}
