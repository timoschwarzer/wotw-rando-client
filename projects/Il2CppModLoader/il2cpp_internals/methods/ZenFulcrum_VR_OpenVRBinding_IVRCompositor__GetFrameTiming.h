#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRCompositor__GetFrameTiming {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRCompositor_GetFrameTiming * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x0167DDE0, bool, Invoke, (app::IVRCompositor_GetFrameTiming * this_ptr, app::Compositor_FrameTiming * p_timing, uint32_t un_frames_ago));
IL2CPP_REGISTER_METHOD(0x02F420A0, IAsyncResult *, BeginInvoke, (app::IVRCompositor_GetFrameTiming * this_ptr, app::Compositor_FrameTiming * p_timing, uint32_t un_frames_ago, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (app::IVRCompositor_GetFrameTiming * this_ptr, app::Compositor_FrameTiming * p_timing, app::IAsyncResult * result));
}
