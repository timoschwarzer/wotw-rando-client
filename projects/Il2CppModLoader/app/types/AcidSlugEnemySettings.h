#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AcidSlugEnemySettings {
        namespace {
            inline app::AcidSlugEnemySettings__Class* type_info_ref = nullptr;
        }
        inline app::AcidSlugEnemySettings__Class** type_info = &type_info_ref;
        inline app::AcidSlugEnemySettings__Class* get_class() {
            return il2cpp::get_class<app::AcidSlugEnemySettings__Class>(type_info, "", "AcidSlugEnemySettings");
        }
        inline app::AcidSlugEnemySettings* create() {
            return il2cpp::create_object<app::AcidSlugEnemySettings>(get_class());
        }
    } // namespace AcidSlugEnemySettings
} // namespace app::classes::types
