#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExitGameAction {
        namespace {
            inline app::ExitGameAction__Class* type_info_ref = nullptr;
        }
        inline app::ExitGameAction__Class** type_info = &type_info_ref;
        inline app::ExitGameAction__Class* get_class() {
            return il2cpp::get_class<app::ExitGameAction__Class>(type_info, "", "ExitGameAction");
        }
        inline app::ExitGameAction* create() {
            return il2cpp::create_object<app::ExitGameAction>(get_class());
        }
    } // namespace ExitGameAction
} // namespace app::classes::types
