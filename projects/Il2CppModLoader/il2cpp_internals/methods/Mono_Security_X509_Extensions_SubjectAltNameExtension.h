#include <interception_macros.h>

namespace app::methods::Mono_Security_X509_Extensions::SubjectAltNameExtension {
IL2CPP_REGISTER_METHOD(0x0291D710, void, __ctor, (app::SubjectAltNameExtension * this_ptr, app::X509Extension_2 * extension));
IL2CPP_REGISTER_METHOD(0x02922360, void, Decode, (app::SubjectAltNameExtension * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0470E950, SubjectAltNameExtension_Decode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029225E0, String *, get_Name, (app::SubjectAltNameExtension * this_ptr));
IL2CPP_REGISTER_METHOD(0x02922660, String__Array *, get_DNSNames, (app::SubjectAltNameExtension * this_ptr));
IL2CPP_REGISTER_METHOD(0x02922790, String__Array *, get_IPAddresses, (app::SubjectAltNameExtension * this_ptr));
IL2CPP_REGISTER_METHOD(0x02384AA0, String *, ToString, (app::SubjectAltNameExtension * this_ptr));
}
