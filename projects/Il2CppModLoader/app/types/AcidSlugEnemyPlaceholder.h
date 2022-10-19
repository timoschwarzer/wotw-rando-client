#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AcidSlugEnemyPlaceholder {
        namespace {
            inline app::AcidSlugEnemyPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::AcidSlugEnemyPlaceholder__Class** type_info = &type_info_ref;
        inline app::AcidSlugEnemyPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::AcidSlugEnemyPlaceholder__Class>(type_info, "", "AcidSlugEnemyPlaceholder");
        }
        inline app::AcidSlugEnemyPlaceholder* create() {
            return il2cpp::create_object<app::AcidSlugEnemyPlaceholder>(get_class());
        }
    } // namespace AcidSlugEnemyPlaceholder
} // namespace app::classes::types
