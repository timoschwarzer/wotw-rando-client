#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraManager {
        namespace {
            inline app::CameraManager__Class* type_info_ref = nullptr;
        }
        inline app::CameraManager__Class** type_info = &type_info_ref;
        inline app::CameraManager__Class* get_class() {
            return il2cpp::get_class<app::CameraManager__Class>(type_info, "", "CameraManager");
        }
        inline app::CameraManager* create() {
            return il2cpp::create_object<app::CameraManager>(get_class());
        }
    } // namespace CameraManager
} // namespace app::classes::types
