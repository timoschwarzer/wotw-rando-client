#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRChaperoneSetup__GetLivePhysicalBoundsInfo {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRChaperoneSetup_GetLivePhysicalBoundsInfo * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x019D6DD0, bool, Invoke, (app::IVRChaperoneSetup_GetLivePhysicalBoundsInfo * this_ptr, app::HmdQuad_t__Array * p_quads_buffer, app::uint32_t * pun_quads_count));
IL2CPP_REGISTER_METHOD(0x02F402B0, IAsyncResult *, BeginInvoke, (app::IVRChaperoneSetup_GetLivePhysicalBoundsInfo * this_ptr, app::HmdQuad_t__Array * p_quads_buffer, app::uint32_t * pun_quads_count, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (app::IVRChaperoneSetup_GetLivePhysicalBoundsInfo * this_ptr, app::uint32_t * pun_quads_count, app::IAsyncResult * result));
}
