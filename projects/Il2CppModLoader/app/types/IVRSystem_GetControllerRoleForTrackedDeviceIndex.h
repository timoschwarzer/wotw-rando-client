#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRSystem_GetControllerRoleForTrackedDeviceIndex {
        inline app::IVRSystem_GetControllerRoleForTrackedDeviceIndex__Class** type_info = (app::IVRSystem_GetControllerRoleForTrackedDeviceIndex__Class**)(modloader::win::memory::resolve_rva(0x04760570));
        inline app::IVRSystem_GetControllerRoleForTrackedDeviceIndex__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetControllerRoleForTrackedDeviceIndex__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetControllerRoleForTrackedDeviceIndex");
        }
        inline app::IVRSystem_GetControllerRoleForTrackedDeviceIndex* create() {
            return il2cpp::create_object<app::IVRSystem_GetControllerRoleForTrackedDeviceIndex>(get_class());
        }
    } // namespace IVRSystem_GetControllerRoleForTrackedDeviceIndex
} // namespace app::classes::types
