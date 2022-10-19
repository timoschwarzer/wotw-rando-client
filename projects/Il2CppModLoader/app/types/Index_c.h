#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Index_c {
        inline app::Index_c__Class** type_info = (app::Index_c__Class**)(modloader::win::memory::resolve_rva(0x04725408));
        inline app::Index_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Index_c__Class>(type_info, "System.Data", "Index", "<>c");
        }
        inline app::Index_c* create() {
            return il2cpp::create_object<app::Index_c>(get_class());
        }
    } // namespace Index_c
} // namespace app::classes::types
