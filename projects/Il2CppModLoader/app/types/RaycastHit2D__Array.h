#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaycastHit2D__Array {
        inline app::RaycastHit2D__Array__Class** type_info = (app::RaycastHit2D__Array__Class**)(modloader::win::memory::resolve_rva(0x047268F0));
        inline app::RaycastHit2D__Array__Class* get_class() {
            return il2cpp::get_class<app::RaycastHit2D__Array__Class>(type_info, "UnityEngine", "RaycastHit2D[]");
        }
        inline app::RaycastHit2D__Array* create() {
            return il2cpp::create_object<app::RaycastHit2D__Array>(get_class());
        }
    } // namespace RaycastHit2D__Array
} // namespace app::classes::types
