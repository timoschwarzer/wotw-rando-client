#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_TV_WideScreenHV {
        inline app::CameraFilterPack_TV_WideScreenHV__Class** type_info = (app::CameraFilterPack_TV_WideScreenHV__Class**)(modloader::win::memory::resolve_rva(0x047136B8));
        inline app::CameraFilterPack_TV_WideScreenHV__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_TV_WideScreenHV__Class>(type_info, "", "CameraFilterPack_TV_WideScreenHV");
        }
        inline app::CameraFilterPack_TV_WideScreenHV* create() {
            return il2cpp::create_object<app::CameraFilterPack_TV_WideScreenHV>(get_class());
        }
    } // namespace CameraFilterPack_TV_WideScreenHV
} // namespace app::classes::types
