#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokBossTendrilStrikeBehaviour_StabLeftState {
        inline app::KwolokBossTendrilStrikeBehaviour_StabLeftState__Class** type_info = (app::KwolokBossTendrilStrikeBehaviour_StabLeftState__Class**)(modloader::win::memory::resolve_rva(0x04713470));
        inline app::KwolokBossTendrilStrikeBehaviour_StabLeftState__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossTendrilStrikeBehaviour_StabLeftState__Class>(type_info, "", "KwolokBossTendrilStrikeBehaviour", "StabLeftState");
        }
        inline app::KwolokBossTendrilStrikeBehaviour_StabLeftState* create() {
            return il2cpp::create_object<app::KwolokBossTendrilStrikeBehaviour_StabLeftState>(get_class());
        }
    } // namespace KwolokBossTendrilStrikeBehaviour_StabLeftState
} // namespace app::classes::types
