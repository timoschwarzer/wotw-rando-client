#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MeshRenderer {
        inline app::MeshRenderer__Class** type_info = (app::MeshRenderer__Class**)(modloader::win::memory::resolve_rva(0x0478D3A8));
        inline app::MeshRenderer__Class* get_class() {
            return il2cpp::get_class<app::MeshRenderer__Class>(type_info, "UnityEngine", "MeshRenderer");
        }
        inline app::MeshRenderer* create() {
            return il2cpp::create_object<app::MeshRenderer>(get_class());
        }
        inline app::MeshRenderer__Array* create_array(int size) {
            return il2cpp::array_new<app::MeshRenderer__Array>(get_class(), size);
        }
        inline app::MeshRenderer__Array* create_array(const std::vector<app::MeshRenderer*>& items) {
            return il2cpp::array_new<app::MeshRenderer__Array>(get_class(), items);
        }
    } // namespace MeshRenderer
} // namespace app::classes::types
