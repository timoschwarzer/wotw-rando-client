#include <interception_macros.h>

namespace app::methods::CompositeTriggerCollider {
IL2CPP_REGISTER_METHOD(0x011DF060, void, Start, (app::CompositeTriggerCollider * this_ptr));
IL2CPP_REGISTER_METHOD(0x011DFF40, void, FixedUpdate, (app::CompositeTriggerCollider * this_ptr));
IL2CPP_REGISTER_METHOD(0x011E0090, IEnumerator *, PropagateCollisionsToSiblings, (app::CompositeTriggerCollider * this_ptr));
IL2CPP_REGISTER_METHOD(0x011E01E0, void, PropagateTrigger, (app::CompositeTriggerCollider * this_ptr, app::String * message, app::IEnumerable_1_UnityEngine_Collider_ * colliders_to_process, app::Func_2_UnityEngine_Collider_Boolean_ * should_propagate));
IL2CPP_REGISTER_METHOD(0x011E0530, void, OnDestroy, (app::CompositeTriggerCollider * this_ptr));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (app::CompositeTriggerCollider * this_ptr));
IL2CPP_REGISTER_METHOD(0x011E0A40, void, _Start_b__7_0, (app::CompositeTriggerCollider * this_ptr, app::Collider * c));
IL2CPP_REGISTER_METHODINFO(0x04732C18, CompositeTriggerCollider__Start_b__7_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011E0AF0, void, _Start_b__7_1, (app::CompositeTriggerCollider * this_ptr, app::Collider * c));
IL2CPP_REGISTER_METHODINFO(0x04721BA8, CompositeTriggerCollider__Start_b__7_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011E0BA0, void, _Start_b__7_2, (app::CompositeTriggerCollider * this_ptr, app::Collider * c));
IL2CPP_REGISTER_METHODINFO(0x047337C0, CompositeTriggerCollider__Start_b__7_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011E0C50, bool, _PropagateCollisionsToSiblings_b__9_0, (app::CompositeTriggerCollider * this_ptr, app::Collider * other));
IL2CPP_REGISTER_METHODINFO(0x04771F38, CompositeTriggerCollider__PropagateCollisionsToSiblings_b__9_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011E0D20, bool, _PropagateCollisionsToSiblings_b__9_1, (app::CompositeTriggerCollider * this_ptr, app::Collider * other));
IL2CPP_REGISTER_METHODINFO(0x04739F40, CompositeTriggerCollider__PropagateCollisionsToSiblings_b__9_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011E0DF0, bool, _PropagateCollisionsToSiblings_b__9_2, (app::CompositeTriggerCollider * this_ptr, app::Collider * other));
IL2CPP_REGISTER_METHODINFO(0x047981A8, CompositeTriggerCollider__PropagateCollisionsToSiblings_b__9_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011E0ED0, bool, _PropagateCollisionsToSiblings_b__9_3, (app::CompositeTriggerCollider * this_ptr, app::Collider * other));
IL2CPP_REGISTER_METHODINFO(0x047608D8, CompositeTriggerCollider__PropagateCollisionsToSiblings_b__9_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011E0F80, void, _OnDestroy_b__11_0, (app::CompositeTriggerCollider * this_ptr, app::Collider * c));
IL2CPP_REGISTER_METHODINFO(0x04700DF8, CompositeTriggerCollider__OnDestroy_b__11_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011E1030, void, _OnDestroy_b__11_1, (app::CompositeTriggerCollider * this_ptr, app::Collider * c));
IL2CPP_REGISTER_METHODINFO(0x0470C3A8, CompositeTriggerCollider__OnDestroy_b__11_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011E10E0, void, _OnDestroy_b__11_2, (app::CompositeTriggerCollider * this_ptr, app::Collider * c));
IL2CPP_REGISTER_METHODINFO(0x0473E668, CompositeTriggerCollider__OnDestroy_b__11_2__MethodInfo);
}
