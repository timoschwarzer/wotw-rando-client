#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVROverlay__SetOverlayTransformOverlayRelative {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVROverlay_SetOverlayTransformOverlayRelative * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE61E0, EVROverlayError__Enum, Invoke, (app::IVROverlay_SetOverlayTransformOverlayRelative * this_ptr, uint64_t ul_overlay_handle, uint64_t ul_overlay_handle_parent, app::HmdMatrix34_t * pmat_parent_overlay_to_overlay_transform));
IL2CPP_REGISTER_METHOD(0x02D81190, IAsyncResult *, BeginInvoke, (app::IVROverlay_SetOverlayTransformOverlayRelative * this_ptr, uint64_t ul_overlay_handle, uint64_t ul_overlay_handle_parent, app::HmdMatrix34_t * pmat_parent_overlay_to_overlay_transform, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVROverlayError__Enum, EndInvoke, (app::IVROverlay_SetOverlayTransformOverlayRelative * this_ptr, app::HmdMatrix34_t * pmat_parent_overlay_to_overlay_transform, app::IAsyncResult * result));
}
