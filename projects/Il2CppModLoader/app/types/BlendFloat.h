#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BlendFloat {
        inline app::BlendFloat__Class** type_info = (app::BlendFloat__Class**)(modloader::win::memory::resolve_rva(0x04714D88));
        inline app::BlendFloat__Class* get_class() {
            return il2cpp::get_class<app::BlendFloat__Class>(type_info, "", "BlendFloat");
        }
        inline app::BlendFloat* create() {
            return il2cpp::create_object<app::BlendFloat>(get_class());
        }
    } // namespace BlendFloat
} // namespace app::classes::types
