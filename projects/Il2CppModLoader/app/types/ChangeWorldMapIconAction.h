#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ChangeWorldMapIconAction {
        namespace {
            inline app::ChangeWorldMapIconAction__Class* type_info_ref = nullptr;
        }
        inline app::ChangeWorldMapIconAction__Class** type_info = &type_info_ref;
        inline app::ChangeWorldMapIconAction__Class* get_class() {
            return il2cpp::get_class<app::ChangeWorldMapIconAction__Class>(type_info, "", "ChangeWorldMapIconAction");
        }
        inline app::ChangeWorldMapIconAction* create() {
            return il2cpp::create_object<app::ChangeWorldMapIconAction>(get_class());
        }
    } // namespace ChangeWorldMapIconAction
} // namespace app::classes::types
