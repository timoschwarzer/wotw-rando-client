#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CutsceneController {
        namespace {
            inline app::CutsceneController__Class* type_info_ref = nullptr;
        }
        inline app::CutsceneController__Class** type_info = &type_info_ref;
        inline app::CutsceneController__Class* get_class() {
            return il2cpp::get_class<app::CutsceneController__Class>(type_info, "", "CutsceneController");
        }
        inline app::CutsceneController* create() {
            return il2cpp::create_object<app::CutsceneController>(get_class());
        }
    } // namespace CutsceneController
} // namespace app::classes::types
