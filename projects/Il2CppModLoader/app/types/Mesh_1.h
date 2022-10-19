#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Mesh_1 {
        inline app::Mesh_1__Class** type_info = (app::Mesh_1__Class**)(modloader::win::memory::resolve_rva(0x0477F4E8));
        inline app::Mesh_1__Class* get_class() {
            return il2cpp::get_class<app::Mesh_1__Class>(type_info, "TriangleNet", "Mesh");
        }
        inline app::Mesh_1* create() {
            return il2cpp::create_object<app::Mesh_1>(get_class());
        }
    } // namespace Mesh_1
} // namespace app::classes::types
