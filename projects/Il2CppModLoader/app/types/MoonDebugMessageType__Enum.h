#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonDebugMessageType__Enum {
        inline app::MoonDebugMessageType__Enum__Class** type_info = (app::MoonDebugMessageType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04741C70));
        inline app::MoonDebugMessageType__Enum__Class* get_class() {
            return il2cpp::get_class<app::MoonDebugMessageType__Enum__Class>(type_info, "Moon", "MoonDebugMessageType");
        }
        inline app::MoonDebugMessageType__Enum* create() {
            return il2cpp::create_object<app::MoonDebugMessageType__Enum>(get_class());
        }
    } // namespace MoonDebugMessageType__Enum
} // namespace app::classes::types
