#include <interception_macros.h>

namespace app::methods::System_Reflection::MonoProperty {
    IL2CPP_REGISTER_METHOD(0x02693030, void, CachePropertyInfo, (app::MonoProperty * this_ptr, app::PInfo__Enum flags));
    IL2CPP_REGISTER_METHOD(0x02693120, app::PropertyAttributes__Enum, get_Attributes, (app::MonoProperty * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02693140, bool, get_CanRead, (app::MonoProperty * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02693190, bool, get_CanWrite, (app::MonoProperty * this_ptr));
    IL2CPP_REGISTER_METHOD(0x026931E0, app::Type *, get_PropertyType, (app::MonoProperty * this_ptr));
    IL2CPP_REGISTER_METHOD(0x026932F0, app::Type *, get_ReflectedType, (app::MonoProperty * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02693330, app::Type *, get_DeclaringType, (app::MonoProperty * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02693370, app::String *, get_Name, (app::MonoProperty * this_ptr));
    IL2CPP_REGISTER_METHOD(0x026933C0, app::MethodInfo_1__Array *, GetAccessors, (app::MonoProperty * this_ptr, bool non_public));
    IL2CPP_REGISTER_METHOD(0x02693610, app::MethodInfo_1 *, GetGetMethod, (app::MonoProperty * this_ptr, bool non_public));
    IL2CPP_REGISTER_METHOD(0x026936B0, app::ParameterInfo_1__Array *, GetIndexParameters, (app::MonoProperty * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02693910, app::MethodInfo_1 *, GetSetMethod, (app::MonoProperty * this_ptr, bool non_public));
    IL2CPP_REGISTER_METHOD(0x026939B0, app::Object *, GetConstantValue, (app::MonoProperty * this_ptr));
    IL2CPP_REGISTER_METHOD(0x026939B0, app::Object *, GetRawConstantValue, (app::MonoProperty * this_ptr));
    IL2CPP_REGISTER_METHOD(0x026939C0, bool, IsDefined, (app::MonoProperty * this_ptr, app::Type * attribute_type, bool inherit));
    IL2CPP_REGISTER_METHOD(0x02693A70, app::Object__Array *, GetCustomAttributes_1, (app::MonoProperty * this_ptr, bool inherit));
    IL2CPP_REGISTER_METHOD(0x02693B10, app::Object__Array *, GetCustomAttributes_2, (app::MonoProperty * this_ptr, app::Type * attribute_type, bool inherit));
    IL2CPP_REGISTER_METHOD(0x02693BC0, app::MonoProperty_GetterAdapter *, CreateGetterDelegate, (app::MethodInfo_1 * method_1));
    IL2CPP_REGISTER_METHODINFO(0x0477B0E0, MonoProperty_CreateGetterDelegate__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02693FA0, app::Object *, GetValue_1, (app::MonoProperty * this_ptr, app::Object * obj, app::Object__Array * index));
    IL2CPP_REGISTER_METHOD(0x02693FE0, app::Object *, GetValue_2, (app::MonoProperty * this_ptr, app::Object * obj, app::BindingFlags__Enum invoke_attr, app::Binder * binder, app::Object__Array * index, app::CultureInfo * culture));
    IL2CPP_REGISTER_METHODINFO(0x04780710, MonoProperty_GetValue_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x026941F0, void, SetValue, (app::MonoProperty * this_ptr, app::Object * obj, app::Object * value, app::BindingFlags__Enum invoke_attr, app::Binder * binder, app::Object__Array * index, app::CultureInfo * culture));
    IL2CPP_REGISTER_METHODINFO(0x04747AD0, MonoProperty_SetValue__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x026944B0, app::Type__Array *, GetOptionalCustomModifiers, (app::MonoProperty * this_ptr));
    IL2CPP_REGISTER_METHOD(0x026944F0, app::Type__Array *, GetRequiredCustomModifiers, (app::MonoProperty * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0268FE80, app::IList_1_System_Reflection_CustomAttributeData_ *, GetCustomAttributesData, (app::MonoProperty * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::MonoProperty * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0153E250, app::Object *, GetterAdapterFrame, (app::MonoProperty_Getter_2_System_Object_System_Object_ * getter, app::Object * obj));
    IL2CPP_REGISTER_METHOD(0x0153E2E0, app::Object *, StaticGetterAdapterFrame, (app::MonoProperty_StaticGetter_1_System_Object_ * getter, app::Object * obj));
}
