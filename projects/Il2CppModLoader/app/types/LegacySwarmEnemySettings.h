#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacySwarmEnemySettings {
        namespace {
            inline app::LegacySwarmEnemySettings__Class* type_info_ref = nullptr;
        }
        inline app::LegacySwarmEnemySettings__Class** type_info = &type_info_ref;
        inline app::LegacySwarmEnemySettings__Class* get_class() {
            return il2cpp::get_class<app::LegacySwarmEnemySettings__Class>(type_info, "", "LegacySwarmEnemySettings");
        }
        inline app::LegacySwarmEnemySettings* create() {
            return il2cpp::create_object<app::LegacySwarmEnemySettings>(get_class());
        }
    } // namespace LegacySwarmEnemySettings
} // namespace app::classes::types
