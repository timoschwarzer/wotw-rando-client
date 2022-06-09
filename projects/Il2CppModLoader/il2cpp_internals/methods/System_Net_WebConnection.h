#include <interception_macros.h>

namespace app::methods::System_Net::WebConnection {
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::MonoChunkStream *, get_MonoChunkStream, (app::WebConnection * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01D61750, void, __ctor, (app::WebConnection * this_ptr, app::IWebConnectionState * wcs, app::ServicePoint * s_point));
    IL2CPP_REGISTER_METHOD(0x01D61BC0, bool, CanReuse, (app::WebConnection * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01D61BF0, void, Connect, (app::WebConnection * this_ptr, app::HttpWebRequest * request));
    IL2CPP_REGISTER_METHOD(0x01D62380, bool, CreateTunnel, (app::WebConnection * this_ptr, app::HttpWebRequest * request, app::Uri * connect_uri, app::Stream * stream, app::Byte__Array * * buffer));
    IL2CPP_REGISTER_METHOD(0x01D62D20, app::WebHeaderCollection *, ReadHeaders, (app::WebConnection * this_ptr, app::Stream * stream, app::Byte__Array * * ret_buffer, int32_t * status));
    IL2CPP_REGISTER_METHODINFO(0x047641F8, WebConnection_ReadHeaders__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01D63400, void, FlushContents, (app::WebConnection * this_ptr, app::Stream * stream, int32_t content_length));
    IL2CPP_REGISTER_METHOD(0x01D634D0, bool, CreateStream, (app::WebConnection * this_ptr, app::HttpWebRequest * request));
    IL2CPP_REGISTER_METHOD(0x01D63950, void, HandleError, (app::WebConnection * this_ptr, app::WebExceptionStatus__Enum st, app::Exception * e, app::String * where));
    IL2CPP_REGISTER_METHODINFO(0x0472F760, WebConnection_HandleError__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01D63C30, void, ReadDone, (app::WebConnection * this_ptr, app::IAsyncResult * result));
    IL2CPP_REGISTER_METHODINFO(0x0471F570, WebConnection_ReadDone__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01D643D0, bool, ExpectContent, (int32_t status_code, app::String * method_1));
    IL2CPP_REGISTER_METHOD(0x01D644B0, void, InitRead, (app::WebConnection * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01D646C0, int32_t, GetResponse, (app::WebConnectionData * data, app::ServicePoint * s_point, app::Byte__Array * buffer, int32_t max));
    IL2CPP_REGISTER_METHODINFO(0x0478BCA0, WebConnection_GetResponse__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01D65060, void, InitConnection, (app::WebConnection * this_ptr, app::HttpWebRequest * request));
    IL2CPP_REGISTER_METHOD(0x01D656D0, app::EventHandler *, SendRequest, (app::WebConnection * this_ptr, app::HttpWebRequest * request));
    IL2CPP_REGISTER_METHOD(0x01D65A20, void, SendNext, (app::WebConnection * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01D65C00, void, NextRead, (app::WebConnection * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01D66040, bool, ReadLine, (app::Byte__Array * buffer, int32_t * start, int32_t max, app::String * * output));
    IL2CPP_REGISTER_METHOD(0x01D66320, app::IAsyncResult *, BeginRead, (app::WebConnection * this_ptr, app::HttpWebRequest * request, app::Byte__Array * buffer, int32_t offset, int32_t size, app::AsyncCallback * cb, app::Object * state));
    IL2CPP_REGISTER_METHODINFO(0x0473CEB0, WebConnection_BeginRead__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01D668A0, int32_t, EndRead, (app::WebConnection * this_ptr, app::HttpWebRequest * request, app::IAsyncResult * result));
    IL2CPP_REGISTER_METHODINFO(0x04759208, WebConnection_EndRead__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01D66E60, int32_t, EnsureRead, (app::WebConnection * this_ptr, app::Byte__Array * buffer, int32_t offset, int32_t size));
    IL2CPP_REGISTER_METHOD(0x01D67010, bool, CompleteChunkedRead, (app::WebConnection * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01D670F0, app::IAsyncResult *, BeginWrite, (app::WebConnection * this_ptr, app::HttpWebRequest * request, app::Byte__Array * buffer, int32_t offset, int32_t size, app::AsyncCallback * cb, app::Object * state));
    IL2CPP_REGISTER_METHODINFO(0x04733AB0, WebConnection_BeginWrite__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01D674C0, bool, EndWrite, (app::WebConnection * this_ptr, app::HttpWebRequest * request, bool throw_on_error, app::IAsyncResult * result));
    IL2CPP_REGISTER_METHODINFO(0x04753DF8, WebConnection_EndWrite__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01D67800, int32_t, Read, (app::WebConnection * this_ptr, app::HttpWebRequest * request, app::Byte__Array * buffer, int32_t offset, int32_t size));
    IL2CPP_REGISTER_METHODINFO(0x0471E5E0, WebConnection_Read__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01D67C20, bool, Write, (app::WebConnection * this_ptr, app::HttpWebRequest * request, app::Byte__Array * buffer, int32_t offset, int32_t size, app::String * * err_msg));
    IL2CPP_REGISTER_METHODINFO(0x04770890, WebConnection_Write__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01D67EF0, void, Close, (app::WebConnection * this_ptr, bool send_next));
    IL2CPP_REGISTER_METHOD(0x01D68300, void, Abort, (app::WebConnection * this_ptr, app::Object * sender, app::EventArgs * args));
    IL2CPP_REGISTER_METHOD(0x01D687D0, void, ResetNtlm, (app::WebConnection * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01D687F0, bool, get_Connected, (app::WebConnection * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FBC10, void, set_PriorityRequest, (app::WebConnection * this_ptr, app::HttpWebRequest * value));
    IL2CPP_REGISTER_METHOD(0x00739A80, bool, get_NtlmAuthenticated, (app::WebConnection * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0094FCE0, void, set_NtlmAuthenticated, (app::WebConnection * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::NetworkCredential *, get_NtlmCredential, (app::WebConnection * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FBC30, void, set_NtlmCredential, (app::WebConnection * this_ptr, app::NetworkCredential * value));
    IL2CPP_REGISTER_METHOD(0x00AB7980, bool, get_UnsafeAuthenticatedConnectionSharing, (app::WebConnection * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01D688F0, void, set_UnsafeAuthenticatedConnectionSharing, (app::WebConnection * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x01D68900, void, _SendRequest_b__41_0, (app::WebConnection * this_ptr, app::Object * o));
    IL2CPP_REGISTER_METHODINFO(0x0475AB58, WebConnection__SendRequest_b__41_0__MethodInfo);
}
