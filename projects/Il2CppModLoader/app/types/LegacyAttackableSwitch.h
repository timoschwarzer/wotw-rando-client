#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyAttackableSwitch {
        namespace {
            inline app::LegacyAttackableSwitch__Class* type_info_ref = nullptr;
        }
        inline app::LegacyAttackableSwitch__Class** type_info = &type_info_ref;
        inline app::LegacyAttackableSwitch__Class* get_class() {
            return il2cpp::get_class<app::LegacyAttackableSwitch__Class>(type_info, "", "LegacyAttackableSwitch");
        }
        inline app::LegacyAttackableSwitch* create() {
            return il2cpp::create_object<app::LegacyAttackableSwitch>(get_class());
        }
    } // namespace LegacyAttackableSwitch
} // namespace app::classes::types
