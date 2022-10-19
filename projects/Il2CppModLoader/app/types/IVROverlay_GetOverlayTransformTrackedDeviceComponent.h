#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayTransformTrackedDeviceComponent {
        inline app::IVROverlay_GetOverlayTransformTrackedDeviceComponent__Class** type_info = (app::IVROverlay_GetOverlayTransformTrackedDeviceComponent__Class**)(modloader::win::memory::resolve_rva(0x0477DFA0));
        inline app::IVROverlay_GetOverlayTransformTrackedDeviceComponent__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayTransformTrackedDeviceComponent__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayTransformTrackedDeviceComponent");
        }
        inline app::IVROverlay_GetOverlayTransformTrackedDeviceComponent* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayTransformTrackedDeviceComponent>(get_class());
        }
    } // namespace IVROverlay_GetOverlayTransformTrackedDeviceComponent
} // namespace app::classes::types
