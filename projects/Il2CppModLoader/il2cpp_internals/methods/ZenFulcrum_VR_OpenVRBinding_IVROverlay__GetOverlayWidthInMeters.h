#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVROverlay__GetOverlayWidthInMeters {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVROverlay_GetOverlayWidthInMeters * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02188B40, EVROverlayError__Enum, Invoke, (app::IVROverlay_GetOverlayWidthInMeters * this_ptr, uint64_t ul_overlay_handle, app::float * pf_width_in_meters));
IL2CPP_REGISTER_METHOD(0x02D7D3B0, IAsyncResult *, BeginInvoke, (app::IVROverlay_GetOverlayWidthInMeters * this_ptr, uint64_t ul_overlay_handle, app::float * pf_width_in_meters, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVROverlayError__Enum, EndInvoke, (app::IVROverlay_GetOverlayWidthInMeters * this_ptr, app::float * pf_width_in_meters, app::IAsyncResult * result));
}
