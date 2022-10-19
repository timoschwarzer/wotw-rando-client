#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RockyEnemyShootingState {
        inline app::RockyEnemyShootingState__Class** type_info = (app::RockyEnemyShootingState__Class**)(modloader::win::memory::resolve_rva(0x0472E0A0));
        inline app::RockyEnemyShootingState__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemyShootingState__Class>(type_info, "", "RockyEnemyShootingState");
        }
        inline app::RockyEnemyShootingState* create() {
            return il2cpp::create_object<app::RockyEnemyShootingState>(get_class());
        }
    } // namespace RockyEnemyShootingState
} // namespace app::classes::types
