#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Console {
        inline app::Console__Class** type_info = (app::Console__Class**)(modloader::win::memory::resolve_rva(0x04747638));
        inline app::Console__Class* get_class() {
            return il2cpp::get_class<app::Console__Class>(type_info, "System", "Console");
        }
        inline app::Console* create() {
            return il2cpp::create_object<app::Console>(get_class());
        }
    } // namespace Console
} // namespace app::classes::types
