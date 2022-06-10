#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetDashboardOverlaySceneProcess {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_GetDashboardOverlaySceneProcess * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02188B40, app::EVROverlayError__Enum, Invoke, (app::IVROverlay_GetDashboardOverlaySceneProcess * this_ptr, uint64_t ul_overlay_handle, uint32_t * pun_process_id))
    IL2CPP_REGISTER_METHOD(0x02D79C70, app::IAsyncResult *, BeginInvoke, (app::IVROverlay_GetDashboardOverlaySceneProcess * this_ptr, uint64_t ul_overlay_handle, uint32_t * pun_process_id, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F51FA0, app::EVROverlayError__Enum, EndInvoke, (app::IVROverlay_GetDashboardOverlaySceneProcess * this_ptr, uint32_t * pun_process_id, app::IAsyncResult * result))
}
