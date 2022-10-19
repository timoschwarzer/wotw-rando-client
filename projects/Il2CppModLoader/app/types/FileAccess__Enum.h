#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FileAccess__Enum {
        inline app::FileAccess__Enum__Class** type_info = (app::FileAccess__Enum__Class**)(modloader::win::memory::resolve_rva(0x04793B70));
        inline app::FileAccess__Enum__Class* get_class() {
            return il2cpp::get_class<app::FileAccess__Enum__Class>(type_info, "System.IO", "FileAccess");
        }
        inline app::FileAccess__Enum* create() {
            return il2cpp::create_object<app::FileAccess__Enum>(get_class());
        }
    } // namespace FileAccess__Enum
} // namespace app::classes::types
