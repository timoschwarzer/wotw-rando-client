#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blend2Camera_Screen {
        inline app::CameraFilterPack_Blend2Camera_Screen__Class** type_info = (app::CameraFilterPack_Blend2Camera_Screen__Class**)(modloader::win::memory::resolve_rva(0x0473E350));
        inline app::CameraFilterPack_Blend2Camera_Screen__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blend2Camera_Screen__Class>(type_info, "", "CameraFilterPack_Blend2Camera_Screen");
        }
        inline app::CameraFilterPack_Blend2Camera_Screen* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blend2Camera_Screen>(get_class());
        }
    } // namespace CameraFilterPack_Blend2Camera_Screen
} // namespace app::classes::types
