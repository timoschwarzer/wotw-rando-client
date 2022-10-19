#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Browser_c {
        inline app::Browser_c__Class** type_info = (app::Browser_c__Class**)(modloader::win::memory::resolve_rva(0x047116C8));
        inline app::Browser_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Browser_c__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "Browser", "<>c");
        }
        inline app::Browser_c* create() {
            return il2cpp::create_object<app::Browser_c>(get_class());
        }
    } // namespace Browser_c
} // namespace app::classes::types
