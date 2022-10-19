#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IsXboxOneCondition {
        namespace {
            inline app::IsXboxOneCondition__Class* type_info_ref = nullptr;
        }
        inline app::IsXboxOneCondition__Class** type_info = &type_info_ref;
        inline app::IsXboxOneCondition__Class* get_class() {
            return il2cpp::get_class<app::IsXboxOneCondition__Class>(type_info, "", "IsXboxOneCondition");
        }
        inline app::IsXboxOneCondition* create() {
            return il2cpp::create_object<app::IsXboxOneCondition>(get_class());
        }
    } // namespace IsXboxOneCondition
} // namespace app::classes::types
