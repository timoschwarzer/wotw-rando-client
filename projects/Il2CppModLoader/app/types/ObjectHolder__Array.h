#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ObjectHolder__Array {
        inline app::ObjectHolder__Array__Class** type_info = (app::ObjectHolder__Array__Class**)(modloader::win::memory::resolve_rva(0x0472BB20));
        inline app::ObjectHolder__Array__Class* get_class() {
            return il2cpp::get_class<app::ObjectHolder__Array__Class>(type_info, "System.Runtime.Serialization", "ObjectHolder[]");
        }
        inline app::ObjectHolder__Array* create() {
            return il2cpp::create_object<app::ObjectHolder__Array>(get_class());
        }
    } // namespace ObjectHolder__Array
} // namespace app::classes::types
