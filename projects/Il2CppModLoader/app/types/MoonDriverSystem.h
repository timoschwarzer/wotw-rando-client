#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonDriverSystem {
        inline app::MoonDriverSystem__Class** type_info = (app::MoonDriverSystem__Class**)(modloader::win::memory::resolve_rva(0x0478EE20));
        inline app::MoonDriverSystem__Class* get_class() {
            return il2cpp::get_class<app::MoonDriverSystem__Class>(type_info, "Moon", "MoonDriverSystem");
        }
        inline app::MoonDriverSystem* create() {
            return il2cpp::create_object<app::MoonDriverSystem>(get_class());
        }
    } // namespace MoonDriverSystem
} // namespace app::classes::types
