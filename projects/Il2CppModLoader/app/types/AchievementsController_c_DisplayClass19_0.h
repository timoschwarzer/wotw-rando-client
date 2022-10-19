#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AchievementsController_c_DisplayClass19_0 {
        inline app::AchievementsController_c_DisplayClass19_0__Class** type_info = (app::AchievementsController_c_DisplayClass19_0__Class**)(modloader::win::memory::resolve_rva(0x047575E8));
        inline app::AchievementsController_c_DisplayClass19_0__Class* get_class() {
            return il2cpp::get_nested_class<app::AchievementsController_c_DisplayClass19_0__Class>(type_info, "", "AchievementsController", "<>c__DisplayClass19_0");
        }
        inline app::AchievementsController_c_DisplayClass19_0* create() {
            return il2cpp::create_object<app::AchievementsController_c_DisplayClass19_0>(get_class());
        }
    } // namespace AchievementsController_c_DisplayClass19_0
} // namespace app::classes::types
