#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceSystem_StartRaceFromMainMenuCoroutine_d_147 {
        inline app::RaceSystem_StartRaceFromMainMenuCoroutine_d_147__Class** type_info = (app::RaceSystem_StartRaceFromMainMenuCoroutine_d_147__Class**)(modloader::win::memory::resolve_rva(0x047896B0));
        inline app::RaceSystem_StartRaceFromMainMenuCoroutine_d_147__Class* get_class() {
            return il2cpp::get_nested_class<app::RaceSystem_StartRaceFromMainMenuCoroutine_d_147__Class>(type_info, "", "RaceSystem", "<StartRaceFromMainMenuCoroutine>d__147");
        }
        inline app::RaceSystem_StartRaceFromMainMenuCoroutine_d_147* create() {
            return il2cpp::create_object<app::RaceSystem_StartRaceFromMainMenuCoroutine_d_147>(get_class());
        }
    } // namespace RaceSystem_StartRaceFromMainMenuCoroutine_d_147
} // namespace app::classes::types
