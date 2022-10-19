#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InputPlugin {
        namespace {
            inline app::InputPlugin__Class* type_info_ref = nullptr;
        }
        inline app::InputPlugin__Class** type_info = &type_info_ref;
        inline app::InputPlugin__Class* get_class() {
            return il2cpp::get_class<app::InputPlugin__Class>(type_info, "", "InputPlugin");
        }
        inline app::InputPlugin* create() {
            return il2cpp::create_object<app::InputPlugin>(get_class());
        }
    } // namespace InputPlugin
} // namespace app::classes::types
