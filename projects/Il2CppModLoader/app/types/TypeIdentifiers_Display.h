#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TypeIdentifiers_Display {
        inline app::TypeIdentifiers_Display__Class** type_info = (app::TypeIdentifiers_Display__Class**)(modloader::win::memory::resolve_rva(0x0475FD78));
        inline app::TypeIdentifiers_Display__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeIdentifiers_Display__Class>(type_info, "System", "TypeIdentifiers", "Display");
        }
        inline app::TypeIdentifiers_Display* create() {
            return il2cpp::create_object<app::TypeIdentifiers_Display>(get_class());
        }
    } // namespace TypeIdentifiers_Display
} // namespace app::classes::types
