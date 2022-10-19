#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_DepthOfField {
        inline app::ShaderID_DepthOfField__Class** type_info = (app::ShaderID_DepthOfField__Class**)(modloader::win::memory::resolve_rva(0x0472DE78));
        inline app::ShaderID_DepthOfField__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_DepthOfField__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_DepthOfField");
        }
        inline app::ShaderID_DepthOfField* create() {
            return il2cpp::create_object<app::ShaderID_DepthOfField>(get_class());
        }
    } // namespace ShaderID_DepthOfField
} // namespace app::classes::types
