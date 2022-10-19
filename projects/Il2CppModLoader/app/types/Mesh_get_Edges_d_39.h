#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Mesh_get_Edges_d_39 {
        inline app::Mesh_get_Edges_d_39__Class** type_info = (app::Mesh_get_Edges_d_39__Class**)(modloader::win::memory::resolve_rva(0x04720E30));
        inline app::Mesh_get_Edges_d_39__Class* get_class() {
            return il2cpp::get_nested_class<app::Mesh_get_Edges_d_39__Class>(type_info, "TriangleNet", "Mesh", "<get_Edges>d__39");
        }
        inline app::Mesh_get_Edges_d_39* create() {
            return il2cpp::create_object<app::Mesh_get_Edges_d_39>(get_class());
        }
    } // namespace Mesh_get_Edges_d_39
} // namespace app::classes::types
