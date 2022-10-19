#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ActiveTurtleShells {
        inline app::ActiveTurtleShells__Class** type_info = (app::ActiveTurtleShells__Class**)(modloader::win::memory::resolve_rva(0x0475F308));
        inline app::ActiveTurtleShells__Class* get_class() {
            return il2cpp::get_class<app::ActiveTurtleShells__Class>(type_info, "", "ActiveTurtleShells");
        }
        inline app::ActiveTurtleShells* create() {
            return il2cpp::create_object<app::ActiveTurtleShells>(get_class());
        }
    } // namespace ActiveTurtleShells
} // namespace app::classes::types
