#include <interception_macros.h>

namespace app::methods::Moon::RuntimeDynamicDataLink_1_UnityEngine_Color_ {
IL2CPP_REGISTER_METHOD(0x02913920, bool, Init, (app::RuntimeDynamicDataLink_1_UnityEngine_Color_ * this_ptr, app::DynamicDataLinkSerializedData data, app::MemberInfo_1 * member_info));
IL2CPP_REGISTER_METHOD(0x02913C00, bool, get_IsValid, (app::RuntimeDynamicDataLink_1_UnityEngine_Color_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, Object_1 *, get_TargetObject, (app::RuntimeDynamicDataLink_1_UnityEngine_Color_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9F0, MemberInfo_1 *, get_TargetMemberInfo, (app::RuntimeDynamicDataLink_1_UnityEngine_Color_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB40, Type *, get_ReturnedValueType, (app::RuntimeDynamicDataLink_1_UnityEngine_Color_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02913D80, Color, GetValue, (app::RuntimeDynamicDataLink_1_UnityEngine_Color_ * this_ptr, app::IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x0473E3C8, RuntimeDynamicDataLink_1_UnityEngine_Color__GetValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02914080, bool, IsLinkForObjectAndMemberInfoCombo, (app::RuntimeDynamicDataLink_1_UnityEngine_Color_ * this_ptr, app::Object_1 * target_object, app::MemberInfo_1 * target_member_info));
IL2CPP_REGISTER_METHOD(0x01CE2FF0, DynamicDataLinkSerializedData, GetSerializedData, (app::RuntimeDynamicDataLink_1_UnityEngine_Color_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02914210, void, CreateReflectionData, (app::RuntimeDynamicDataLink_1_UnityEngine_Color_ * this_ptr, app::MemberInfo_1 * member_info));
IL2CPP_REGISTER_METHODINFO(0x047547A0, RuntimeDynamicDataLink_1_UnityEngine_Color__CreateReflectionData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02914690, String *, ToString, (app::RuntimeDynamicDataLink_1_UnityEngine_Color_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x018E6D70, void, __ctor, (app::RuntimeDynamicDataLink_1_UnityEngine_Color_ * this_ptr));
}
