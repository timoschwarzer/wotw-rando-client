#include <interception_macros.h>

namespace app::methods::System_Security_Permissions::ReflectionPermission {
IL2CPP_REGISTER_METHOD(0x01E1A610, void, __ctor_1, (app::ReflectionPermission * this_ptr, app::PermissionState__Enum state));
IL2CPP_REGISTER_METHOD(0x01E1A640, void, __ctor_2, (app::ReflectionPermission * this_ptr, app::ReflectionPermissionFlag__Enum flag));
IL2CPP_REGISTER_METHOD(0x002FC6D0, ReflectionPermissionFlag__Enum, get_Flags, (app::ReflectionPermission * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E1A650, void, set_Flags, (app::ReflectionPermission * this_ptr, app::ReflectionPermissionFlag__Enum value));
IL2CPP_REGISTER_METHODINFO(0x0474A870, ReflectionPermission_set_Flags__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E1A750, IPermission *, Copy, (app::ReflectionPermission * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E1A8A0, void, FromXml, (app::ReflectionPermission * this_ptr, app::SecurityElement * esd));
IL2CPP_REGISTER_METHOD(0x01E1AA50, IPermission *, Intersect, (app::ReflectionPermission * this_ptr, app::IPermission * target));
IL2CPP_REGISTER_METHOD(0x01E1ABC0, bool, IsSubsetOf, (app::ReflectionPermission * this_ptr, app::IPermission * target));
IL2CPP_REGISTER_METHOD(0x01E1AC20, bool, IsUnrestricted, (app::ReflectionPermission * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E1AC30, SecurityElement *, ToXml, (app::ReflectionPermission * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E1ADF0, IPermission *, Union, (app::ReflectionPermission * this_ptr, app::IPermission * other));
IL2CPP_REGISTER_METHOD(0x01E1B010, ReflectionPermission *, Cast, (app::ReflectionPermission * this_ptr, app::IPermission * target));
}
