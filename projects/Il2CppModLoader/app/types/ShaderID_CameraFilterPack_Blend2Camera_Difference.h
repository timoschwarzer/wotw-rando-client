#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Blend2Camera_Difference {
        inline app::ShaderID_CameraFilterPack_Blend2Camera_Difference__Class** type_info = (app::ShaderID_CameraFilterPack_Blend2Camera_Difference__Class**)(modloader::win::memory::resolve_rva(0x04751018));
        inline app::ShaderID_CameraFilterPack_Blend2Camera_Difference__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Blend2Camera_Difference__Class>(type_info, "", "ShaderID_CameraFilterPack_Blend2Camera_Difference");
        }
        inline app::ShaderID_CameraFilterPack_Blend2Camera_Difference* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Blend2Camera_Difference>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Blend2Camera_Difference
} // namespace app::classes::types
