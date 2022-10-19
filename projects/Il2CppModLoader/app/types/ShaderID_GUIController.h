#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_GUIController {
        inline app::ShaderID_GUIController__Class** type_info = (app::ShaderID_GUIController__Class**)(modloader::win::memory::resolve_rva(0x0472D8D0));
        inline app::ShaderID_GUIController__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_GUIController__Class>(type_info, "", "ShaderID_GUIController");
        }
        inline app::ShaderID_GUIController* create() {
            return il2cpp::create_object<app::ShaderID_GUIController>(get_class());
        }
    } // namespace ShaderID_GUIController
} // namespace app::classes::types
