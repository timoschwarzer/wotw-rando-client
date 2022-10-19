#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SkipCutsceneController {
        inline app::SkipCutsceneController__Class** type_info = (app::SkipCutsceneController__Class**)(modloader::win::memory::resolve_rva(0x047993C8));
        inline app::SkipCutsceneController__Class* get_class() {
            return il2cpp::get_class<app::SkipCutsceneController__Class>(type_info, "", "SkipCutsceneController");
        }
        inline app::SkipCutsceneController* create() {
            return il2cpp::create_object<app::SkipCutsceneController>(get_class());
        }
    } // namespace SkipCutsceneController
} // namespace app::classes::types
