#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Shader_DefaultTextures {
        inline app::Shader_DefaultTextures__Class** type_info = (app::Shader_DefaultTextures__Class**)(modloader::win::memory::resolve_rva(0x047925D8));
        inline app::Shader_DefaultTextures__Class* get_class() {
            return il2cpp::get_nested_class<app::Shader_DefaultTextures__Class>(type_info, "Frameworks", "Shader", "DefaultTextures");
        }
        inline app::Shader_DefaultTextures* create() {
            return il2cpp::create_object<app::Shader_DefaultTextures>(get_class());
        }
    } // namespace Shader_DefaultTextures
} // namespace app::classes::types
