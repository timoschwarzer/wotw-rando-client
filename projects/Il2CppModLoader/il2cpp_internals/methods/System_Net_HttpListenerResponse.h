#include <interception_macros.h>

namespace app::methods::System_Net::HttpListenerResponse {
    IL2CPP_REGISTER_METHOD(0x01E55510, void, __ctor_1, (app::HttpListenerResponse * this_ptr, app::HttpListenerContext * context));
    IL2CPP_REGISTER_METHOD(0x0061E2F0, bool, get_ForceCloseChunked, (app::HttpListenerResponse * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01D48FC0, app::Encoding *, get_ContentEncoding, (app::HttpListenerResponse * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E55770, void, set_ContentEncoding, (app::HttpListenerResponse * this_ptr, app::Encoding * value));
    IL2CPP_REGISTER_METHODINFO(0x04756D98, HttpListenerResponse_set_ContentEncoding__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FB950, int64_t, get_ContentLength64, (app::HttpListenerResponse * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E55890, void, set_ContentLength64, (app::HttpListenerResponse * this_ptr, int64_t value));
    IL2CPP_REGISTER_METHODINFO(0x0475EA98, HttpListenerResponse_set_ContentLength64__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String *, get_ContentType, (app::HttpListenerResponse * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E559F0, void, set_ContentType, (app::HttpListenerResponse * this_ptr, app::String * value));
    IL2CPP_REGISTER_METHODINFO(0x0476BB80, HttpListenerResponse_set_ContentType__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E55B10, app::CookieCollection *, get_Cookies, (app::HttpListenerResponse * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_Cookies, (app::HttpListenerResponse * this_ptr, app::CookieCollection * value));
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::WebHeaderCollection *, get_Headers, (app::HttpListenerResponse * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_Headers, (app::HttpListenerResponse * this_ptr, app::WebHeaderCollection * value));
    IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_KeepAlive, (app::HttpListenerResponse * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E55C70, void, set_KeepAlive, (app::HttpListenerResponse * this_ptr, bool value));
    IL2CPP_REGISTER_METHODINFO(0x047955E0, HttpListenerResponse_set_KeepAlive__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E55D90, app::Stream *, get_OutputStream, (app::HttpListenerResponse * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::Version *, get_ProtocolVersion, (app::HttpListenerResponse * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E55DE0, void, set_ProtocolVersion, (app::HttpListenerResponse * this_ptr, app::Version * value));
    IL2CPP_REGISTER_METHODINFO(0x0473DB08, HttpListenerResponse_set_ProtocolVersion__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::String *, get_RedirectLocation, (app::HttpListenerResponse * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E56010, void, set_RedirectLocation, (app::HttpListenerResponse * this_ptr, app::String * value));
    IL2CPP_REGISTER_METHODINFO(0x04721998, HttpListenerResponse_set_RedirectLocation__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x005D8A80, bool, get_SendChunked, (app::HttpListenerResponse * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E56130, void, set_SendChunked, (app::HttpListenerResponse * this_ptr, bool value));
    IL2CPP_REGISTER_METHODINFO(0x04723868, HttpListenerResponse_set_SendChunked__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x003FF610, int32_t, get_StatusCode, (app::HttpListenerResponse * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E56250, void, set_StatusCode, (app::HttpListenerResponse * this_ptr, int32_t value));
    IL2CPP_REGISTER_METHODINFO(0x04757958, HttpListenerResponse_set_StatusCode__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::String *, get_StatusDescription, (app::HttpListenerResponse * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_StatusDescription, (app::HttpListenerResponse * this_ptr, app::String * value));
    IL2CPP_REGISTER_METHOD(0x01E563B0, void, IDisposable_Dispose, (app::HttpListenerResponse * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E563F0, void, Abort, (app::HttpListenerResponse * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E56440, void, AddHeader, (app::HttpListenerResponse * this_ptr, app::String * name, app::String * value));
    IL2CPP_REGISTER_METHODINFO(0x04724950, HttpListenerResponse_AddHeader__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E565E0, void, AppendCookie, (app::HttpListenerResponse * this_ptr, app::Cookie * cookie));
    IL2CPP_REGISTER_METHODINFO(0x0475D458, HttpListenerResponse_AppendCookie__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E567E0, void, AppendHeader, (app::HttpListenerResponse * this_ptr, app::String * name, app::String * value));
    IL2CPP_REGISTER_METHODINFO(0x047586F8, HttpListenerResponse_AppendHeader__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E56980, void, Close_1, (app::HttpListenerResponse * this_ptr, bool force));
    IL2CPP_REGISTER_METHOD(0x01E569C0, void, Close_2, (app::HttpListenerResponse * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E56A10, void, Close_3, (app::HttpListenerResponse * this_ptr, app::Byte__Array * response_entity, bool will_block));
    IL2CPP_REGISTER_METHODINFO(0x04793010, HttpListenerResponse_Close_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E56CD0, void, CopyFrom, (app::HttpListenerResponse * this_ptr, app::HttpListenerResponse * template_response));
    IL2CPP_REGISTER_METHOD(0x01E56D60, void, Redirect, (app::HttpListenerResponse * this_ptr, app::String * url));
    IL2CPP_REGISTER_METHOD(0x01E56D90, bool, FindCookie, (app::HttpListenerResponse * this_ptr, app::Cookie * cookie));
    IL2CPP_REGISTER_METHOD(0x01E57030, void, SendHeaders, (app::HttpListenerResponse * this_ptr, bool closing, app::MemoryStream * ms));
    IL2CPP_REGISTER_METHOD(0x01E57A40, app::String *, FormatHeaders, (app::WebHeaderCollection * headers));
    IL2CPP_REGISTER_METHOD(0x01E57DE0, app::String *, CookieToClientString, (app::Cookie * cookie));
    IL2CPP_REGISTER_METHOD(0x01E58170, app::String *, QuotedString, (app::Cookie * cookie, app::String * value));
    IL2CPP_REGISTER_METHOD(0x01E58360, bool, IsToken, (app::String * value));
    IL2CPP_REGISTER_METHOD(0x01E58490, void, SetCookie, (app::HttpListenerResponse * this_ptr, app::Cookie * cookie));
    IL2CPP_REGISTER_METHODINFO(0x0471FA88, HttpListenerResponse_SetCookie__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E58680, void, __cctor, ());
    IL2CPP_REGISTER_METHOD(0x01E58710, void, __ctor_2, (app::HttpListenerResponse * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04756E00, HttpListenerResponse__ctor_1__MethodInfo);
}
