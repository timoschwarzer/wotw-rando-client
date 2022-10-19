#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TitleScreenController {
        namespace {
            inline app::TitleScreenController__Class* type_info_ref = nullptr;
        }
        inline app::TitleScreenController__Class** type_info = &type_info_ref;
        inline app::TitleScreenController__Class* get_class() {
            return il2cpp::get_class<app::TitleScreenController__Class>(type_info, "", "TitleScreenController");
        }
        inline app::TitleScreenController* create() {
            return il2cpp::create_object<app::TitleScreenController>(get_class());
        }
    } // namespace TitleScreenController
} // namespace app::classes::types
