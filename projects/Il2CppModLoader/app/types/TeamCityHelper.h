#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TeamCityHelper {
        inline app::TeamCityHelper__Class** type_info = (app::TeamCityHelper__Class**)(modloader::win::memory::resolve_rva(0x0471ACD8));
        inline app::TeamCityHelper__Class* get_class() {
            return il2cpp::get_class<app::TeamCityHelper__Class>(type_info, "Moon.ContinuousIntegration", "TeamCityHelper");
        }
        inline app::TeamCityHelper* create() {
            return il2cpp::create_object<app::TeamCityHelper>(get_class());
        }
    } // namespace TeamCityHelper
} // namespace app::classes::types
