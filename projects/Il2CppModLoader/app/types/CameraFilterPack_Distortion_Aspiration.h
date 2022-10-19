#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Distortion_Aspiration {
        inline app::CameraFilterPack_Distortion_Aspiration__Class** type_info = (app::CameraFilterPack_Distortion_Aspiration__Class**)(modloader::win::memory::resolve_rva(0x0471AAF0));
        inline app::CameraFilterPack_Distortion_Aspiration__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Distortion_Aspiration__Class>(type_info, "", "CameraFilterPack_Distortion_Aspiration");
        }
        inline app::CameraFilterPack_Distortion_Aspiration* create() {
            return il2cpp::create_object<app::CameraFilterPack_Distortion_Aspiration>(get_class());
        }
    } // namespace CameraFilterPack_Distortion_Aspiration
} // namespace app::classes::types
