#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Vertex_EnumerateEdges_d_6 {
        inline app::Vertex_EnumerateEdges_d_6__Class** type_info = (app::Vertex_EnumerateEdges_d_6__Class**)(modloader::win::memory::resolve_rva(0x047611F0));
        inline app::Vertex_EnumerateEdges_d_6__Class* get_class() {
            return il2cpp::get_nested_class<app::Vertex_EnumerateEdges_d_6__Class>(type_info, "TriangleNet.Topology.DCEL", "Vertex", "<EnumerateEdges>d__6");
        }
        inline app::Vertex_EnumerateEdges_d_6* create() {
            return il2cpp::create_object<app::Vertex_EnumerateEdges_d_6>(get_class());
        }
    } // namespace Vertex_EnumerateEdges_d_6
} // namespace app::classes::types
