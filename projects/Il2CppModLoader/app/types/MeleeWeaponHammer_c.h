#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MeleeWeaponHammer_c {
        inline app::MeleeWeaponHammer_c__Class** type_info = (app::MeleeWeaponHammer_c__Class**)(modloader::win::memory::resolve_rva(0x047789B8));
        inline app::MeleeWeaponHammer_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MeleeWeaponHammer_c__Class>(type_info, "", "MeleeWeaponHammer", "<>c");
        }
        inline app::MeleeWeaponHammer_c* create() {
            return il2cpp::create_object<app::MeleeWeaponHammer_c>(get_class());
        }
    } // namespace MeleeWeaponHammer_c
} // namespace app::classes::types
