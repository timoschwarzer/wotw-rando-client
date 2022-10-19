#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InteractionSettings {
        inline app::InteractionSettings__Class** type_info = (app::InteractionSettings__Class**)(modloader::win::memory::resolve_rva(0x04796C58));
        inline app::InteractionSettings__Class* get_class() {
            return il2cpp::get_class<app::InteractionSettings__Class>(type_info, "Moon.InteractionGraph", "InteractionSettings");
        }
        inline app::InteractionSettings* create() {
            return il2cpp::create_object<app::InteractionSettings>(get_class());
        }
    } // namespace InteractionSettings
} // namespace app::classes::types
