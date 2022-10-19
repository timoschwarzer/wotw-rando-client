#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HealthBar {
        inline app::HealthBar__Class** type_info = (app::HealthBar__Class**)(modloader::win::memory::resolve_rva(0x04780D78));
        inline app::HealthBar__Class* get_class() {
            return il2cpp::get_class<app::HealthBar__Class>(type_info, "", "HealthBar");
        }
        inline app::HealthBar* create() {
            return il2cpp::create_object<app::HealthBar>(get_class());
        }
    } // namespace HealthBar
} // namespace app::classes::types
