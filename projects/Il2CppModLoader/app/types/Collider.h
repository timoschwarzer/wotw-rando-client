#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Collider {
        inline app::Collider__Class** type_info = (app::Collider__Class**)(modloader::win::memory::resolve_rva(0x0470DB00));
        inline app::Collider__Class* get_class() {
            return il2cpp::get_class<app::Collider__Class>(type_info, "UnityEngine", "Collider");
        }
        inline app::Collider* create() {
            return il2cpp::create_object<app::Collider>(get_class());
        }
        inline app::Collider__Array* create_array(int size) {
            return il2cpp::array_new<app::Collider__Array>(get_class(), size);
        }
        inline app::Collider__Array* create_array(const std::vector<app::Collider*>& items) {
            return il2cpp::array_new<app::Collider__Array>(get_class(), items);
        }
    } // namespace Collider
} // namespace app::classes::types
