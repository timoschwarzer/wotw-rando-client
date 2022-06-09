#include <interception_macros.h>

namespace app::methods::System_Reflection_Emit::DynamicMethod {
IL2CPP_REGISTER_METHOD(0x0267F7B0, void, __ctor_1, (app::DynamicMethod * this_ptr, app::String * name, app::Type * return_type, app::Type__Array * parameter_types, app::Module * m, bool skip_visibility));
IL2CPP_REGISTER_METHODINFO(0x047206F0, DynamicMethod__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0267F7E0, void, __ctor_2, (app::DynamicMethod * this_ptr, app::String * name, app::Type * return_type, app::Type__Array * parameter_types, app::Type * owner, bool skip_visibility));
IL2CPP_REGISTER_METHODINFO(0x0474FC88, DynamicMethod__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0267F810, MethodAttributes__Enum, get_Attributes, (app::DynamicMethod * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04711780, DynamicMethod_get_Attributes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0267F840, Type *, get_DeclaringType, (app::DynamicMethod * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04782068, DynamicMethod_get_DeclaringType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0267F870, void, set_InitLocals, (app::DynamicMethod * this_ptr, bool value));
IL2CPP_REGISTER_METHODINFO(0x047187E0, DynamicMethod_set_InitLocals__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0267F8A0, RuntimeMethodHandle, get_MethodHandle, (app::DynamicMethod * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0475A280, DynamicMethod_get_MethodHandle__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0267F8D0, String *, get_Name, (app::DynamicMethod * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04712160, DynamicMethod_get_Name__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0267F900, Type *, get_ReflectedType, (app::DynamicMethod * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x047427B8, DynamicMethod_get_ReflectedType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0267F930, MethodInfo_1 *, GetBaseDefinition, (app::DynamicMethod * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04740A08, DynamicMethod_GetBaseDefinition__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0267F960, Object__Array *, GetCustomAttributes_1, (app::DynamicMethod * this_ptr, bool inherit));
IL2CPP_REGISTER_METHODINFO(0x04732538, DynamicMethod_GetCustomAttributes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0267F990, Object__Array *, GetCustomAttributes_2, (app::DynamicMethod * this_ptr, app::Type * attribute_type, bool inherit));
IL2CPP_REGISTER_METHODINFO(0x04713650, DynamicMethod_GetCustomAttributes_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0267F9C0, ILGenerator *, GetILGenerator, (app::DynamicMethod * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04745558, DynamicMethod_GetILGenerator__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0267F9F0, MethodImplAttributes__Enum, GetMethodImplementationFlags, (app::DynamicMethod * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04746A20, DynamicMethod_GetMethodImplementationFlags__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0267FA20, ParameterInfo_1__Array *, GetParameters, (app::DynamicMethod * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04778BF0, DynamicMethod_GetParameters__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0267FA50, Object *, Invoke, (app::DynamicMethod * this_ptr, app::Object * obj, app::BindingFlags__Enum invoke_attr, app::Binder * binder, app::Object__Array * parameters, app::CultureInfo * culture));
IL2CPP_REGISTER_METHODINFO(0x04743CA0, DynamicMethod_Invoke__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0267FA80, bool, IsDefined, (app::DynamicMethod * this_ptr, app::Type * attribute_type, bool inherit));
IL2CPP_REGISTER_METHODINFO(0x047869F8, DynamicMethod_IsDefined__MethodInfo);
}
