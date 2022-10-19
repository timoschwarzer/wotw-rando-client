#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShootMultiProjectileRadialBehaviour {
        namespace {
            inline app::ShootMultiProjectileRadialBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::ShootMultiProjectileRadialBehaviour__Class** type_info = &type_info_ref;
        inline app::ShootMultiProjectileRadialBehaviour__Class* get_class() {
            return il2cpp::get_class<app::ShootMultiProjectileRadialBehaviour__Class>(type_info, "", "ShootMultiProjectileRadialBehaviour");
        }
        inline app::ShootMultiProjectileRadialBehaviour* create() {
            return il2cpp::create_object<app::ShootMultiProjectileRadialBehaviour>(get_class());
        }
    } // namespace ShootMultiProjectileRadialBehaviour
} // namespace app::classes::types
