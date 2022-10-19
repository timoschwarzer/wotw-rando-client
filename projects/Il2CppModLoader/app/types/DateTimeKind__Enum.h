#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DateTimeKind__Enum {
        inline app::DateTimeKind__Enum__Class** type_info = (app::DateTimeKind__Enum__Class**)(modloader::win::memory::resolve_rva(0x0473E9A8));
        inline app::DateTimeKind__Enum__Class* get_class() {
            return il2cpp::get_class<app::DateTimeKind__Enum__Class>(type_info, "System", "DateTimeKind");
        }
        inline app::DateTimeKind__Enum* create() {
            return il2cpp::create_object<app::DateTimeKind__Enum>(get_class());
        }
    } // namespace DateTimeKind__Enum
} // namespace app::classes::types
