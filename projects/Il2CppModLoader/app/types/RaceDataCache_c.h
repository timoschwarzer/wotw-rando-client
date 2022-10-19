#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceDataCache_c {
        inline app::RaceDataCache_c__Class** type_info = (app::RaceDataCache_c__Class**)(modloader::win::memory::resolve_rva(0x04774320));
        inline app::RaceDataCache_c__Class* get_class() {
            return il2cpp::get_nested_class<app::RaceDataCache_c__Class>(type_info, "SystemIntegration.Races", "RaceDataCache", "<>c");
        }
        inline app::RaceDataCache_c* create() {
            return il2cpp::create_object<app::RaceDataCache_c>(get_class());
        }
    } // namespace RaceDataCache_c
} // namespace app::classes::types
