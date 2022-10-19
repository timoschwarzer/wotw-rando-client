#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Antialiasing_FXAA {
        namespace {
            inline app::CameraFilterPack_Antialiasing_FXAA__Class* type_info_ref = nullptr;
        }
        inline app::CameraFilterPack_Antialiasing_FXAA__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_Antialiasing_FXAA__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Antialiasing_FXAA__Class>(type_info, "", "CameraFilterPack_Antialiasing_FXAA");
        }
        inline app::CameraFilterPack_Antialiasing_FXAA* create() {
            return il2cpp::create_object<app::CameraFilterPack_Antialiasing_FXAA>(get_class());
        }
    } // namespace CameraFilterPack_Antialiasing_FXAA
} // namespace app::classes::types
