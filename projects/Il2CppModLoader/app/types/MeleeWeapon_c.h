#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MeleeWeapon_c {
        inline app::MeleeWeapon_c__Class** type_info = (app::MeleeWeapon_c__Class**)(modloader::win::memory::resolve_rva(0x04790C90));
        inline app::MeleeWeapon_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MeleeWeapon_c__Class>(type_info, "", "MeleeWeapon", "<>c");
        }
        inline app::MeleeWeapon_c* create() {
            return il2cpp::create_object<app::MeleeWeapon_c>(get_class());
        }
    } // namespace MeleeWeapon_c
} // namespace app::classes::types
