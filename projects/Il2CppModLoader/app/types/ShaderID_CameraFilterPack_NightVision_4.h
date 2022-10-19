#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_NightVision_4 {
        inline app::ShaderID_CameraFilterPack_NightVision_4__Class** type_info = (app::ShaderID_CameraFilterPack_NightVision_4__Class**)(modloader::win::memory::resolve_rva(0x0478F8B0));
        inline app::ShaderID_CameraFilterPack_NightVision_4__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_NightVision_4__Class>(type_info, "", "ShaderID_CameraFilterPack_NightVision_4");
        }
        inline app::ShaderID_CameraFilterPack_NightVision_4* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_NightVision_4>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_NightVision_4
} // namespace app::classes::types
