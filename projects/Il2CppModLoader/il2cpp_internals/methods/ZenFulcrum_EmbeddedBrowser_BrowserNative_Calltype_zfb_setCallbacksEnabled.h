#include <interception_macros.h>

namespace app::methods::ZenFulcrum_EmbeddedBrowser::BrowserNative_Calltype_zfb_setCallbacksEnabled {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::BrowserNative_Calltype_zfb_setCallbacksEnabled * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x01DCB6A0, void, Invoke, (app::BrowserNative_Calltype_zfb_setCallbacksEnabled * this_ptr, bool enabled));
    IL2CPP_REGISTER_METHOD(0x01DCB9D0, app::IAsyncResult *, BeginInvoke, (app::BrowserNative_Calltype_zfb_setCallbacksEnabled * this_ptr, bool enabled, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_Calltype_zfb_setCallbacksEnabled * this_ptr, app::IAsyncResult * result));
}
