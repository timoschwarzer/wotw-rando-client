#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ToggleMenuAction {
        namespace {
            inline app::ToggleMenuAction__Class* type_info_ref = nullptr;
        }
        inline app::ToggleMenuAction__Class** type_info = &type_info_ref;
        inline app::ToggleMenuAction__Class* get_class() {
            return il2cpp::get_class<app::ToggleMenuAction__Class>(type_info, "", "ToggleMenuAction");
        }
        inline app::ToggleMenuAction* create() {
            return il2cpp::create_object<app::ToggleMenuAction>(get_class());
        }
    } // namespace ToggleMenuAction
} // namespace app::classes::types
