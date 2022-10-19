#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LeaderboardsB_c_DisplayClass72_0 {
        inline app::LeaderboardsB_c_DisplayClass72_0__Class** type_info = (app::LeaderboardsB_c_DisplayClass72_0__Class**)(modloader::win::memory::resolve_rva(0x0470B650));
        inline app::LeaderboardsB_c_DisplayClass72_0__Class* get_class() {
            return il2cpp::get_nested_class<app::LeaderboardsB_c_DisplayClass72_0__Class>(type_info, "", "LeaderboardsB", "<>c__DisplayClass72_0");
        }
        inline app::LeaderboardsB_c_DisplayClass72_0* create() {
            return il2cpp::create_object<app::LeaderboardsB_c_DisplayClass72_0>(get_class());
        }
    } // namespace LeaderboardsB_c_DisplayClass72_0
} // namespace app::classes::types
