#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blur_GaussianBlur {
        inline app::CameraFilterPack_Blur_GaussianBlur__Class** type_info = (app::CameraFilterPack_Blur_GaussianBlur__Class**)(modloader::win::memory::resolve_rva(0x04799B10));
        inline app::CameraFilterPack_Blur_GaussianBlur__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blur_GaussianBlur__Class>(type_info, "", "CameraFilterPack_Blur_GaussianBlur");
        }
        inline app::CameraFilterPack_Blur_GaussianBlur* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blur_GaussianBlur>(get_class());
        }
    } // namespace CameraFilterPack_Blur_GaussianBlur
} // namespace app::classes::types
