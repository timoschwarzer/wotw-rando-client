#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_ContrastStretchEffect {
        inline app::ShaderID_ContrastStretchEffect__Class** type_info = (app::ShaderID_ContrastStretchEffect__Class**)(modloader::win::memory::resolve_rva(0x04788810));
        inline app::ShaderID_ContrastStretchEffect__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_ContrastStretchEffect__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_ContrastStretchEffect");
        }
        inline app::ShaderID_ContrastStretchEffect* create() {
            return il2cpp::create_object<app::ShaderID_ContrastStretchEffect>(get_class());
        }
    } // namespace ShaderID_ContrastStretchEffect
} // namespace app::classes::types
