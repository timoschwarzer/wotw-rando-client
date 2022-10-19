#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ControllerAxisInput {
        inline app::ControllerAxisInput__Class** type_info = (app::ControllerAxisInput__Class**)(modloader::win::memory::resolve_rva(0x04773B90));
        inline app::ControllerAxisInput__Class* get_class() {
            return il2cpp::get_class<app::ControllerAxisInput__Class>(type_info, "SmartInput", "ControllerAxisInput");
        }
        inline app::ControllerAxisInput* create() {
            return il2cpp::create_object<app::ControllerAxisInput>(get_class());
        }
    } // namespace ControllerAxisInput
} // namespace app::classes::types
