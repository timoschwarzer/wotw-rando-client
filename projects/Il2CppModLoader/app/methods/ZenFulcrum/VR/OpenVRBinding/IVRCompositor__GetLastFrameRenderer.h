#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetLastFrameRenderer {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRCompositor_GetLastFrameRenderer * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x0167F180, uint32_t, Invoke, (app::IVRCompositor_GetLastFrameRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00611B10, app::IAsyncResult *, BeginInvoke, (app::IVRCompositor_GetLastFrameRenderer * this_ptr, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, (app::IVRCompositor_GetLastFrameRenderer * this_ptr, app::IAsyncResult * result))
}
