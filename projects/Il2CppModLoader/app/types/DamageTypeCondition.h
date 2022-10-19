#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DamageTypeCondition {
        namespace {
            inline app::DamageTypeCondition__Class* type_info_ref = nullptr;
        }
        inline app::DamageTypeCondition__Class** type_info = &type_info_ref;
        inline app::DamageTypeCondition__Class* get_class() {
            return il2cpp::get_class<app::DamageTypeCondition__Class>(type_info, "", "DamageTypeCondition");
        }
        inline app::DamageTypeCondition* create() {
            return il2cpp::create_object<app::DamageTypeCondition>(get_class());
        }
    } // namespace DamageTypeCondition
} // namespace app::classes::types
