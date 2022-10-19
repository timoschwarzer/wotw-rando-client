#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MortarSpitAttackSettings {
        namespace {
            inline app::MortarSpitAttackSettings__Class* type_info_ref = nullptr;
        }
        inline app::MortarSpitAttackSettings__Class** type_info = &type_info_ref;
        inline app::MortarSpitAttackSettings__Class* get_class() {
            return il2cpp::get_class<app::MortarSpitAttackSettings__Class>(type_info, "", "MortarSpitAttackSettings");
        }
        inline app::MortarSpitAttackSettings* create() {
            return il2cpp::create_object<app::MortarSpitAttackSettings>(get_class());
        }
    } // namespace MortarSpitAttackSettings
} // namespace app::classes::types
