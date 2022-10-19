#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonAnimatorSystem {
        inline app::MoonAnimatorSystem__Class** type_info = (app::MoonAnimatorSystem__Class**)(modloader::win::memory::resolve_rva(0x04707580));
        inline app::MoonAnimatorSystem__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimatorSystem__Class>(type_info, "Moon", "MoonAnimatorSystem");
        }
        inline app::MoonAnimatorSystem* create() {
            return il2cpp::create_object<app::MoonAnimatorSystem>(get_class());
        }
    } // namespace MoonAnimatorSystem
} // namespace app::classes::types
