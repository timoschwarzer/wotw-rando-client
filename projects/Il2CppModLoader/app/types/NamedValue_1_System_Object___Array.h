#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NamedValue_1_System_Object___Array {
        namespace {
            inline app::NamedValue_1_System_Object___Array__Class* type_info_ref = nullptr;
        }
        inline app::NamedValue_1_System_Object___Array__Class** type_info = &type_info_ref;
        inline app::NamedValue_1_System_Object___Array__Class* get_class() {
            return il2cpp::get_class<app::NamedValue_1_System_Object___Array__Class>(type_info, "Moon", "NamedValue`1[System.Object][]");
        }
        inline app::NamedValue_1_System_Object___Array* create() {
            return il2cpp::create_object<app::NamedValue_1_System_Object___Array>(get_class());
        }
    } // namespace NamedValue_1_System_Object___Array
} // namespace app::classes::types
