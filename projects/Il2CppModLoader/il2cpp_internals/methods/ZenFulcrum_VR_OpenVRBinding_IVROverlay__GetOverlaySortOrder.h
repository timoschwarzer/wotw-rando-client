#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVROverlay__GetOverlaySortOrder {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVROverlay_GetOverlaySortOrder * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02188B40, EVROverlayError__Enum, Invoke, (app::IVROverlay_GetOverlaySortOrder * this_ptr, uint64_t ul_overlay_handle, app::uint32_t * pun_sort_order));
IL2CPP_REGISTER_METHOD(0x02D7BC70, IAsyncResult *, BeginInvoke, (app::IVROverlay_GetOverlaySortOrder * this_ptr, uint64_t ul_overlay_handle, app::uint32_t * pun_sort_order, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVROverlayError__Enum, EndInvoke, (app::IVROverlay_GetOverlaySortOrder * this_ptr, app::uint32_t * pun_sort_order, app::IAsyncResult * result));
}
