#include <interception_macros.h>

namespace app::methods::ZenFulcrum_EmbeddedBrowser::BrowserNative_ChangeFunc {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::BrowserNative_ChangeFunc * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01DCB240, void, Invoke, (app::BrowserNative_ChangeFunc * this_ptr, int32_t browser_id, app::BrowserNative_ChangeType__Enum change_type, app::String * arg1));
IL2CPP_REGISTER_METHOD(0x01DCC570, IAsyncResult *, BeginInvoke, (app::BrowserNative_ChangeFunc * this_ptr, int32_t browser_id, app::BrowserNative_ChangeType__Enum change_type, app::String * arg1, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_ChangeFunc * this_ptr, app::IAsyncResult * result));
}
