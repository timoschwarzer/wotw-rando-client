#include <interception_macros.h>

namespace app::methods::ZenFulcrum_EmbeddedBrowser::BrowserNative_Calltype_zfb_mouseMove {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::BrowserNative_Calltype_zfb_mouseMove * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x01C7C840, void, Invoke, (app::BrowserNative_Calltype_zfb_mouseMove * this_ptr, int32_t id, float x, float y));
    IL2CPP_REGISTER_METHOD(0x01C7CC00, app::IAsyncResult *, BeginInvoke, (app::BrowserNative_Calltype_zfb_mouseMove * this_ptr, int32_t id, float x, float y, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_Calltype_zfb_mouseMove * this_ptr, app::IAsyncResult * result));
}
