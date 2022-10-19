#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ButtonPressedCondition {
        namespace {
            inline app::ButtonPressedCondition__Class* type_info_ref = nullptr;
        }
        inline app::ButtonPressedCondition__Class** type_info = &type_info_ref;
        inline app::ButtonPressedCondition__Class* get_class() {
            return il2cpp::get_class<app::ButtonPressedCondition__Class>(type_info, "", "ButtonPressedCondition");
        }
        inline app::ButtonPressedCondition* create() {
            return il2cpp::create_object<app::ButtonPressedCondition>(get_class());
        }
    } // namespace ButtonPressedCondition
} // namespace app::classes::types
