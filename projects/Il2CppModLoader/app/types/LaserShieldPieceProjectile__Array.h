#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LaserShieldPieceProjectile__Array {
        namespace {
            inline app::LaserShieldPieceProjectile__Array__Class* type_info_ref = nullptr;
        }
        inline app::LaserShieldPieceProjectile__Array__Class** type_info = &type_info_ref;
        inline app::LaserShieldPieceProjectile__Array__Class* get_class() {
            return il2cpp::get_class<app::LaserShieldPieceProjectile__Array__Class>(type_info, "", "LaserShieldPieceProjectile[]");
        }
        inline app::LaserShieldPieceProjectile__Array* create() {
            return il2cpp::create_object<app::LaserShieldPieceProjectile__Array>(get_class());
        }
    } // namespace LaserShieldPieceProjectile__Array
} // namespace app::classes::types
