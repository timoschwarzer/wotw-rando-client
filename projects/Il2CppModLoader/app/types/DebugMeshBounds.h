#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DebugMeshBounds {
        namespace {
            inline app::DebugMeshBounds__Class* type_info_ref = nullptr;
        }
        inline app::DebugMeshBounds__Class** type_info = &type_info_ref;
        inline app::DebugMeshBounds__Class* get_class() {
            return il2cpp::get_class<app::DebugMeshBounds__Class>(type_info, "", "DebugMeshBounds");
        }
        inline app::DebugMeshBounds* create() {
            return il2cpp::create_object<app::DebugMeshBounds>(get_class());
        }
    } // namespace DebugMeshBounds
} // namespace app::classes::types
