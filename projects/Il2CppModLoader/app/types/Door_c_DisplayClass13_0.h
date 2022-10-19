#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Door_c_DisplayClass13_0 {
        inline app::Door_c_DisplayClass13_0__Class** type_info = (app::Door_c_DisplayClass13_0__Class**)(modloader::win::memory::resolve_rva(0x04734A80));
        inline app::Door_c_DisplayClass13_0__Class* get_class() {
            return il2cpp::get_nested_class<app::Door_c_DisplayClass13_0__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "Door", "<>c__DisplayClass13_0");
        }
        inline app::Door_c_DisplayClass13_0* create() {
            return il2cpp::create_object<app::Door_c_DisplayClass13_0>(get_class());
        }
    } // namespace Door_c_DisplayClass13_0
} // namespace app::classes::types
