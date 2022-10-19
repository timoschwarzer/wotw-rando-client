#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraSettingsZoneAnimator {
        namespace {
            inline app::CameraSettingsZoneAnimator__Class* type_info_ref = nullptr;
        }
        inline app::CameraSettingsZoneAnimator__Class** type_info = &type_info_ref;
        inline app::CameraSettingsZoneAnimator__Class* get_class() {
            return il2cpp::get_class<app::CameraSettingsZoneAnimator__Class>(type_info, "", "CameraSettingsZoneAnimator");
        }
        inline app::CameraSettingsZoneAnimator* create() {
            return il2cpp::create_object<app::CameraSettingsZoneAnimator>(get_class());
        }
    } // namespace CameraSettingsZoneAnimator
} // namespace app::classes::types
