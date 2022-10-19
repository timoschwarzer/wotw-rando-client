#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpawnProjectileAction {
        namespace {
            inline app::SpawnProjectileAction__Class* type_info_ref = nullptr;
        }
        inline app::SpawnProjectileAction__Class** type_info = &type_info_ref;
        inline app::SpawnProjectileAction__Class* get_class() {
            return il2cpp::get_class<app::SpawnProjectileAction__Class>(type_info, "", "SpawnProjectileAction");
        }
        inline app::SpawnProjectileAction* create() {
            return il2cpp::create_object<app::SpawnProjectileAction>(get_class());
        }
    } // namespace SpawnProjectileAction
} // namespace app::classes::types
