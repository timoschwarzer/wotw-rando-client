#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TurtleShellStateSelector {
        namespace {
            inline app::TurtleShellStateSelector__Class* type_info_ref = nullptr;
        }
        inline app::TurtleShellStateSelector__Class** type_info = &type_info_ref;
        inline app::TurtleShellStateSelector__Class* get_class() {
            return il2cpp::get_class<app::TurtleShellStateSelector__Class>(type_info, "", "TurtleShellStateSelector");
        }
        inline app::TurtleShellStateSelector* create() {
            return il2cpp::create_object<app::TurtleShellStateSelector>(get_class());
        }
    } // namespace TurtleShellStateSelector
} // namespace app::classes::types
