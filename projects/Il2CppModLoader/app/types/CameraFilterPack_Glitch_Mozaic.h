#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Glitch_Mozaic {
        inline app::CameraFilterPack_Glitch_Mozaic__Class** type_info = (app::CameraFilterPack_Glitch_Mozaic__Class**)(modloader::win::memory::resolve_rva(0x04764FC8));
        inline app::CameraFilterPack_Glitch_Mozaic__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Glitch_Mozaic__Class>(type_info, "", "CameraFilterPack_Glitch_Mozaic");
        }
        inline app::CameraFilterPack_Glitch_Mozaic* create() {
            return il2cpp::create_object<app::CameraFilterPack_Glitch_Mozaic>(get_class());
        }
    } // namespace CameraFilterPack_Glitch_Mozaic
} // namespace app::classes::types
