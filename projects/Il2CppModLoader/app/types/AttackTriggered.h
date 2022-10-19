#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AttackTriggered {
        namespace {
            inline app::AttackTriggered__Class* type_info_ref = nullptr;
        }
        inline app::AttackTriggered__Class** type_info = &type_info_ref;
        inline app::AttackTriggered__Class* get_class() {
            return il2cpp::get_class<app::AttackTriggered__Class>(type_info, "", "AttackTriggered");
        }
        inline app::AttackTriggered* create() {
            return il2cpp::create_object<app::AttackTriggered>(get_class());
        }
    } // namespace AttackTriggered
} // namespace app::classes::types
