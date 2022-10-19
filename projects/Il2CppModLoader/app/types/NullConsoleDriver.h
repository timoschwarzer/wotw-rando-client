#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NullConsoleDriver {
        inline app::NullConsoleDriver__Class** type_info = (app::NullConsoleDriver__Class**)(modloader::win::memory::resolve_rva(0x0475CB98));
        inline app::NullConsoleDriver__Class* get_class() {
            return il2cpp::get_class<app::NullConsoleDriver__Class>(type_info, "System", "NullConsoleDriver");
        }
        inline app::NullConsoleDriver* create() {
            return il2cpp::create_object<app::NullConsoleDriver>(get_class());
        }
    } // namespace NullConsoleDriver
} // namespace app::classes::types
