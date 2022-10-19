#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PropertyInfo_1__Array {
        inline app::PropertyInfo_1__Array__Class** type_info = (app::PropertyInfo_1__Array__Class**)(modloader::win::memory::resolve_rva(0x04721520));
        inline app::PropertyInfo_1__Array__Class* get_class() {
            return il2cpp::get_class<app::PropertyInfo_1__Array__Class>(type_info, "System.Reflection", "PropertyInfo[]");
        }
        inline app::PropertyInfo_1__Array* create() {
            return il2cpp::create_object<app::PropertyInfo_1__Array>(get_class());
        }
    } // namespace PropertyInfo_1__Array
} // namespace app::classes::types
