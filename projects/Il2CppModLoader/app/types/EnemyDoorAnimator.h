#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnemyDoorAnimator {
        inline app::EnemyDoorAnimator__Class** type_info = (app::EnemyDoorAnimator__Class**)(modloader::win::memory::resolve_rva(0x0472AB60));
        inline app::EnemyDoorAnimator__Class* get_class() {
            return il2cpp::get_class<app::EnemyDoorAnimator__Class>(type_info, "", "EnemyDoorAnimator");
        }
        inline app::EnemyDoorAnimator* create() {
            return il2cpp::create_object<app::EnemyDoorAnimator>(get_class());
        }
    } // namespace EnemyDoorAnimator
} // namespace app::classes::types
