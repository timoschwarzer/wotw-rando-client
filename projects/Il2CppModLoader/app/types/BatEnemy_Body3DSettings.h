#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BatEnemy_Body3DSettings {
        namespace {
            inline app::BatEnemy_Body3DSettings__Class* type_info_ref = nullptr;
        }
        inline app::BatEnemy_Body3DSettings__Class** type_info = &type_info_ref;
        inline app::BatEnemy_Body3DSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::BatEnemy_Body3DSettings__Class>(type_info, "", "BatEnemy", "Body3DSettings");
        }
        inline app::BatEnemy_Body3DSettings* create() {
            return il2cpp::create_object<app::BatEnemy_Body3DSettings>(get_class());
        }
    } // namespace BatEnemy_Body3DSettings
} // namespace app::classes::types
