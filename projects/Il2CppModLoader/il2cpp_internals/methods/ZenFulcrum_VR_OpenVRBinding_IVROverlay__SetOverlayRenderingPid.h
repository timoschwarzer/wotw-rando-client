#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVROverlay__SetOverlayRenderingPid {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVROverlay_SetOverlayRenderingPid * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x00F54C90, EVROverlayError__Enum, Invoke, (app::IVROverlay_SetOverlayRenderingPid * this_ptr, uint64_t ul_overlay_handle, uint32_t un_p_i_d));
IL2CPP_REGISTER_METHOD(0x02D80B90, IAsyncResult *, BeginInvoke, (app::IVROverlay_SetOverlayRenderingPid * this_ptr, uint64_t ul_overlay_handle, uint32_t un_p_i_d, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVROverlayError__Enum, EndInvoke, (app::IVROverlay_SetOverlayRenderingPid * this_ptr, app::IAsyncResult * result));
}
