#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayAlpha {
        inline app::IVROverlay_GetOverlayAlpha__Class** type_info = (app::IVROverlay_GetOverlayAlpha__Class**)(modloader::win::memory::resolve_rva(0x0475CF90));
        inline app::IVROverlay_GetOverlayAlpha__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayAlpha__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayAlpha");
        }
        inline app::IVROverlay_GetOverlayAlpha* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayAlpha>(get_class());
        }
    } // namespace IVROverlay_GetOverlayAlpha
} // namespace app::classes::types
