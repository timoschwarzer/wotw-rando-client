#include <interception_macros.h>

namespace app::methods::System::Attribute {
IL2CPP_REGISTER_METHOD(0x022990C0, Attribute__Array *, InternalGetCustomAttributes, (PropertyInfo_1 * element, Type * type, bool inherit));
IL2CPP_REGISTER_METHOD(0x022991C0, Attribute__Array *, InternalGetCustomAttributes, (EventInfo_1 * element, Type * type, bool inherit));
IL2CPP_REGISTER_METHOD(0x022992C0, Attribute__Array *, InternalParamGetCustomAttributes, (ParameterInfo_1 * parameter, Type * attributeType, bool inherit));
IL2CPP_REGISTER_METHOD(0x022998D0, bool, InternalIsDefined, (PropertyInfo_1 * element, Type * attributeType, bool inherit));
IL2CPP_REGISTER_METHOD(0x02299990, bool, InternalIsDefined, (EventInfo_1 * element, Type * attributeType, bool inherit));
IL2CPP_REGISTER_METHOD(0x02299A50, Attribute__Array *, GetCustomAttributes, (MemberInfo_1 * element, Type * type, bool inherit));
IL2CPP_REGISTER_METHODINFO(0x04776DD0, Attribute_GetCustomAttributes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02299D10, Attribute__Array *, GetCustomAttributes, (MemberInfo_1 * element, bool inherit));
IL2CPP_REGISTER_METHODINFO(0x04703E68, Attribute_GetCustomAttributes_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x013DCFB0, bool, IsDefined, (MemberInfo_1 * element, Type * attributeType));
IL2CPP_REGISTER_METHOD(0x02299F40, bool, IsDefined, (MemberInfo_1 * element, Type * attributeType, bool inherit));
IL2CPP_REGISTER_METHODINFO(0x04798410, Attribute_IsDefined_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0229A2D0, Attribute *, GetCustomAttribute, (MemberInfo_1 * element, Type * attributeType));
IL2CPP_REGISTER_METHOD(0x0229A2E0, Attribute *, GetCustomAttribute, (MemberInfo_1 * element, Type * attributeType, bool inherit));
IL2CPP_REGISTER_METHODINFO(0x0475A848, Attribute_GetCustomAttribute_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0229A3F0, Attribute__Array *, GetCustomAttributes, (ParameterInfo_1 * element, Type * attributeType, bool inherit));
IL2CPP_REGISTER_METHODINFO(0x04782CE0, Attribute_GetCustomAttributes_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0229A720, Attribute__Array *, GetCustomAttributes, (ParameterInfo_1 * element, bool inherit));
IL2CPP_REGISTER_METHODINFO(0x0475DF20, Attribute_GetCustomAttributes_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0229A960, Attribute__Array *, GetCustomAttributes, (Module * element, bool inherit));
IL2CPP_REGISTER_METHODINFO(0x04715EE0, Attribute_GetCustomAttributes_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0229AAC0, Attribute__Array *, GetCustomAttributes, (Module * element, Type * attributeType, bool inherit));
IL2CPP_REGISTER_METHODINFO(0x04725CF0, Attribute_GetCustomAttributes_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0229AD20, Attribute__Array *, GetCustomAttributes, (Assembly * element, Type * attributeType));
IL2CPP_REGISTER_METHOD(0x0229AD30, Attribute__Array *, GetCustomAttributes, (Assembly * element, Type * attributeType, bool inherit));
IL2CPP_REGISTER_METHODINFO(0x04749C48, Attribute_GetCustomAttributes_7__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0229AF70, Attribute__Array *, GetCustomAttributes, (Assembly * element));
IL2CPP_REGISTER_METHOD(0x0229B0B0, Attribute__Array *, GetCustomAttributes, (Assembly * element, bool inherit));
IL2CPP_REGISTER_METHODINFO(0x04720898, Attribute_GetCustomAttributes_9__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0229B200, Attribute *, GetCustomAttribute, (Assembly * element, Type * attributeType));
IL2CPP_REGISTER_METHOD(0x0229B2F0, Attribute *, GetCustomAttribute, (Assembly * element, Type * attributeType, bool inherit));
IL2CPP_REGISTER_METHODINFO(0x04764050, Attribute_GetCustomAttribute_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (Attribute * __this));
IL2CPP_REGISTER_METHOD(0x0229B400, bool, Equals, (Attribute * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0229B710, bool, AreFieldValuesEqual, (Object * thisValue, Object * thatValue));
IL2CPP_REGISTER_METHOD(0x0229B900, int32_t, GetHashCode, (Attribute * __this));
IL2CPP_REGISTER_METHOD(0x01A1C4F0, Object *, get_TypeId, (Attribute * __this));
IL2CPP_REGISTER_METHOD(0x0229BB40, bool, Match, (Attribute * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsDefaultAttribute, (Attribute * __this));
}
