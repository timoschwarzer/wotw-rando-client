#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AdvancedDebugMenuPage_c_DisplayClass15_0 {
        inline app::AdvancedDebugMenuPage_c_DisplayClass15_0__Class** type_info = (app::AdvancedDebugMenuPage_c_DisplayClass15_0__Class**)(modloader::win::memory::resolve_rva(0x0475FD48));
        inline app::AdvancedDebugMenuPage_c_DisplayClass15_0__Class* get_class() {
            return il2cpp::get_nested_class<app::AdvancedDebugMenuPage_c_DisplayClass15_0__Class>(type_info, "", "AdvancedDebugMenuPage", "<>c__DisplayClass15_0");
        }
        inline app::AdvancedDebugMenuPage_c_DisplayClass15_0* create() {
            return il2cpp::create_object<app::AdvancedDebugMenuPage_c_DisplayClass15_0>(get_class());
        }
    } // namespace AdvancedDebugMenuPage_c_DisplayClass15_0
} // namespace app::classes::types
