#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GridObject_Mode__Enum {
        namespace {
            inline app::GridObject_Mode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::GridObject_Mode__Enum__Class** type_info = &type_info_ref;
        inline app::GridObject_Mode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GridObject_Mode__Enum__Class>(type_info, "", "GridObject", "Mode");
        }
        inline app::GridObject_Mode__Enum* create() {
            return il2cpp::create_object<app::GridObject_Mode__Enum>(get_class());
        }
    } // namespace GridObject_Mode__Enum
} // namespace app::classes::types
