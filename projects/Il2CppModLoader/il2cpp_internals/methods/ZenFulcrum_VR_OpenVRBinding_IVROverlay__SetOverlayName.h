#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVROverlay__SetOverlayName {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVROverlay_SetOverlayName * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02188B40, EVROverlayError__Enum, Invoke, (app::IVROverlay_SetOverlayName * this_ptr, uint64_t ul_overlay_handle, app::String * pch_name));
IL2CPP_REGISTER_METHOD(0x02D80340, IAsyncResult *, BeginInvoke, (app::IVROverlay_SetOverlayName * this_ptr, uint64_t ul_overlay_handle, app::String * pch_name, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVROverlayError__Enum, EndInvoke, (app::IVROverlay_SetOverlayName * this_ptr, app::IAsyncResult * result));
}
