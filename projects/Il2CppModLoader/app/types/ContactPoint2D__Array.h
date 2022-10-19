#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ContactPoint2D__Array {
        inline app::ContactPoint2D__Array__Class** type_info = (app::ContactPoint2D__Array__Class**)(modloader::win::memory::resolve_rva(0x0470D4C8));
        inline app::ContactPoint2D__Array__Class* get_class() {
            return il2cpp::get_class<app::ContactPoint2D__Array__Class>(type_info, "UnityEngine", "ContactPoint2D[]");
        }
        inline app::ContactPoint2D__Array* create() {
            return il2cpp::create_object<app::ContactPoint2D__Array>(get_class());
        }
    } // namespace ContactPoint2D__Array
} // namespace app::classes::types
