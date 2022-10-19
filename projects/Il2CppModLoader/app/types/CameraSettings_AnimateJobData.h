#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraSettings_AnimateJobData {
        inline app::CameraSettings_AnimateJobData__Class** type_info = (app::CameraSettings_AnimateJobData__Class**)(modloader::win::memory::resolve_rva(0x04763788));
        inline app::CameraSettings_AnimateJobData__Class* get_class() {
            return il2cpp::get_nested_class<app::CameraSettings_AnimateJobData__Class>(type_info, "", "CameraSettings", "AnimateJobData");
        }
        inline app::CameraSettings_AnimateJobData* create() {
            return il2cpp::create_object<app::CameraSettings_AnimateJobData>(get_class());
        }
    } // namespace CameraSettings_AnimateJobData
} // namespace app::classes::types
