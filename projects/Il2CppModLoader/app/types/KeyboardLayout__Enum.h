#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KeyboardLayout__Enum {
        inline app::KeyboardLayout__Enum__Class** type_info = (app::KeyboardLayout__Enum__Class**)(modloader::win::memory::resolve_rva(0x0474FC08));
        inline app::KeyboardLayout__Enum__Class* get_class() {
            return il2cpp::get_class<app::KeyboardLayout__Enum__Class>(type_info, "", "KeyboardLayout");
        }
        inline app::KeyboardLayout__Enum* create() {
            return il2cpp::create_object<app::KeyboardLayout__Enum>(get_class());
        }
    } // namespace KeyboardLayout__Enum
} // namespace app::classes::types
