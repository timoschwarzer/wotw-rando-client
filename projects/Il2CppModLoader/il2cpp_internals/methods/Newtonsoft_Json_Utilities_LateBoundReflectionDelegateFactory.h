#include <interception_macros.h>

namespace app::methods::Newtonsoft_Json_Utilities::LateBoundReflectionDelegateFactory {
IL2CPP_REGISTER_METHOD(0x0301DA30, ReflectionDelegateFactory *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x0301DAD0, ObjectConstructor_1_System_Object_ *, CreateParameterizedConstructor, (app::LateBoundReflectionDelegateFactory * this_ptr, app::MethodBase * method_1));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::LateBoundReflectionDelegateFactory * this_ptr));
IL2CPP_REGISTER_METHOD(0x0301DE10, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x018F0AE0, MethodCall_2_System_Object_System_Object_ *, CreateMethodCall, (app::LateBoundReflectionDelegateFactory * this_ptr, app::MethodBase * method_1));
IL2CPP_REGISTER_METHOD(0x02652CB0, Func_1_Object_ *, CreateDefaultConstructor, (app::LateBoundReflectionDelegateFactory * this_ptr, app::Type * type));
IL2CPP_REGISTER_METHOD(0x02653A50, Func_2_Object_Object_ *, CreateGet_1, (app::LateBoundReflectionDelegateFactory * this_ptr, app::PropertyInfo_1 * property_info));
IL2CPP_REGISTER_METHOD(0x026537E0, Func_2_Object_Object_ *, CreateGet_2, (app::LateBoundReflectionDelegateFactory * this_ptr, app::FieldInfo_1 * field_info));
IL2CPP_REGISTER_METHOD(0x018F17B0, Action_2_Object_Object_ *, CreateSet_1, (app::LateBoundReflectionDelegateFactory * this_ptr, app::FieldInfo_1 * field_info));
IL2CPP_REGISTER_METHOD(0x018F1A20, Action_2_Object_Object_ *, CreateSet_2, (app::LateBoundReflectionDelegateFactory * this_ptr, app::PropertyInfo_1 * property_info));
}
