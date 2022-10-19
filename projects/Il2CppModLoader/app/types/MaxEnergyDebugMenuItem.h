#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MaxEnergyDebugMenuItem {
        inline app::MaxEnergyDebugMenuItem__Class** type_info = (app::MaxEnergyDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x0474F1E8));
        inline app::MaxEnergyDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::MaxEnergyDebugMenuItem__Class>(type_info, "", "MaxEnergyDebugMenuItem");
        }
        inline app::MaxEnergyDebugMenuItem* create() {
            return il2cpp::create_object<app::MaxEnergyDebugMenuItem>(get_class());
        }
    } // namespace MaxEnergyDebugMenuItem
} // namespace app::classes::types
