#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRChaperoneSetup_SetWorkingPhysicalBoundsInfo * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x0167DDE0, bool, Invoke, (app::IVRChaperoneSetup_SetWorkingPhysicalBoundsInfo * this_ptr, app::HmdQuad_t__Array * p_quads_buffer, uint32_t un_quads_count))
    IL2CPP_REGISTER_METHOD(0x02F40BD0, app::IAsyncResult *, BeginInvoke, (app::IVRChaperoneSetup_SetWorkingPhysicalBoundsInfo * this_ptr, app::HmdQuad_t__Array * p_quads_buffer, uint32_t un_quads_count, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::IVRChaperoneSetup_SetWorkingPhysicalBoundsInfo * this_ptr, app::IAsyncResult * result))
}
