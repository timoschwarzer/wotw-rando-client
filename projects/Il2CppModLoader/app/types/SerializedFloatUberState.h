#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SerializedFloatUberState {
        inline app::SerializedFloatUberState__Class** type_info = (app::SerializedFloatUberState__Class**)(modloader::win::memory::resolve_rva(0x047249F0));
        inline app::SerializedFloatUberState__Class* get_class() {
            return il2cpp::get_class<app::SerializedFloatUberState__Class>(type_info, "Moon", "SerializedFloatUberState");
        }
        inline app::SerializedFloatUberState* create() {
            return il2cpp::create_object<app::SerializedFloatUberState>(get_class());
        }
    } // namespace SerializedFloatUberState
} // namespace app::classes::types
