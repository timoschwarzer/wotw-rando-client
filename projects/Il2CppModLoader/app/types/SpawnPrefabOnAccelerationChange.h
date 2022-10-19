#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpawnPrefabOnAccelerationChange {
        namespace {
            inline app::SpawnPrefabOnAccelerationChange__Class* type_info_ref = nullptr;
        }
        inline app::SpawnPrefabOnAccelerationChange__Class** type_info = &type_info_ref;
        inline app::SpawnPrefabOnAccelerationChange__Class* get_class() {
            return il2cpp::get_class<app::SpawnPrefabOnAccelerationChange__Class>(type_info, "", "SpawnPrefabOnAccelerationChange");
        }
        inline app::SpawnPrefabOnAccelerationChange* create() {
            return il2cpp::create_object<app::SpawnPrefabOnAccelerationChange>(get_class());
        }
    } // namespace SpawnPrefabOnAccelerationChange
} // namespace app::classes::types
