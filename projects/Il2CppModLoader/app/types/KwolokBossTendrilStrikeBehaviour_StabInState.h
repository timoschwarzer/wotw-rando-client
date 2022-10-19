#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokBossTendrilStrikeBehaviour_StabInState {
        inline app::KwolokBossTendrilStrikeBehaviour_StabInState__Class** type_info = (app::KwolokBossTendrilStrikeBehaviour_StabInState__Class**)(modloader::win::memory::resolve_rva(0x04712DC8));
        inline app::KwolokBossTendrilStrikeBehaviour_StabInState__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossTendrilStrikeBehaviour_StabInState__Class>(type_info, "", "KwolokBossTendrilStrikeBehaviour", "StabInState");
        }
        inline app::KwolokBossTendrilStrikeBehaviour_StabInState* create() {
            return il2cpp::create_object<app::KwolokBossTendrilStrikeBehaviour_StabInState>(get_class());
        }
    } // namespace KwolokBossTendrilStrikeBehaviour_StabInState
} // namespace app::classes::types
