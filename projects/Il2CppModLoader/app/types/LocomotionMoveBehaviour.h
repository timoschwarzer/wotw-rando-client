#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LocomotionMoveBehaviour {
        namespace {
            inline app::LocomotionMoveBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::LocomotionMoveBehaviour__Class** type_info = &type_info_ref;
        inline app::LocomotionMoveBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LocomotionMoveBehaviour__Class>(type_info, "", "LocomotionMoveBehaviour");
        }
        inline app::LocomotionMoveBehaviour* create() {
            return il2cpp::create_object<app::LocomotionMoveBehaviour>(get_class());
        }
    } // namespace LocomotionMoveBehaviour
} // namespace app::classes::types
