#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_CustomWater {
        inline app::ShaderID_CustomWater__Class** type_info = (app::ShaderID_CustomWater__Class**)(modloader::win::memory::resolve_rva(0x0476F508));
        inline app::ShaderID_CustomWater__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CustomWater__Class>(type_info, "", "ShaderID_CustomWater");
        }
        inline app::ShaderID_CustomWater* create() {
            return il2cpp::create_object<app::ShaderID_CustomWater>(get_class());
        }
    } // namespace ShaderID_CustomWater
} // namespace app::classes::types
