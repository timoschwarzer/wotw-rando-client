#include <interception_macros.h>

namespace app::methods::System::Net::HttpListenerResponse {
IL2CPP_REGISTER_METHOD(0x01E55510, void, __ctor, (HttpListenerResponse * __this, HttpListenerContext * context));
IL2CPP_REGISTER_METHOD(0x0061E2F0, bool, get_ForceCloseChunked, (HttpListenerResponse * __this));
IL2CPP_REGISTER_METHOD(0x01D48FC0, Encoding *, get_ContentEncoding, (HttpListenerResponse * __this));
IL2CPP_REGISTER_METHOD(0x01E55770, void, set_ContentEncoding, (HttpListenerResponse * __this, Encoding * value));
IL2CPP_REGISTER_METHODINFO(0x04756D98, HttpListenerResponse_set_ContentEncoding__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB950, int64_t, get_ContentLength64, (HttpListenerResponse * __this));
IL2CPP_REGISTER_METHOD(0x01E55890, void, set_ContentLength64, (HttpListenerResponse * __this, int64_t value));
IL2CPP_REGISTER_METHODINFO(0x0475EA98, HttpListenerResponse_set_ContentLength64__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_ContentType, (HttpListenerResponse * __this));
IL2CPP_REGISTER_METHOD(0x01E559F0, void, set_ContentType, (HttpListenerResponse * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x0476BB80, HttpListenerResponse_set_ContentType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E55B10, CookieCollection *, get_Cookies, (HttpListenerResponse * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_Cookies, (HttpListenerResponse * __this, CookieCollection * value));
IL2CPP_REGISTER_METHOD(0x002FB9D0, WebHeaderCollection *, get_Headers, (HttpListenerResponse * __this));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_Headers, (HttpListenerResponse * __this, WebHeaderCollection * value));
IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_KeepAlive, (HttpListenerResponse * __this));
IL2CPP_REGISTER_METHOD(0x01E55C70, void, set_KeepAlive, (HttpListenerResponse * __this, bool value));
IL2CPP_REGISTER_METHODINFO(0x047955E0, HttpListenerResponse_set_KeepAlive__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E55D90, Stream *, get_OutputStream, (HttpListenerResponse * __this));
IL2CPP_REGISTER_METHOD(0x002FBB60, Version *, get_ProtocolVersion, (HttpListenerResponse * __this));
IL2CPP_REGISTER_METHOD(0x01E55DE0, void, set_ProtocolVersion, (HttpListenerResponse * __this, Version * value));
IL2CPP_REGISTER_METHODINFO(0x0473DB08, HttpListenerResponse_set_ProtocolVersion__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FBB80, String *, get_RedirectLocation, (HttpListenerResponse * __this));
IL2CPP_REGISTER_METHOD(0x01E56010, void, set_RedirectLocation, (HttpListenerResponse * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x04721998, HttpListenerResponse_set_RedirectLocation__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005D8A80, bool, get_SendChunked, (HttpListenerResponse * __this));
IL2CPP_REGISTER_METHOD(0x01E56130, void, set_SendChunked, (HttpListenerResponse * __this, bool value));
IL2CPP_REGISTER_METHODINFO(0x04723868, HttpListenerResponse_set_SendChunked__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FF610, int32_t, get_StatusCode, (HttpListenerResponse * __this));
IL2CPP_REGISTER_METHOD(0x01E56250, void, set_StatusCode, (HttpListenerResponse * __this, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x04757958, HttpListenerResponse_set_StatusCode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FBBC0, String *, get_StatusDescription, (HttpListenerResponse * __this));
IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_StatusDescription, (HttpListenerResponse * __this, String * value));
IL2CPP_REGISTER_METHOD(0x01E563B0, void, IDisposable_Dispose, (HttpListenerResponse * __this));
IL2CPP_REGISTER_METHOD(0x01E563F0, void, Abort, (HttpListenerResponse * __this));
IL2CPP_REGISTER_METHOD(0x01E56440, void, AddHeader, (HttpListenerResponse * __this, String * name, String * value));
IL2CPP_REGISTER_METHODINFO(0x04724950, HttpListenerResponse_AddHeader__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E565E0, void, AppendCookie, (HttpListenerResponse * __this, Cookie * cookie));
IL2CPP_REGISTER_METHODINFO(0x0475D458, HttpListenerResponse_AppendCookie__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E567E0, void, AppendHeader, (HttpListenerResponse * __this, String * name, String * value));
IL2CPP_REGISTER_METHODINFO(0x047586F8, HttpListenerResponse_AppendHeader__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E56980, void, Close, (HttpListenerResponse * __this, bool force));
IL2CPP_REGISTER_METHOD(0x01E569C0, void, Close, (HttpListenerResponse * __this));
IL2CPP_REGISTER_METHOD(0x01E56A10, void, Close, (HttpListenerResponse * __this, Byte__Array * responseEntity, bool willBlock));
IL2CPP_REGISTER_METHODINFO(0x04793010, HttpListenerResponse_Close_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E56CD0, void, CopyFrom, (HttpListenerResponse * __this, HttpListenerResponse * templateResponse));
IL2CPP_REGISTER_METHOD(0x01E56D60, void, Redirect, (HttpListenerResponse * __this, String * url));
IL2CPP_REGISTER_METHOD(0x01E56D90, bool, FindCookie, (HttpListenerResponse * __this, Cookie * cookie));
IL2CPP_REGISTER_METHOD(0x01E57030, void, SendHeaders, (HttpListenerResponse * __this, bool closing, MemoryStream * ms));
IL2CPP_REGISTER_METHOD(0x01E57A40, String *, FormatHeaders, (WebHeaderCollection * headers));
IL2CPP_REGISTER_METHOD(0x01E57DE0, String *, CookieToClientString, (Cookie * cookie));
IL2CPP_REGISTER_METHOD(0x01E58170, String *, QuotedString, (Cookie * cookie, String * value));
IL2CPP_REGISTER_METHOD(0x01E58360, bool, IsToken, (String * value));
IL2CPP_REGISTER_METHOD(0x01E58490, void, SetCookie, (HttpListenerResponse * __this, Cookie * cookie));
IL2CPP_REGISTER_METHODINFO(0x0471FA88, HttpListenerResponse_SetCookie__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E58680, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x01E58710, void, __ctor, (HttpListenerResponse * __this));
IL2CPP_REGISTER_METHODINFO(0x04756E00, HttpListenerResponse__ctor_1__MethodInfo);
}
