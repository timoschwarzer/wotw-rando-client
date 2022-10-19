#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AchievementsUISwitchGrid {
        namespace {
            inline app::AchievementsUISwitchGrid__Class* type_info_ref = nullptr;
        }
        inline app::AchievementsUISwitchGrid__Class** type_info = &type_info_ref;
        inline app::AchievementsUISwitchGrid__Class* get_class() {
            return il2cpp::get_class<app::AchievementsUISwitchGrid__Class>(type_info, "", "AchievementsUISwitchGrid");
        }
        inline app::AchievementsUISwitchGrid* create() {
            return il2cpp::create_object<app::AchievementsUISwitchGrid>(get_class());
        }
    } // namespace AchievementsUISwitchGrid
} // namespace app::classes::types
