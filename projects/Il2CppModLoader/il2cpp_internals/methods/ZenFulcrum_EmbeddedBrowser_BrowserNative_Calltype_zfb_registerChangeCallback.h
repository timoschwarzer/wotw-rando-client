#include <interception_macros.h>

namespace app::methods::ZenFulcrum_EmbeddedBrowser::BrowserNative_Calltype_zfb_registerChangeCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::BrowserNative_Calltype_zfb_registerChangeCallback * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (app::BrowserNative_Calltype_zfb_registerChangeCallback * this_ptr, int32_t id, app::BrowserNative_ChangeFunc * cb));
IL2CPP_REGISTER_METHOD(0x01DC9E50, IAsyncResult *, BeginInvoke, (app::BrowserNative_Calltype_zfb_registerChangeCallback * this_ptr, int32_t id, app::BrowserNative_ChangeFunc * cb, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_Calltype_zfb_registerChangeCallback * this_ptr, app::IAsyncResult * result));
}
