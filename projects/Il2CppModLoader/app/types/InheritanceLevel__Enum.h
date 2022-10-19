#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InheritanceLevel__Enum {
        inline app::InheritanceLevel__Enum__Class** type_info = (app::InheritanceLevel__Enum__Class**)(modloader::win::memory::resolve_rva(0x0474E0A8));
        inline app::InheritanceLevel__Enum__Class* get_class() {
            return il2cpp::get_class<app::InheritanceLevel__Enum__Class>(type_info, "System.ComponentModel", "InheritanceLevel");
        }
        inline app::InheritanceLevel__Enum* create() {
            return il2cpp::create_object<app::InheritanceLevel__Enum>(get_class());
        }
    } // namespace InheritanceLevel__Enum
} // namespace app::classes::types
