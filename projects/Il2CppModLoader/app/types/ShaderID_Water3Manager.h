#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_Water3Manager {
        inline app::ShaderID_Water3Manager__Class** type_info = (app::ShaderID_Water3Manager__Class**)(modloader::win::memory::resolve_rva(0x04702328));
        inline app::ShaderID_Water3Manager__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Water3Manager__Class>(type_info, "", "ShaderID_Water3Manager");
        }
        inline app::ShaderID_Water3Manager* create() {
            return il2cpp::create_object<app::ShaderID_Water3Manager>(get_class());
        }
    } // namespace ShaderID_Water3Manager
} // namespace app::classes::types
