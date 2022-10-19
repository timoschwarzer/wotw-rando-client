#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Console_WindowsConsole {
        inline app::Console_WindowsConsole__Class** type_info = (app::Console_WindowsConsole__Class**)(modloader::win::memory::resolve_rva(0x04791E10));
        inline app::Console_WindowsConsole__Class* get_class() {
            return il2cpp::get_nested_class<app::Console_WindowsConsole__Class>(type_info, "System", "Console", "WindowsConsole");
        }
        inline app::Console_WindowsConsole* create() {
            return il2cpp::create_object<app::Console_WindowsConsole>(get_class());
        }
    } // namespace Console_WindowsConsole
} // namespace app::classes::types
