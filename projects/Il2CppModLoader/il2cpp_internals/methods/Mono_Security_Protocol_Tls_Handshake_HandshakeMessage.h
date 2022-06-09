#include <interception_macros.h>

namespace app::methods::Mono_Security_Protocol_Tls_Handshake::HandshakeMessage {
IL2CPP_REGISTER_METHOD(0x002FB9D0, Context_1 *, get_Context, (app::HandshakeMessage * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FCB00, HandshakeType__Enum, get_HandshakeType, (app::HandshakeMessage * this_ptr));
IL2CPP_REGISTER_METHOD(0x00614BA0, ContentType__Enum, get_ContentType, (app::HandshakeMessage * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F704E0, void, __ctor_1, (app::HandshakeMessage * this_ptr, app::Context_1 * context, app::HandshakeType__Enum handshake_type));
IL2CPP_REGISTER_METHOD(0x01F70520, void, __ctor_2, (app::HandshakeMessage * this_ptr, app::Context_1 * context, app::HandshakeType__Enum handshake_type, app::ContentType__Enum content_type));
IL2CPP_REGISTER_METHOD(0x01F70570, void, __ctor_3, (app::HandshakeMessage * this_ptr, app::Context_1 * context, app::HandshakeType__Enum handshake_type, app::Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x01F705B0, void, Process, (app::HandshakeMessage * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04761EC8, HandshakeMessage_Process__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F706B0, void, Update, (app::HandshakeMessage * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F70790, Byte__Array *, EncodeMessage, (app::HandshakeMessage * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F70970, bool, Compare, (app::Byte__Array * buffer1, app::Byte__Array * buffer2));
}
