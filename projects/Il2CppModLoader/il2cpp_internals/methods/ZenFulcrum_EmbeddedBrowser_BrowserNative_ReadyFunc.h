#include <interception_macros.h>

namespace app::methods::ZenFulcrum_EmbeddedBrowser::BrowserNative_ReadyFunc {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::BrowserNative_ReadyFunc * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01C77D40, void, Invoke, (app::BrowserNative_ReadyFunc * this_ptr, int32_t browser_id));
IL2CPP_REGISTER_METHOD(0x01DCDD50, IAsyncResult *, BeginInvoke, (app::BrowserNative_ReadyFunc * this_ptr, int32_t browser_id, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_ReadyFunc * this_ptr, app::IAsyncResult * result));
}
