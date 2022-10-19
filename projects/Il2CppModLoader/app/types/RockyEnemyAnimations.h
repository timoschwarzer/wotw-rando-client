#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RockyEnemyAnimations {
        namespace {
            inline app::RockyEnemyAnimations__Class* type_info_ref = nullptr;
        }
        inline app::RockyEnemyAnimations__Class** type_info = &type_info_ref;
        inline app::RockyEnemyAnimations__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemyAnimations__Class>(type_info, "", "RockyEnemyAnimations");
        }
        inline app::RockyEnemyAnimations* create() {
            return il2cpp::create_object<app::RockyEnemyAnimations>(get_class());
        }
    } // namespace RockyEnemyAnimations
} // namespace app::classes::types
