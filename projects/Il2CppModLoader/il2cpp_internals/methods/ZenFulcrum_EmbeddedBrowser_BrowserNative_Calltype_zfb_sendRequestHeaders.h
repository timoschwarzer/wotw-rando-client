#include <interception_macros.h>

namespace app::methods::ZenFulcrum_EmbeddedBrowser::BrowserNative_Calltype_zfb_sendRequestHeaders {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::BrowserNative_Calltype_zfb_sendRequestHeaders * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01DCB240, void, Invoke, (app::BrowserNative_Calltype_zfb_sendRequestHeaders * this_ptr, int32_t request_id, int32_t response_length, app::String * headers_j_s_o_n));
IL2CPP_REGISTER_METHOD(0x01DCB5C0, IAsyncResult *, BeginInvoke, (app::BrowserNative_Calltype_zfb_sendRequestHeaders * this_ptr, int32_t request_id, int32_t response_length, app::String * headers_j_s_o_n, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_Calltype_zfb_sendRequestHeaders * this_ptr, app::IAsyncResult * result));
}
