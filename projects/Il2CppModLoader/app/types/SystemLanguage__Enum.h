#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SystemLanguage__Enum {
        inline app::SystemLanguage__Enum__Class** type_info = (app::SystemLanguage__Enum__Class**)(modloader::win::memory::resolve_rva(0x0477CE88));
        inline app::SystemLanguage__Enum__Class* get_class() {
            return il2cpp::get_class<app::SystemLanguage__Enum__Class>(type_info, "UnityEngine", "SystemLanguage");
        }
        inline app::SystemLanguage__Enum* create() {
            return il2cpp::create_object<app::SystemLanguage__Enum>(get_class());
        }
    } // namespace SystemLanguage__Enum
} // namespace app::classes::types
