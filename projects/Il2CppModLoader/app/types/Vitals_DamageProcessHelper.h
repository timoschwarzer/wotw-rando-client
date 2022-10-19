#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Vitals_DamageProcessHelper {
        inline app::Vitals_DamageProcessHelper__Class** type_info = (app::Vitals_DamageProcessHelper__Class**)(modloader::win::memory::resolve_rva(0x04714380));
        inline app::Vitals_DamageProcessHelper__Class* get_class() {
            return il2cpp::get_nested_class<app::Vitals_DamageProcessHelper__Class>(type_info, "Moon", "Vitals", "DamageProcessHelper");
        }
        inline app::Vitals_DamageProcessHelper* create() {
            return il2cpp::create_object<app::Vitals_DamageProcessHelper>(get_class());
        }
    } // namespace Vitals_DamageProcessHelper
} // namespace app::classes::types
