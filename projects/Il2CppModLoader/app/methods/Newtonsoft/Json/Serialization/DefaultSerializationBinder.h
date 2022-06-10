#include <interception_macros.h>

namespace app::methods::Newtonsoft::Json::Serialization::DefaultSerializationBinder {
    IL2CPP_REGISTER_METHOD(0x0186AAF0, void, ctor, (app::DefaultSerializationBinder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0186AD20, app::Type *, GetTypeFromTypeNameKey, (app::DefaultSerializationBinder * this_ptr, app::StructMultiKey_2_System_String_System_String_ type_name_key))
    IL2CPP_REGISTER_METHODINFO(0x04715558, DefaultSerializationBinder_GetTypeFromTypeNameKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0186B290, app::Type *, GetGenericTypeFromTypeName, (app::DefaultSerializationBinder * this_ptr, app::String * type_name, app::Assembly * assembly))
    IL2CPP_REGISTER_METHOD(0x0186B5A0, app::Type *, GetTypeByName, (app::DefaultSerializationBinder * this_ptr, app::StructMultiKey_2_System_String_System_String_ type_name_key))
    IL2CPP_REGISTER_METHOD(0x0186B670, app::Type *, BindToType, (app::DefaultSerializationBinder * this_ptr, app::String * assembly_name, app::String * type_name))
    IL2CPP_REGISTER_METHOD(0x0186B720, void, BindToName, (app::DefaultSerializationBinder * this_ptr, app::Type * serialized_type, app::String * * assembly_name, app::String * * type_name))
    IL2CPP_REGISTER_METHOD(0x0186B7A0, void, cctor, ())
}
