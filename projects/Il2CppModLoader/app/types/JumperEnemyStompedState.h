#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JumperEnemyStompedState {
        inline app::JumperEnemyStompedState__Class** type_info = (app::JumperEnemyStompedState__Class**)(modloader::win::memory::resolve_rva(0x0471EEE8));
        inline app::JumperEnemyStompedState__Class* get_class() {
            return il2cpp::get_class<app::JumperEnemyStompedState__Class>(type_info, "", "JumperEnemyStompedState");
        }
        inline app::JumperEnemyStompedState* create() {
            return il2cpp::create_object<app::JumperEnemyStompedState>(get_class());
        }
    } // namespace JumperEnemyStompedState
} // namespace app::classes::types
