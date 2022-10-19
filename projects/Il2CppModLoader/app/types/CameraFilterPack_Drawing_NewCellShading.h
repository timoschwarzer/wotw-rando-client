#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Drawing_NewCellShading {
        namespace {
            inline app::CameraFilterPack_Drawing_NewCellShading__Class* type_info_ref = nullptr;
        }
        inline app::CameraFilterPack_Drawing_NewCellShading__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_Drawing_NewCellShading__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Drawing_NewCellShading__Class>(type_info, "", "CameraFilterPack_Drawing_NewCellShading");
        }
        inline app::CameraFilterPack_Drawing_NewCellShading* create() {
            return il2cpp::create_object<app::CameraFilterPack_Drawing_NewCellShading>(get_class());
        }
    } // namespace CameraFilterPack_Drawing_NewCellShading
} // namespace app::classes::types
