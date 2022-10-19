#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Distortion_Wave_Horizontal {
        inline app::CameraFilterPack_Distortion_Wave_Horizontal__Class** type_info = (app::CameraFilterPack_Distortion_Wave_Horizontal__Class**)(modloader::win::memory::resolve_rva(0x047609E8));
        inline app::CameraFilterPack_Distortion_Wave_Horizontal__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Distortion_Wave_Horizontal__Class>(type_info, "", "CameraFilterPack_Distortion_Wave_Horizontal");
        }
        inline app::CameraFilterPack_Distortion_Wave_Horizontal* create() {
            return il2cpp::create_object<app::CameraFilterPack_Distortion_Wave_Horizontal>(get_class());
        }
    } // namespace CameraFilterPack_Distortion_Wave_Horizontal
} // namespace app::classes::types
