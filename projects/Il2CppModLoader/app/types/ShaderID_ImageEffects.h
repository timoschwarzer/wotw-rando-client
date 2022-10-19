#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_ImageEffects {
        inline app::ShaderID_ImageEffects__Class** type_info = (app::ShaderID_ImageEffects__Class**)(modloader::win::memory::resolve_rva(0x0472DE48));
        inline app::ShaderID_ImageEffects__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_ImageEffects__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_ImageEffects");
        }
        inline app::ShaderID_ImageEffects* create() {
            return il2cpp::create_object<app::ShaderID_ImageEffects>(get_class());
        }
    } // namespace ShaderID_ImageEffects
} // namespace app::classes::types
