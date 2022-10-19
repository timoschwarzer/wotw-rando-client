#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IntStateTransition {
        namespace {
            inline app::IntStateTransition__Class* type_info_ref = nullptr;
        }
        inline app::IntStateTransition__Class** type_info = &type_info_ref;
        inline app::IntStateTransition__Class* get_class() {
            return il2cpp::get_class<app::IntStateTransition__Class>(type_info, "", "IntStateTransition");
        }
        inline app::IntStateTransition* create() {
            return il2cpp::create_object<app::IntStateTransition>(get_class());
        }
    } // namespace IntStateTransition
} // namespace app::classes::types
