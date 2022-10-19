#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDrivable__Array {
        namespace {
            inline app::IDrivable__Array__Class* type_info_ref = nullptr;
        }
        inline app::IDrivable__Array__Class** type_info = &type_info_ref;
        inline app::IDrivable__Array__Class* get_class() {
            return il2cpp::get_class<app::IDrivable__Array__Class>(type_info, "Moon", "IDrivable[]");
        }
        inline app::IDrivable__Array* create() {
            return il2cpp::create_object<app::IDrivable__Array>(get_class());
        }
    } // namespace IDrivable__Array
} // namespace app::classes::types
