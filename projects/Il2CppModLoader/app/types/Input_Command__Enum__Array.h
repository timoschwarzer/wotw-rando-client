#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Input_Command__Enum__Array {
        inline app::Input_Command__Enum__Array__Class** type_info = (app::Input_Command__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04715E28));
        inline app::Input_Command__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::Input_Command__Enum__Array__Class>(type_info, "Core", "Input+Command[]");
        }
        inline app::Input_Command__Enum__Array* create() {
            return il2cpp::create_object<app::Input_Command__Enum__Array>(get_class());
        }
    } // namespace Input_Command__Enum__Array
} // namespace app::classes::types
