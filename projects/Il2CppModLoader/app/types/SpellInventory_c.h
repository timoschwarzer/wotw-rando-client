#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpellInventory_c {
        inline app::SpellInventory_c__Class** type_info = (app::SpellInventory_c__Class**)(modloader::win::memory::resolve_rva(0x04705480));
        inline app::SpellInventory_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpellInventory_c__Class>(type_info, "", "SpellInventory", "<>c");
        }
        inline app::SpellInventory_c* create() {
            return il2cpp::create_object<app::SpellInventory_c>(get_class());
        }
    } // namespace SpellInventory_c
} // namespace app::classes::types
