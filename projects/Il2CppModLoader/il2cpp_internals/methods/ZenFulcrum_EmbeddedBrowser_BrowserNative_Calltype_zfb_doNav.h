#include <interception_macros.h>

namespace app::methods::ZenFulcrum_EmbeddedBrowser::BrowserNative_Calltype_zfb_doNav {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::BrowserNative_Calltype_zfb_doNav * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01C774C0, void, Invoke, (app::BrowserNative_Calltype_zfb_doNav * this_ptr, int32_t id, int32_t direction));
IL2CPP_REGISTER_METHOD(0x01C78BC0, IAsyncResult *, BeginInvoke, (app::BrowserNative_Calltype_zfb_doNav * this_ptr, int32_t id, int32_t direction, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_Calltype_zfb_doNav * this_ptr, app::IAsyncResult * result));
}
