#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScaredySkeetoProjectileSettings {
        namespace {
            inline app::ScaredySkeetoProjectileSettings__Class* type_info_ref = nullptr;
        }
        inline app::ScaredySkeetoProjectileSettings__Class** type_info = &type_info_ref;
        inline app::ScaredySkeetoProjectileSettings__Class* get_class() {
            return il2cpp::get_class<app::ScaredySkeetoProjectileSettings__Class>(type_info, "", "ScaredySkeetoProjectileSettings");
        }
        inline app::ScaredySkeetoProjectileSettings* create() {
            return il2cpp::create_object<app::ScaredySkeetoProjectileSettings>(get_class());
        }
    } // namespace ScaredySkeetoProjectileSettings
} // namespace app::classes::types
