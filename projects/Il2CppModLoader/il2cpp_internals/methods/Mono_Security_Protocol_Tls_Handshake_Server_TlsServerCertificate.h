#include <interception_macros.h>

namespace app::methods::Mono_Security_Protocol_Tls_Handshake_Server::TlsServerCertificate {
    IL2CPP_REGISTER_METHOD(0x01F6A2D0, void, __ctor, (app::TlsServerCertificate * this_ptr, app::Context_1 * context));
    IL2CPP_REGISTER_METHOD(0x01F6CDE0, void, ProcessAsSsl3, (app::TlsServerCertificate * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F74220, void, ProcessAsTls1, (app::TlsServerCertificate * this_ptr));
}
