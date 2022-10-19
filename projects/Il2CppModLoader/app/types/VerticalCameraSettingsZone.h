#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VerticalCameraSettingsZone {
        namespace {
            inline app::VerticalCameraSettingsZone__Class* type_info_ref = nullptr;
        }
        inline app::VerticalCameraSettingsZone__Class** type_info = &type_info_ref;
        inline app::VerticalCameraSettingsZone__Class* get_class() {
            return il2cpp::get_class<app::VerticalCameraSettingsZone__Class>(type_info, "", "VerticalCameraSettingsZone");
        }
        inline app::VerticalCameraSettingsZone* create() {
            return il2cpp::create_object<app::VerticalCameraSettingsZone>(get_class());
        }
    } // namespace VerticalCameraSettingsZone
} // namespace app::classes::types
