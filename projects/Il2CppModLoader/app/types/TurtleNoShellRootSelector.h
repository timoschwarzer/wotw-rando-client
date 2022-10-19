#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TurtleNoShellRootSelector {
        namespace {
            inline app::TurtleNoShellRootSelector__Class* type_info_ref = nullptr;
        }
        inline app::TurtleNoShellRootSelector__Class** type_info = &type_info_ref;
        inline app::TurtleNoShellRootSelector__Class* get_class() {
            return il2cpp::get_class<app::TurtleNoShellRootSelector__Class>(type_info, "", "TurtleNoShellRootSelector");
        }
        inline app::TurtleNoShellRootSelector* create() {
            return il2cpp::create_object<app::TurtleNoShellRootSelector>(get_class());
        }
    } // namespace TurtleNoShellRootSelector
} // namespace app::classes::types
