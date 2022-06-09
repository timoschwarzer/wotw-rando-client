#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVROverlay__GetOverlayTransformTrackedDeviceRelative {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVROverlay_GetOverlayTransformTrackedDeviceRelative * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE61E0, EVROverlayError__Enum, Invoke, (app::IVROverlay_GetOverlayTransformTrackedDeviceRelative * this_ptr, uint64_t ul_overlay_handle, app::uint32_t * pun_tracked_device, app::HmdMatrix34_t * pmat_tracked_device_to_overlay_transform));
IL2CPP_REGISTER_METHOD(0x02D7D1D0, IAsyncResult *, BeginInvoke, (app::IVROverlay_GetOverlayTransformTrackedDeviceRelative * this_ptr, uint64_t ul_overlay_handle, app::uint32_t * pun_tracked_device, app::HmdMatrix34_t * pmat_tracked_device_to_overlay_transform, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F530B0, EVROverlayError__Enum, EndInvoke, (app::IVROverlay_GetOverlayTransformTrackedDeviceRelative * this_ptr, app::uint32_t * pun_tracked_device, app::HmdMatrix34_t * pmat_tracked_device_to_overlay_transform, app::IAsyncResult * result));
}
