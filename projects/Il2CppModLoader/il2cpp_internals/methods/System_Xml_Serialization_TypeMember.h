#include <interception_macros.h>

namespace app::methods::System_Xml_Serialization::TypeMember {
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (app::TypeMember * this_ptr, app::Type * type, app::String * member));
IL2CPP_REGISTER_METHOD(0x01C93A10, int32_t, GetHashCode, (app::TypeMember * this_ptr));
IL2CPP_REGISTER_METHOD(0x01C93A70, bool, Equals_1, (app::TypeMember * this_ptr, app::Object * obj));
IL2CPP_REGISTER_METHOD(0x01C93C00, bool, Equals_2, (app::TypeMember * tm1, app::TypeMember * tm2));
IL2CPP_REGISTER_METHOD(0x01C93D00, String *, ToString, (app::TypeMember * this_ptr));
}
