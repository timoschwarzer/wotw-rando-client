#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetKeyboardText {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_GetKeyboardText * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02D79D50, uint32_t, Invoke, (app::IVROverlay_GetKeyboardText * this_ptr, app::StringBuilder * pch_text, uint32_t cch_text))
    IL2CPP_REGISTER_METHOD(0x02D7A280, app::IAsyncResult *, BeginInvoke, (app::IVROverlay_GetKeyboardText * this_ptr, app::StringBuilder * pch_text, uint32_t cch_text, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, (app::IVROverlay_GetKeyboardText * this_ptr, app::IAsyncResult * result))
}
