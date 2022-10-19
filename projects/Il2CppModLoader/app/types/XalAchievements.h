#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XalAchievements {
        inline app::XalAchievements__Class** type_info = (app::XalAchievements__Class**)(modloader::win::memory::resolve_rva(0x04759EF8));
        inline app::XalAchievements__Class* get_class() {
            return il2cpp::get_class<app::XalAchievements__Class>(type_info, "SystemIntegration.Synchronizer.Achievements", "XalAchievements");
        }
        inline app::XalAchievements* create() {
            return il2cpp::create_object<app::XalAchievements>(get_class());
        }
    } // namespace XalAchievements
} // namespace app::classes::types
