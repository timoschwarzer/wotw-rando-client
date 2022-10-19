#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CartDamageCheckAction {
        namespace {
            inline app::CartDamageCheckAction__Class* type_info_ref = nullptr;
        }
        inline app::CartDamageCheckAction__Class** type_info = &type_info_ref;
        inline app::CartDamageCheckAction__Class* get_class() {
            return il2cpp::get_class<app::CartDamageCheckAction__Class>(type_info, "", "CartDamageCheckAction");
        }
        inline app::CartDamageCheckAction* create() {
            return il2cpp::create_object<app::CartDamageCheckAction>(get_class());
        }
    } // namespace CartDamageCheckAction
} // namespace app::classes::types
