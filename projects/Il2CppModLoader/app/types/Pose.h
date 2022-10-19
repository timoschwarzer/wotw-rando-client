#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Pose {
        inline app::Pose__Class** type_info = (app::Pose__Class**)(modloader::win::memory::resolve_rva(0x0475BCA8));
        inline app::Pose__Class* get_class() {
            return il2cpp::get_class<app::Pose__Class>(type_info, "UnityEngine", "Pose");
        }
        inline app::Pose* create() {
            return il2cpp::create_object<app::Pose>(get_class());
        }
        inline app::Pose__Boxed* box(app::Pose value) {
            return il2cpp::box_value<app::Pose__Boxed>(get_class(), value);
        }
    } // namespace Pose
} // namespace app::classes::types
