#include <interception_macros.h>

namespace app::methods::Mono_Security_X509_Extensions::NetscapeCertTypeExtension {
IL2CPP_REGISTER_METHOD(0x0291D710, void, __ctor, (app::NetscapeCertTypeExtension * this_ptr, app::X509Extension_2 * extension));
IL2CPP_REGISTER_METHOD(0x02921BA0, void, Decode, (app::NetscapeCertTypeExtension * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04702280, NetscapeCertTypeExtension_Decode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02921DD0, String *, get_Name, (app::NetscapeCertTypeExtension * this_ptr));
IL2CPP_REGISTER_METHOD(0x02921E50, bool, Support, (app::NetscapeCertTypeExtension * this_ptr, app::NetscapeCertTypeExtension_CertTypes__Enum usage));
IL2CPP_REGISTER_METHOD(0x02921F50, String *, ToString, (app::NetscapeCertTypeExtension * this_ptr));
}
