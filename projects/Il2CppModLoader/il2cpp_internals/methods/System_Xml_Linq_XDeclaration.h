#include <interception_macros.h>

namespace app::methods::System_Xml_Linq::XDeclaration {
IL2CPP_REGISTER_METHOD(0x00522850, void, __ctor_1, (app::XDeclaration * this_ptr, app::String * version, app::String * encoding, app::String * standalone));
IL2CPP_REGISTER_METHOD(0x03035150, void, __ctor_2, (app::XDeclaration * this_ptr, app::XDeclaration * other));
IL2CPP_REGISTER_METHODINFO(0x0478B0F8, XDeclaration__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Encoding, (app::XDeclaration * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_Standalone, (app::XDeclaration * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Version, (app::XDeclaration * this_ptr));
IL2CPP_REGISTER_METHOD(0x03035220, String *, ToString, (app::XDeclaration * this_ptr));
}
