#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRCompositor_GetTrackingSpace {
        inline app::IVRCompositor_GetTrackingSpace__Class** type_info = (app::IVRCompositor_GetTrackingSpace__Class**)(modloader::win::memory::resolve_rva(0x0472E778));
        inline app::IVRCompositor_GetTrackingSpace__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_GetTrackingSpace__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_GetTrackingSpace");
        }
        inline app::IVRCompositor_GetTrackingSpace* create() {
            return il2cpp::create_object<app::IVRCompositor_GetTrackingSpace>(get_class());
        }
    } // namespace IVRCompositor_GetTrackingSpace
} // namespace app::classes::types
