#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayTexture {
        inline app::IVROverlay_GetOverlayTexture__Class** type_info = (app::IVROverlay_GetOverlayTexture__Class**)(modloader::win::memory::resolve_rva(0x0478B278));
        inline app::IVROverlay_GetOverlayTexture__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayTexture__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayTexture");
        }
        inline app::IVROverlay_GetOverlayTexture* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayTexture>(get_class());
        }
    } // namespace IVROverlay_GetOverlayTexture
} // namespace app::classes::types
