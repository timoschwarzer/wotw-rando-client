#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PromiseTimer_c_DisplayClass3_0 {
        inline app::PromiseTimer_c_DisplayClass3_0__Class** type_info = (app::PromiseTimer_c_DisplayClass3_0__Class**)(modloader::win::memory::resolve_rva(0x0470B5F8));
        inline app::PromiseTimer_c_DisplayClass3_0__Class* get_class() {
            return il2cpp::get_nested_class<app::PromiseTimer_c_DisplayClass3_0__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "PromiseTimer", "<>c__DisplayClass3_0");
        }
        inline app::PromiseTimer_c_DisplayClass3_0* create() {
            return il2cpp::create_object<app::PromiseTimer_c_DisplayClass3_0>(get_class());
        }
    } // namespace PromiseTimer_c_DisplayClass3_0
} // namespace app::classes::types
