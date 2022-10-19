#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IWeapon {
        namespace {
            inline app::IWeapon__Class* type_info_ref = nullptr;
        }
        inline app::IWeapon__Class** type_info = &type_info_ref;
        inline app::IWeapon__Class* get_class() {
            return il2cpp::get_class<app::IWeapon__Class>(type_info, "Moon", "IWeapon");
        }
    } // namespace IWeapon
} // namespace app::classes::types
