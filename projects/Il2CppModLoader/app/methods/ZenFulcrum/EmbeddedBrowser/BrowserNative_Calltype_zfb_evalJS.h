#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_evalJS {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::BrowserNative_Calltype_zfb_evalJS * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01C795D0, void, Invoke, (app::BrowserNative_Calltype_zfb_evalJS * this_ptr, int32_t id, app::String * script, app::String * script_u_r_l))
    IL2CPP_REGISTER_METHOD(0x01C79950, app::IAsyncResult *, BeginInvoke, (app::BrowserNative_Calltype_zfb_evalJS * this_ptr, int32_t id, app::String * script, app::String * script_u_r_l, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_Calltype_zfb_evalJS * this_ptr, app::IAsyncResult * result))
}
