#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ILogger {
        inline app::ILogger__Class** type_info = (app::ILogger__Class**)(modloader::win::memory::resolve_rva(0x04714318));
        inline app::ILogger__Class* get_class() {
            return il2cpp::get_class<app::ILogger__Class>(type_info, "UnityEngine", "ILogger");
        }
    } // namespace ILogger
} // namespace app::classes::types
