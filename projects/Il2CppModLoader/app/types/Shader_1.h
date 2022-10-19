#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Shader_1 {
        inline app::Shader_1__Class** type_info = (app::Shader_1__Class**)(modloader::win::memory::resolve_rva(0x04781E60));
        inline app::Shader_1__Class* get_class() {
            return il2cpp::get_class<app::Shader_1__Class>(type_info, "Frameworks", "Shader");
        }
        inline app::Shader_1* create() {
            return il2cpp::create_object<app::Shader_1>(get_class());
        }
    } // namespace Shader_1
} // namespace app::classes::types
