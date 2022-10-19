#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AttackedCondition {
        namespace {
            inline app::AttackedCondition__Class* type_info_ref = nullptr;
        }
        inline app::AttackedCondition__Class** type_info = &type_info_ref;
        inline app::AttackedCondition__Class* get_class() {
            return il2cpp::get_class<app::AttackedCondition__Class>(type_info, "", "AttackedCondition");
        }
        inline app::AttackedCondition* create() {
            return il2cpp::create_object<app::AttackedCondition>(get_class());
        }
    } // namespace AttackedCondition
} // namespace app::classes::types
