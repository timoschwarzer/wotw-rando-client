#include <interception_macros.h>

namespace app::methods::Mono_Security_Protocol_Tls_Handshake_Client::TlsServerCertificate {
IL2CPP_REGISTER_METHOD(0x01F6CD40, void, __ctor, (app::TlsServerCertificate_1 * this_ptr, app::Context_1 * context, app::Byte__Array * buffer));
IL2CPP_REGISTER_METHOD(0x01F6CD80, void, Update, (app::TlsServerCertificate_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F6CDE0, void, ProcessAsSsl3, (app::TlsServerCertificate_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F6CE00, void, ProcessAsTls1, (app::TlsServerCertificate_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F6D120, bool, checkCertificateUsage, (app::TlsServerCertificate_1 * this_ptr, app::X509Certificate_2 * cert));
IL2CPP_REGISTER_METHOD(0x01F6D680, void, validateCertificates, (app::TlsServerCertificate_1 * this_ptr, app::X509CertificateCollection_2 * certificates));
IL2CPP_REGISTER_METHOD(0x01F6D890, void, RemoteValidation, (app::TlsServerCertificate_1 * this_ptr, app::ClientContext * context, app::AlertDescription__Enum_1 description));
IL2CPP_REGISTER_METHODINFO(0x0478B228, TlsServerCertificate_1_RemoteValidation__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F6D9C0, void, LocalValidation, (app::TlsServerCertificate_1 * this_ptr, app::ClientContext * context, app::AlertDescription__Enum_1 description));
IL2CPP_REGISTER_METHODINFO(0x047834F8, TlsServerCertificate_1_LocalValidation__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F6E200, bool, checkServerIdentity, (app::TlsServerCertificate_1 * this_ptr, app::X509Certificate_2 * cert));
IL2CPP_REGISTER_METHOD(0x01F6E770, bool, checkDomainName, (app::TlsServerCertificate_1 * this_ptr, app::String * subject_name));
IL2CPP_REGISTER_METHOD(0x01F6EAD0, bool, Match, (app::String * hostname, app::String * pattern));
}
