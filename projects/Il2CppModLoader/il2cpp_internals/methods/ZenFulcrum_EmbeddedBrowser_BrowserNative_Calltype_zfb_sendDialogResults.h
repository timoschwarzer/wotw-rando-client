#include <interception_macros.h>

namespace app::methods::ZenFulcrum_EmbeddedBrowser::BrowserNative_Calltype_zfb_sendDialogResults {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::BrowserNative_Calltype_zfb_sendDialogResults * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01DCAC40, void, Invoke, (app::BrowserNative_Calltype_zfb_sendDialogResults * this_ptr, int32_t id, bool affirmed, app::String * text1, app::String * text2));
IL2CPP_REGISTER_METHOD(0x01DCB060, IAsyncResult *, BeginInvoke, (app::BrowserNative_Calltype_zfb_sendDialogResults * this_ptr, int32_t id, bool affirmed, app::String * text1, app::String * text2, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_Calltype_zfb_sendDialogResults * this_ptr, app::IAsyncResult * result));
}
