#include <interception_macros.h>

namespace app::methods::ZenFulcrum_EmbeddedBrowser::BrowserNative_Calltype_zfb_resize {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::BrowserNative_Calltype_zfb_resize * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01C778D0, void, Invoke, (app::BrowserNative_Calltype_zfb_resize * this_ptr, int32_t id, int32_t w, int32_t h));
IL2CPP_REGISTER_METHOD(0x01DCA9B0, IAsyncResult *, BeginInvoke, (app::BrowserNative_Calltype_zfb_resize * this_ptr, int32_t id, int32_t w, int32_t h, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_Calltype_zfb_resize * this_ptr, app::IAsyncResult * result));
}
