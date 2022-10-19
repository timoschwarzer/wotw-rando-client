#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraShakeAction {
        namespace {
            inline app::CameraShakeAction__Class* type_info_ref = nullptr;
        }
        inline app::CameraShakeAction__Class** type_info = &type_info_ref;
        inline app::CameraShakeAction__Class* get_class() {
            return il2cpp::get_class<app::CameraShakeAction__Class>(type_info, "", "CameraShakeAction");
        }
        inline app::CameraShakeAction* create() {
            return il2cpp::create_object<app::CameraShakeAction>(get_class());
        }
    } // namespace CameraShakeAction
} // namespace app::classes::types
