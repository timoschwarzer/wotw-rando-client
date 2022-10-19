#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_Bloom_1 {
        inline app::ShaderID_Bloom_1__Class** type_info = (app::ShaderID_Bloom_1__Class**)(modloader::win::memory::resolve_rva(0x0470DC90));
        inline app::ShaderID_Bloom_1__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Bloom_1__Class>(type_info, "UnityStandardAssets.CinematicEffects", "ShaderID_Bloom");
        }
        inline app::ShaderID_Bloom_1* create() {
            return il2cpp::create_object<app::ShaderID_Bloom_1>(get_class());
        }
    } // namespace ShaderID_Bloom_1
} // namespace app::classes::types
