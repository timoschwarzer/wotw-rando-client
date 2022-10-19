#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShootProjectileBehaviour {
        namespace {
            inline app::ShootProjectileBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::ShootProjectileBehaviour__Class** type_info = &type_info_ref;
        inline app::ShootProjectileBehaviour__Class* get_class() {
            return il2cpp::get_class<app::ShootProjectileBehaviour__Class>(type_info, "", "ShootProjectileBehaviour");
        }
        inline app::ShootProjectileBehaviour* create() {
            return il2cpp::create_object<app::ShootProjectileBehaviour>(get_class());
        }
    } // namespace ShootProjectileBehaviour
} // namespace app::classes::types
