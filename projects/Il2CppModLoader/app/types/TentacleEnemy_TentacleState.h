#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TentacleEnemy_TentacleState {
        inline app::TentacleEnemy_TentacleState__Class** type_info = (app::TentacleEnemy_TentacleState__Class**)(modloader::win::memory::resolve_rva(0x04738C30));
        inline app::TentacleEnemy_TentacleState__Class* get_class() {
            return il2cpp::get_nested_class<app::TentacleEnemy_TentacleState__Class>(type_info, "", "TentacleEnemy", "TentacleState");
        }
        inline app::TentacleEnemy_TentacleState* create() {
            return il2cpp::create_object<app::TentacleEnemy_TentacleState>(get_class());
        }
    } // namespace TentacleEnemy_TentacleState
} // namespace app::classes::types
