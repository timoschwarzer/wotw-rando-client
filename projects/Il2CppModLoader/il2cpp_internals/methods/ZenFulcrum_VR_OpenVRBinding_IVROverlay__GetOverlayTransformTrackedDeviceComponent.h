#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVROverlay__GetOverlayTransformTrackedDeviceComponent {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVROverlay_GetOverlayTransformTrackedDeviceComponent * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x02D7CCC0, app::EVROverlayError__Enum, Invoke, (app::IVROverlay_GetOverlayTransformTrackedDeviceComponent * this_ptr, uint64_t ul_overlay_handle, uint32_t * pun_device_index, app::String * pch_component_name, uint32_t un_component_name_size));
    IL2CPP_REGISTER_METHOD(0x02D7D0D0, app::IAsyncResult *, BeginInvoke, (app::IVROverlay_GetOverlayTransformTrackedDeviceComponent * this_ptr, uint64_t ul_overlay_handle, uint32_t * pun_device_index, app::String * pch_component_name, uint32_t un_component_name_size, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00F51FA0, app::EVROverlayError__Enum, EndInvoke, (app::IVROverlay_GetOverlayTransformTrackedDeviceComponent * this_ptr, uint32_t * pun_device_index, app::IAsyncResult * result));
}
