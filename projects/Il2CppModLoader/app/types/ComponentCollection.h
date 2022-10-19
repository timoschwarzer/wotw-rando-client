#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ComponentCollection {
        inline app::ComponentCollection__Class** type_info = (app::ComponentCollection__Class**)(modloader::win::memory::resolve_rva(0x0470EFC0));
        inline app::ComponentCollection__Class* get_class() {
            return il2cpp::get_class<app::ComponentCollection__Class>(type_info, "System.ComponentModel", "ComponentCollection");
        }
        inline app::ComponentCollection* create() {
            return il2cpp::create_object<app::ComponentCollection>(get_class());
        }
    } // namespace ComponentCollection
} // namespace app::classes::types
