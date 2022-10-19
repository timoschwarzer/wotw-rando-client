#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AttackableSwitchSetupData__Array {
        namespace {
            inline app::AttackableSwitchSetupData__Array__Class* type_info_ref = nullptr;
        }
        inline app::AttackableSwitchSetupData__Array__Class** type_info = &type_info_ref;
        inline app::AttackableSwitchSetupData__Array__Class* get_class() {
            return il2cpp::get_class<app::AttackableSwitchSetupData__Array__Class>(type_info, "", "AttackableSwitchSetupData[]");
        }
        inline app::AttackableSwitchSetupData__Array* create() {
            return il2cpp::create_object<app::AttackableSwitchSetupData__Array>(get_class());
        }
    } // namespace AttackableSwitchSetupData__Array
} // namespace app::classes::types
