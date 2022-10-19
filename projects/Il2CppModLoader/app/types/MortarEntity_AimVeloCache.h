#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MortarEntity_AimVeloCache {
        inline app::MortarEntity_AimVeloCache__Class** type_info = (app::MortarEntity_AimVeloCache__Class**)(modloader::win::memory::resolve_rva(0x0477C808));
        inline app::MortarEntity_AimVeloCache__Class* get_class() {
            return il2cpp::get_nested_class<app::MortarEntity_AimVeloCache__Class>(type_info, "", "MortarEntity", "AimVeloCache");
        }
        inline app::MortarEntity_AimVeloCache* create() {
            return il2cpp::create_object<app::MortarEntity_AimVeloCache>(get_class());
        }
    } // namespace MortarEntity_AimVeloCache
} // namespace app::classes::types
