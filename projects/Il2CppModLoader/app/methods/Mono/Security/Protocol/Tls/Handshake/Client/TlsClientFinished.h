#include <interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Tls::Handshake::Client::TlsClientFinished {
    IL2CPP_REGISTER_METHOD(0x01F6B960, void, ctor, (app::TlsClientFinished_1 * this_ptr, app::Context_1 * context))
    IL2CPP_REGISTER_METHOD(0x01F6A330, void, Update, (app::TlsClientFinished_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F6B990, void, ProcessAsSsl3, (app::TlsClientFinished_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F6BC70, void, ProcessAsTls1, (app::TlsClientFinished_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F6BED0, void, cctor, ())
}
