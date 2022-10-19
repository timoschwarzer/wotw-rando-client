#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpellInventory_Binding__Enum__Array {
        namespace {
            inline app::SpellInventory_Binding__Enum__Array__Class* type_info_ref = nullptr;
        }
        inline app::SpellInventory_Binding__Enum__Array__Class** type_info = &type_info_ref;
        inline app::SpellInventory_Binding__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::SpellInventory_Binding__Enum__Array__Class>(type_info, "", "SpellInventory+Binding[]");
        }
        inline app::SpellInventory_Binding__Enum__Array* create() {
            return il2cpp::create_object<app::SpellInventory_Binding__Enum__Array>(get_class());
        }
    } // namespace SpellInventory_Binding__Enum__Array
} // namespace app::classes::types
