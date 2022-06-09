#include <interception_macros.h>

namespace app::methods::Moon::RuntimeDynamicDataLink_1_System_Byte_ {
IL2CPP_REGISTER_METHOD(0x029088B0, bool, Init, (app::RuntimeDynamicDataLink_1_System_Byte_ * this_ptr, app::DynamicDataLinkSerializedData data, app::MemberInfo_1 * member_info));
IL2CPP_REGISTER_METHOD(0x02908B90, bool, get_IsValid, (app::RuntimeDynamicDataLink_1_System_Byte_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, Object_1 *, get_TargetObject, (app::RuntimeDynamicDataLink_1_System_Byte_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9F0, MemberInfo_1 *, get_TargetMemberInfo, (app::RuntimeDynamicDataLink_1_System_Byte_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB40, Type *, get_ReturnedValueType, (app::RuntimeDynamicDataLink_1_System_Byte_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02908D10, uint8_t, GetValue, (app::RuntimeDynamicDataLink_1_System_Byte_ * this_ptr, app::IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x0476F328, RuntimeDynamicDataLink_1_System_Byte__GetValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02908FF0, bool, IsLinkForObjectAndMemberInfoCombo, (app::RuntimeDynamicDataLink_1_System_Byte_ * this_ptr, app::Object_1 * target_object, app::MemberInfo_1 * target_member_info));
IL2CPP_REGISTER_METHOD(0x01CE2FF0, DynamicDataLinkSerializedData, GetSerializedData, (app::RuntimeDynamicDataLink_1_System_Byte_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02909180, void, CreateReflectionData, (app::RuntimeDynamicDataLink_1_System_Byte_ * this_ptr, app::MemberInfo_1 * member_info));
IL2CPP_REGISTER_METHODINFO(0x04797708, RuntimeDynamicDataLink_1_System_Byte__CreateReflectionData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02909600, String *, ToString, (app::RuntimeDynamicDataLink_1_System_Byte_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x018E6D70, void, __ctor, (app::RuntimeDynamicDataLink_1_System_Byte_ * this_ptr));
}
