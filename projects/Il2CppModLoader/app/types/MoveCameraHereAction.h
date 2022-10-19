#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoveCameraHereAction {
        namespace {
            inline app::MoveCameraHereAction__Class* type_info_ref = nullptr;
        }
        inline app::MoveCameraHereAction__Class** type_info = &type_info_ref;
        inline app::MoveCameraHereAction__Class* get_class() {
            return il2cpp::get_class<app::MoveCameraHereAction__Class>(type_info, "", "MoveCameraHereAction");
        }
        inline app::MoveCameraHereAction* create() {
            return il2cpp::create_object<app::MoveCameraHereAction>(get_class());
        }
    } // namespace MoveCameraHereAction
} // namespace app::classes::types
