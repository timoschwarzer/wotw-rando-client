#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRSystem__PollNextEvent {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRSystem_PollNextEvent * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x0167DDE0, bool, Invoke, (app::IVRSystem_PollNextEvent * this_ptr, app::VREvent_t * p_event, uint32_t uncb_v_r_event));
    IL2CPP_REGISTER_METHOD(0x02CEF610, app::IAsyncResult *, BeginInvoke, (app::IVRSystem_PollNextEvent * this_ptr, app::VREvent_t * p_event, uint32_t uncb_v_r_event, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (app::IVRSystem_PollNextEvent * this_ptr, app::VREvent_t * p_event, app::IAsyncResult * result));
}
