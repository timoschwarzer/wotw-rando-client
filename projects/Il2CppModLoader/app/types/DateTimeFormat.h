#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DateTimeFormat {
        inline app::DateTimeFormat__Class** type_info = (app::DateTimeFormat__Class**)(modloader::win::memory::resolve_rva(0x047110A8));
        inline app::DateTimeFormat__Class* get_class() {
            return il2cpp::get_class<app::DateTimeFormat__Class>(type_info, "System", "DateTimeFormat");
        }
        inline app::DateTimeFormat* create() {
            return il2cpp::create_object<app::DateTimeFormat>(get_class());
        }
    } // namespace DateTimeFormat
} // namespace app::classes::types
