#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ChangeStateOnCondition {
        namespace {
            inline app::ChangeStateOnCondition__Class* type_info_ref = nullptr;
        }
        inline app::ChangeStateOnCondition__Class** type_info = &type_info_ref;
        inline app::ChangeStateOnCondition__Class* get_class() {
            return il2cpp::get_class<app::ChangeStateOnCondition__Class>(type_info, "Moon.Setups", "ChangeStateOnCondition");
        }
        inline app::ChangeStateOnCondition* create() {
            return il2cpp::create_object<app::ChangeStateOnCondition>(get_class());
        }
    } // namespace ChangeStateOnCondition
} // namespace app::classes::types
