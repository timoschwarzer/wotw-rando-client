#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IFloatUberState {
        inline app::IFloatUberState__Class** type_info = (app::IFloatUberState__Class**)(modloader::win::memory::resolve_rva(0x0470EB68));
        inline app::IFloatUberState__Class* get_class() {
            return il2cpp::get_class<app::IFloatUberState__Class>(type_info, "Moon", "IFloatUberState");
        }
    } // namespace IFloatUberState
} // namespace app::classes::types
