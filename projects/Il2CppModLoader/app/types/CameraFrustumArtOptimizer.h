#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFrustumArtOptimizer {
        namespace {
            inline app::CameraFrustumArtOptimizer__Class* type_info_ref = nullptr;
        }
        inline app::CameraFrustumArtOptimizer__Class** type_info = &type_info_ref;
        inline app::CameraFrustumArtOptimizer__Class* get_class() {
            return il2cpp::get_class<app::CameraFrustumArtOptimizer__Class>(type_info, "", "CameraFrustumArtOptimizer");
        }
        inline app::CameraFrustumArtOptimizer* create() {
            return il2cpp::create_object<app::CameraFrustumArtOptimizer>(get_class());
        }
    } // namespace CameraFrustumArtOptimizer
} // namespace app::classes::types
