#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Rule__Enum {
        inline app::Rule__Enum__Class** type_info = (app::Rule__Enum__Class**)(modloader::win::memory::resolve_rva(0x0474EB00));
        inline app::Rule__Enum__Class* get_class() {
            return il2cpp::get_class<app::Rule__Enum__Class>(type_info, "System.Data", "Rule");
        }
        inline app::Rule__Enum* create() {
            return il2cpp::create_object<app::Rule__Enum>(get_class());
        }
    } // namespace Rule__Enum
} // namespace app::classes::types
