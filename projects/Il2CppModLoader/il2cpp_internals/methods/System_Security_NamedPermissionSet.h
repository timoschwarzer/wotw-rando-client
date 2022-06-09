#include <interception_macros.h>

namespace app::methods::System_Security::NamedPermissionSet {
IL2CPP_REGISTER_METHOD(0x01E18EC0, void, __ctor_1, (app::NamedPermissionSet * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E18F60, void, __ctor_2, (app::NamedPermissionSet * this_ptr, app::String * name, app::PermissionState__Enum state));
IL2CPP_REGISTER_METHOD(0x01E19100, void, __ctor_3, (app::NamedPermissionSet * this_ptr, app::String * name));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_Name, (app::NamedPermissionSet * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E19110, void, set_Name, (app::NamedPermissionSet * this_ptr, app::String * value));
IL2CPP_REGISTER_METHODINFO(0x047720F8, NamedPermissionSet_set_Name__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E19210, SecurityElement *, ToXml, (app::NamedPermissionSet * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E192F0, bool, Equals, (app::NamedPermissionSet * this_ptr, app::Object * obj));
IL2CPP_REGISTER_METHOD(0x01E193E0, int32_t, GetHashCode, (app::NamedPermissionSet * this_ptr));
}
