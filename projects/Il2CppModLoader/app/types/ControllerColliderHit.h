#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ControllerColliderHit {
        namespace {
            inline app::ControllerColliderHit__Class* type_info_ref = nullptr;
        }
        inline app::ControllerColliderHit__Class** type_info = &type_info_ref;
        inline app::ControllerColliderHit__Class* get_class() {
            return il2cpp::get_class<app::ControllerColliderHit__Class>(type_info, "UnityEngine", "ControllerColliderHit");
        }
        inline app::ControllerColliderHit* create() {
            return il2cpp::create_object<app::ControllerColliderHit>(get_class());
        }
    } // namespace ControllerColliderHit
} // namespace app::classes::types
