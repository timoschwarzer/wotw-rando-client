#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TypeAttributes__Enum {
        namespace {
            inline app::TypeAttributes__Enum__Class* type_info_ref = nullptr;
        }
        inline app::TypeAttributes__Enum__Class** type_info = &type_info_ref;
        inline app::TypeAttributes__Enum__Class* get_class() {
            return il2cpp::get_class<app::TypeAttributes__Enum__Class>(type_info, "System.Reflection", "TypeAttributes");
        }
        inline app::TypeAttributes__Enum* create() {
            return il2cpp::create_object<app::TypeAttributes__Enum>(get_class());
        }
    } // namespace TypeAttributes__Enum
} // namespace app::classes::types
