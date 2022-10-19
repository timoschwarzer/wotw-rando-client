#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_TVVignette {
        inline app::ShaderID_TVVignette__Class** type_info = (app::ShaderID_TVVignette__Class**)(modloader::win::memory::resolve_rva(0x047310A0));
        inline app::ShaderID_TVVignette__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_TVVignette__Class>(type_info, "Colorful", "ShaderID_TVVignette");
        }
        inline app::ShaderID_TVVignette* create() {
            return il2cpp::create_object<app::ShaderID_TVVignette>(get_class());
        }
    } // namespace ShaderID_TVVignette
} // namespace app::classes::types
