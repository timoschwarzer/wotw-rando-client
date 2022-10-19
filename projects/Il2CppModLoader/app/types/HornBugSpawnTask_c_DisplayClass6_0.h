#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HornBugSpawnTask_c_DisplayClass6_0 {
        inline app::HornBugSpawnTask_c_DisplayClass6_0__Class** type_info = (app::HornBugSpawnTask_c_DisplayClass6_0__Class**)(modloader::win::memory::resolve_rva(0x0471F708));
        inline app::HornBugSpawnTask_c_DisplayClass6_0__Class* get_class() {
            return il2cpp::get_nested_class<app::HornBugSpawnTask_c_DisplayClass6_0__Class>(type_info, "", "HornBugSpawnTask", "<>c__DisplayClass6_0");
        }
        inline app::HornBugSpawnTask_c_DisplayClass6_0* create() {
            return il2cpp::create_object<app::HornBugSpawnTask_c_DisplayClass6_0>(get_class());
        }
    } // namespace HornBugSpawnTask_c_DisplayClass6_0
} // namespace app::classes::types
