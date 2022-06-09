#include <interception_macros.h>

namespace app::methods::System_Net::HttpConnection {
IL2CPP_REGISTER_METHOD(0x01D3DAA0, void, __ctor, (app::HttpConnection * this_ptr, app::Socket * sock, app::EndPointListener * epl, bool secure, app::X509Certificate_1 * cert));
IL2CPP_REGISTER_METHOD(0x002FBCA0, SslStream *, get_SslStream, (app::HttpConnection * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC60, Int32__Array *, get_ClientCertificateErrors, (app::HttpConnection * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC80, X509Certificate2 *, get_ClientCertificate, (app::HttpConnection * this_ptr));
IL2CPP_REGISTER_METHOD(0x01D3E060, void, Init, (app::HttpConnection * this_ptr));
IL2CPP_REGISTER_METHOD(0x0150AEB0, bool, get_IsClosed, (app::HttpConnection * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FF3C0, int32_t, get_Reuses, (app::HttpConnection * this_ptr));
IL2CPP_REGISTER_METHOD(0x01D3E2A0, IPEndPoint *, get_LocalEndPoint, (app::HttpConnection * this_ptr));
IL2CPP_REGISTER_METHOD(0x01D3E3A0, IPEndPoint *, get_RemoteEndPoint, (app::HttpConnection * this_ptr));
IL2CPP_REGISTER_METHOD(0x00675C60, bool, get_IsSecure, (app::HttpConnection * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9F0, ListenerPrefix *, get_Prefix, (app::HttpConnection * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_Prefix, (app::HttpConnection * this_ptr, app::ListenerPrefix * value));
IL2CPP_REGISTER_METHOD(0x01D3E5A0, void, OnTimeout, (app::HttpConnection * this_ptr, app::Object * unused));
IL2CPP_REGISTER_METHODINFO(0x04711FF8, HttpConnection_OnTimeout__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D3E600, void, BeginReadRequest, (app::HttpConnection * this_ptr));
IL2CPP_REGISTER_METHOD(0x01D3E7B0, RequestStream *, GetRequestStream, (app::HttpConnection * this_ptr, bool chunked, int64_t contentlength));
IL2CPP_REGISTER_METHOD(0x01D3EBC0, ResponseStream *, GetResponseStream, (app::HttpConnection * this_ptr));
IL2CPP_REGISTER_METHOD(0x01D3EE70, void, OnRead, (app::IAsyncResult * ares));
IL2CPP_REGISTER_METHODINFO(0x0477C830, HttpConnection_OnRead__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D3EF40, void, OnReadInternal, (app::HttpConnection * this_ptr, app::IAsyncResult * ares));
IL2CPP_REGISTER_METHOD(0x01D3F420, void, RemoveConnection, (app::HttpConnection * this_ptr));
IL2CPP_REGISTER_METHOD(0x01D3F480, bool, ProcessInput, (app::HttpConnection * this_ptr, app::MemoryStream * ms));
IL2CPP_REGISTER_METHOD(0x01D3F7D0, String *, ReadLine, (app::HttpConnection * this_ptr, app::Byte__Array * buffer, int32_t offset, int32_t len, app::int32_t * used));
IL2CPP_REGISTER_METHOD(0x01D3FA30, void, SendError_1, (app::HttpConnection * this_ptr, app::String * msg, int32_t status));
IL2CPP_REGISTER_METHOD(0x01D3FD20, void, SendError_2, (app::HttpConnection * this_ptr));
IL2CPP_REGISTER_METHOD(0x01D3FD50, void, Unbind, (app::HttpConnection * this_ptr));
IL2CPP_REGISTER_METHOD(0x01D3FDA0, void, Close_1, (app::HttpConnection * this_ptr));
IL2CPP_REGISTER_METHOD(0x01D3FDB0, void, CloseSocket, (app::HttpConnection * this_ptr));
IL2CPP_REGISTER_METHOD(0x01D3FF00, void, Close_2, (app::HttpConnection * this_ptr, bool force_close));
IL2CPP_REGISTER_METHOD(0x01D40360, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x01D404C0, bool, __ctor_b__24_0, (app::HttpConnection * this_ptr, app::Object * t, app::X509Certificate_1 * c, app::X509Chain * ch, app::SslPolicyErrors__Enum e));
IL2CPP_REGISTER_METHODINFO(0x0475E478, HttpConnection___ctor_b__24_0__MethodInfo);
}
