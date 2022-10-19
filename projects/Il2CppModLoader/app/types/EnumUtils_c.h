#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnumUtils_c {
        inline app::EnumUtils_c__Class** type_info = (app::EnumUtils_c__Class**)(modloader::win::memory::resolve_rva(0x0471BCC0));
        inline app::EnumUtils_c__Class* get_class() {
            return il2cpp::get_nested_class<app::EnumUtils_c__Class>(type_info, "Newtonsoft.Json.Utilities", "EnumUtils", "<>c");
        }
        inline app::EnumUtils_c* create() {
            return il2cpp::create_object<app::EnumUtils_c>(get_class());
        }
    } // namespace EnumUtils_c
} // namespace app::classes::types
