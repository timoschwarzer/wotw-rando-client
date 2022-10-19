#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVROverlay_SetOverlaySortOrder {
        inline app::IVROverlay_SetOverlaySortOrder__Class** type_info = (app::IVROverlay_SetOverlaySortOrder__Class**)(modloader::win::memory::resolve_rva(0x0470C6A8));
        inline app::IVROverlay_SetOverlaySortOrder__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetOverlaySortOrder__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetOverlaySortOrder");
        }
        inline app::IVROverlay_SetOverlaySortOrder* create() {
            return il2cpp::create_object<app::IVROverlay_SetOverlaySortOrder>(get_class());
        }
    } // namespace IVROverlay_SetOverlaySortOrder
} // namespace app::classes::types
