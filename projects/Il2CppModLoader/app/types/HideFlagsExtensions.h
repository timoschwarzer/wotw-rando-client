#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HideFlagsExtensions {
        inline app::HideFlagsExtensions__Class** type_info = (app::HideFlagsExtensions__Class**)(modloader::win::memory::resolve_rva(0x0472C2D8));
        inline app::HideFlagsExtensions__Class* get_class() {
            return il2cpp::get_class<app::HideFlagsExtensions__Class>(type_info, "", "HideFlagsExtensions");
        }
        inline app::HideFlagsExtensions* create() {
            return il2cpp::create_object<app::HideFlagsExtensions>(get_class());
        }
    } // namespace HideFlagsExtensions
} // namespace app::classes::types
