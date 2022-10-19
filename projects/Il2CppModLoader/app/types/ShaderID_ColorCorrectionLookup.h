#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_ColorCorrectionLookup {
        inline app::ShaderID_ColorCorrectionLookup__Class** type_info = (app::ShaderID_ColorCorrectionLookup__Class**)(modloader::win::memory::resolve_rva(0x04714C60));
        inline app::ShaderID_ColorCorrectionLookup__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_ColorCorrectionLookup__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_ColorCorrectionLookup");
        }
        inline app::ShaderID_ColorCorrectionLookup* create() {
            return il2cpp::create_object<app::ShaderID_ColorCorrectionLookup>(get_class());
        }
    } // namespace ShaderID_ColorCorrectionLookup
} // namespace app::classes::types
