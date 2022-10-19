#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MenuScreenManager_Screens__Enum__Array {
        inline app::MenuScreenManager_Screens__Enum__Array__Class** type_info = (app::MenuScreenManager_Screens__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04778270));
        inline app::MenuScreenManager_Screens__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::MenuScreenManager_Screens__Enum__Array__Class>(type_info, "", "MenuScreenManager+Screens[]");
        }
        inline app::MenuScreenManager_Screens__Enum__Array* create() {
            return il2cpp::create_object<app::MenuScreenManager_Screens__Enum__Array>(get_class());
        }
    } // namespace MenuScreenManager_Screens__Enum__Array
} // namespace app::classes::types
