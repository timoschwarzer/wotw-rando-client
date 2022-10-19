#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Triangle__Array__Array {
        inline app::Triangle__Array__Array__Class** type_info = (app::Triangle__Array__Array__Class**)(modloader::win::memory::resolve_rva(0x04782C08));
        inline app::Triangle__Array__Array__Class* get_class() {
            return il2cpp::get_class<app::Triangle__Array__Array__Class>(type_info, "TriangleNet.Topology", "Triangle[][]");
        }
        inline app::Triangle__Array__Array* create() {
            return il2cpp::create_object<app::Triangle__Array__Array>(get_class());
        }
    } // namespace Triangle__Array__Array
} // namespace app::classes::types
