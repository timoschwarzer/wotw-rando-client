#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PhysicMaterial {
        inline app::PhysicMaterial__Class** type_info = (app::PhysicMaterial__Class**)(modloader::win::memory::resolve_rva(0x04734FB0));
        inline app::PhysicMaterial__Class* get_class() {
            return il2cpp::get_class<app::PhysicMaterial__Class>(type_info, "UnityEngine", "PhysicMaterial");
        }
        inline app::PhysicMaterial* create() {
            return il2cpp::create_object<app::PhysicMaterial>(get_class());
        }
        inline app::PhysicMaterial__Array* create_array(int size) {
            return il2cpp::array_new<app::PhysicMaterial__Array>(get_class(), size);
        }
        inline app::PhysicMaterial__Array* create_array(const std::vector<app::PhysicMaterial*>& items) {
            return il2cpp::array_new<app::PhysicMaterial__Array>(get_class(), items);
        }
    } // namespace PhysicMaterial
} // namespace app::classes::types
