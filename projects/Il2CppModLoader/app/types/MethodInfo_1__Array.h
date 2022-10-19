#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MethodInfo_1__Array {
        inline app::MethodInfo_1__Array__Class** type_info = (app::MethodInfo_1__Array__Class**)(modloader::win::memory::resolve_rva(0x0472A668));
        inline app::MethodInfo_1__Array__Class* get_class() {
            return il2cpp::get_class<app::MethodInfo_1__Array__Class>(type_info, "System.Reflection", "MethodInfo[]");
        }
        inline app::MethodInfo_1__Array* create() {
            return il2cpp::create_object<app::MethodInfo_1__Array>(get_class());
        }
    } // namespace MethodInfo_1__Array
} // namespace app::classes::types
