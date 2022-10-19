#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MovingCutsceneState {
        namespace {
            inline app::MovingCutsceneState__Class* type_info_ref = nullptr;
        }
        inline app::MovingCutsceneState__Class** type_info = &type_info_ref;
        inline app::MovingCutsceneState__Class* get_class() {
            return il2cpp::get_class<app::MovingCutsceneState__Class>(type_info, "", "MovingCutsceneState");
        }
        inline app::MovingCutsceneState* create() {
            return il2cpp::create_object<app::MovingCutsceneState>(get_class());
        }
    } // namespace MovingCutsceneState
} // namespace app::classes::types
