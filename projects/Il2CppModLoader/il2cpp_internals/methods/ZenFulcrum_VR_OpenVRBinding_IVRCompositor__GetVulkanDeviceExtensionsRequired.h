#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRCompositor__GetVulkanDeviceExtensionsRequired {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRCompositor_GetVulkanDeviceExtensionsRequired * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x02F42630, uint32_t, Invoke, (app::IVRCompositor_GetVulkanDeviceExtensionsRequired * this_ptr, void * p_physical_device, app::StringBuilder * pch_value, uint32_t un_buffer_size));
    IL2CPP_REGISTER_METHOD(0x02F429C0, app::IAsyncResult *, BeginInvoke, (app::IVRCompositor_GetVulkanDeviceExtensionsRequired * this_ptr, void * p_physical_device, app::StringBuilder * pch_value, uint32_t un_buffer_size, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, (app::IVRCompositor_GetVulkanDeviceExtensionsRequired * this_ptr, app::IAsyncResult * result));
}
