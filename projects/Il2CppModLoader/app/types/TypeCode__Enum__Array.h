#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TypeCode__Enum__Array {
        inline app::TypeCode__Enum__Array__Class** type_info = (app::TypeCode__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04744D38));
        inline app::TypeCode__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::TypeCode__Enum__Array__Class>(type_info, "System", "TypeCode[]");
        }
        inline app::TypeCode__Enum__Array* create() {
            return il2cpp::create_object<app::TypeCode__Enum__Array>(get_class());
        }
    } // namespace TypeCode__Enum__Array
} // namespace app::classes::types
