#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVROverlay__GetOverlayTransformAbsolute {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVROverlay_GetOverlayTransformAbsolute * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE61E0, EVROverlayError__Enum, Invoke, (app::IVROverlay_GetOverlayTransformAbsolute * this_ptr, uint64_t ul_overlay_handle, app::ETrackingUniverseOrigin__Enum * pe_tracking_origin, app::HmdMatrix34_t * pmat_tracking_origin_to_overlay_transform));
IL2CPP_REGISTER_METHOD(0x02D7CAC0, IAsyncResult *, BeginInvoke, (app::IVROverlay_GetOverlayTransformAbsolute * this_ptr, uint64_t ul_overlay_handle, app::ETrackingUniverseOrigin__Enum * pe_tracking_origin, app::HmdMatrix34_t * pmat_tracking_origin_to_overlay_transform, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F530B0, EVROverlayError__Enum, EndInvoke, (app::IVROverlay_GetOverlayTransformAbsolute * this_ptr, app::ETrackingUniverseOrigin__Enum * pe_tracking_origin, app::HmdMatrix34_t * pmat_tracking_origin_to_overlay_transform, app::IAsyncResult * result));
}
