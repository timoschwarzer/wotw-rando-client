#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GCHandle__Array {
        inline app::GCHandle__Array__Class** type_info = (app::GCHandle__Array__Class**)(modloader::win::memory::resolve_rva(0x047943C8));
        inline app::GCHandle__Array__Class* get_class() {
            return il2cpp::get_class<app::GCHandle__Array__Class>(type_info, "System.Runtime.InteropServices", "GCHandle[]");
        }
        inline app::GCHandle__Array* create() {
            return il2cpp::create_object<app::GCHandle__Array>(get_class());
        }
    } // namespace GCHandle__Array
} // namespace app::classes::types
