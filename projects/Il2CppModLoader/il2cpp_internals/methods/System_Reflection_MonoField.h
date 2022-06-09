#include <interception_macros.h>

namespace app::methods::System_Reflection::MonoField {
IL2CPP_REGISTER_METHOD(0x00654950, FieldAttributes__Enum, get_Attributes, (app::MonoField * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB930, RuntimeFieldHandle, get_FieldHandle, (app::MonoField * this_ptr));
IL2CPP_REGISTER_METHOD(0x0173D7D0, Type *, ResolveType, (app::MonoField * this_ptr));
IL2CPP_REGISTER_METHOD(0x026906D0, Type *, get_FieldType, (app::MonoField * this_ptr));
IL2CPP_REGISTER_METHOD(0x02690790, Type *, GetParentType, (app::MonoField * this_ptr, bool declaring));
IL2CPP_REGISTER_METHOD(0x026907C0, Type *, get_ReflectedType, (app::MonoField * this_ptr));
IL2CPP_REGISTER_METHOD(0x026907D0, Type *, get_DeclaringType, (app::MonoField * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_Name, (app::MonoField * this_ptr));
IL2CPP_REGISTER_METHOD(0x026907F0, bool, IsDefined, (app::MonoField * this_ptr, app::Type * attribute_type, bool inherit));
IL2CPP_REGISTER_METHOD(0x026908B0, Object__Array *, GetCustomAttributes_1, (app::MonoField * this_ptr, bool inherit));
IL2CPP_REGISTER_METHOD(0x02690960, Object__Array *, GetCustomAttributes_2, (app::MonoField * this_ptr, app::Type * attribute_type, bool inherit));
IL2CPP_REGISTER_METHOD(0x02690A20, int32_t, GetFieldOffset, (app::MonoField * this_ptr));
IL2CPP_REGISTER_METHOD(0x02690A30, Object *, GetValueInternal, (app::MonoField * this_ptr, app::Object * obj));
IL2CPP_REGISTER_METHOD(0x02690A80, Object *, GetValue, (app::MonoField * this_ptr, app::Object * obj));
IL2CPP_REGISTER_METHODINFO(0x047093B0, MonoField_GetValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02690C80, String *, ToString, (app::MonoField * this_ptr));
IL2CPP_REGISTER_METHOD(0x01EE2430, void, SetValueInternal, (app::FieldInfo_1 * fi, app::Object * obj, app::Object * value));
IL2CPP_REGISTER_METHOD(0x02690D70, void, SetValue, (app::MonoField * this_ptr, app::Object * obj, app::Object * val, app::BindingFlags__Enum invoke_attr, app::Binder * binder, app::CultureInfo * culture));
IL2CPP_REGISTER_METHODINFO(0x047267E8, MonoField_SetValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02691040, Object *, GetRawConstantValue, (app::MonoField * this_ptr));
IL2CPP_REGISTER_METHOD(0x0268FE80, IList_1_System_Reflection_CustomAttributeData_ *, GetCustomAttributesData, (app::MonoField * this_ptr));
IL2CPP_REGISTER_METHOD(0x02691050, void, CheckGeneric, (app::MonoField * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04783570, MonoField_CheckGeneric__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::MonoField * this_ptr));
}
