#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PointerUIGUI_WatchResize_d_5 {
        inline app::PointerUIGUI_WatchResize_d_5__Class** type_info = (app::PointerUIGUI_WatchResize_d_5__Class**)(modloader::win::memory::resolve_rva(0x047567C0));
        inline app::PointerUIGUI_WatchResize_d_5__Class* get_class() {
            return il2cpp::get_nested_class<app::PointerUIGUI_WatchResize_d_5__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "PointerUIGUI", "<WatchResize>d__5");
        }
        inline app::PointerUIGUI_WatchResize_d_5* create() {
            return il2cpp::create_object<app::PointerUIGUI_WatchResize_d_5>(get_class());
        }
    } // namespace PointerUIGUI_WatchResize_d_5
} // namespace app::classes::types
