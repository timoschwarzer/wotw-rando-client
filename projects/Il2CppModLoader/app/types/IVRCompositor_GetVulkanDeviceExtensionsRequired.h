#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRCompositor_GetVulkanDeviceExtensionsRequired {
        inline app::IVRCompositor_GetVulkanDeviceExtensionsRequired__Class** type_info = (app::IVRCompositor_GetVulkanDeviceExtensionsRequired__Class**)(modloader::win::memory::resolve_rva(0x0473E8C8));
        inline app::IVRCompositor_GetVulkanDeviceExtensionsRequired__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_GetVulkanDeviceExtensionsRequired__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_GetVulkanDeviceExtensionsRequired");
        }
        inline app::IVRCompositor_GetVulkanDeviceExtensionsRequired* create() {
            return il2cpp::create_object<app::IVRCompositor_GetVulkanDeviceExtensionsRequired>(get_class());
        }
    } // namespace IVRCompositor_GetVulkanDeviceExtensionsRequired
} // namespace app::classes::types
