#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVROverlay__GetOverlayTextureColorSpace {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVROverlay_GetOverlayTextureColorSpace * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02188B40, EVROverlayError__Enum, Invoke, (app::IVROverlay_GetOverlayTextureColorSpace * this_ptr, uint64_t ul_overlay_handle, app::EColorSpace__Enum * pe_texture_color_space));
IL2CPP_REGISTER_METHOD(0x02D7C8E0, IAsyncResult *, BeginInvoke, (app::IVROverlay_GetOverlayTextureColorSpace * this_ptr, uint64_t ul_overlay_handle, app::EColorSpace__Enum * pe_texture_color_space, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVROverlayError__Enum, EndInvoke, (app::IVROverlay_GetOverlayTextureColorSpace * this_ptr, app::EColorSpace__Enum * pe_texture_color_space, app::IAsyncResult * result));
}
