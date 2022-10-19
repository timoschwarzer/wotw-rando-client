#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XContainer_Nodes_d_18 {
        inline app::XContainer_Nodes_d_18__Class** type_info = (app::XContainer_Nodes_d_18__Class**)(modloader::win::memory::resolve_rva(0x047547D8));
        inline app::XContainer_Nodes_d_18__Class* get_class() {
            return il2cpp::get_nested_class<app::XContainer_Nodes_d_18__Class>(type_info, "System.Xml.Linq", "XContainer", "<Nodes>d__18");
        }
        inline app::XContainer_Nodes_d_18* create() {
            return il2cpp::create_object<app::XContainer_Nodes_d_18>(get_class());
        }
    } // namespace XContainer_Nodes_d_18
} // namespace app::classes::types
