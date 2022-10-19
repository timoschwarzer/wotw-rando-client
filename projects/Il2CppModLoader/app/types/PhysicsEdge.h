#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PhysicsEdge {
        inline app::PhysicsEdge__Class** type_info = (app::PhysicsEdge__Class**)(modloader::win::memory::resolve_rva(0x0473EDC0));
        inline app::PhysicsEdge__Class* get_class() {
            return il2cpp::get_class<app::PhysicsEdge__Class>(type_info, "", "PhysicsEdge");
        }
        inline app::PhysicsEdge* create() {
            return il2cpp::create_object<app::PhysicsEdge>(get_class());
        }
        inline app::PhysicsEdge__Array* create_array(int size) {
            return il2cpp::array_new<app::PhysicsEdge__Array>(get_class(), size);
        }
        inline app::PhysicsEdge__Array* create_array(const std::vector<app::PhysicsEdge*>& items) {
            return il2cpp::array_new<app::PhysicsEdge__Array>(get_class(), items);
        }
    } // namespace PhysicsEdge
} // namespace app::classes::types
