#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinTurretSpell_HandleSpawningSentries_d_40 {
        inline app::SeinTurretSpell_HandleSpawningSentries_d_40__Class** type_info = (app::SeinTurretSpell_HandleSpawningSentries_d_40__Class**)(modloader::win::memory::resolve_rva(0x047681A0));
        inline app::SeinTurretSpell_HandleSpawningSentries_d_40__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinTurretSpell_HandleSpawningSentries_d_40__Class>(type_info, "", "SeinTurretSpell", "<HandleSpawningSentries>d__40");
        }
        inline app::SeinTurretSpell_HandleSpawningSentries_d_40* create() {
            return il2cpp::create_object<app::SeinTurretSpell_HandleSpawningSentries_d_40>(get_class());
        }
    } // namespace SeinTurretSpell_HandleSpawningSentries_d_40
} // namespace app::classes::types
