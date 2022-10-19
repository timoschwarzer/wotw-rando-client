#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Color_Contrast {
        inline app::CameraFilterPack_Color_Contrast__Class** type_info = (app::CameraFilterPack_Color_Contrast__Class**)(modloader::win::memory::resolve_rva(0x0471DFC8));
        inline app::CameraFilterPack_Color_Contrast__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Color_Contrast__Class>(type_info, "", "CameraFilterPack_Color_Contrast");
        }
        inline app::CameraFilterPack_Color_Contrast* create() {
            return il2cpp::create_object<app::CameraFilterPack_Color_Contrast>(get_class());
        }
    } // namespace CameraFilterPack_Color_Contrast
} // namespace app::classes::types
