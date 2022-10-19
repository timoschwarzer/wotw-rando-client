#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MortarEntity_AimVeloCache_Generator {
        inline app::MortarEntity_AimVeloCache_Generator__Class** type_info = (app::MortarEntity_AimVeloCache_Generator__Class**)(modloader::win::memory::resolve_rva(0x0471A1A8));
        inline app::MortarEntity_AimVeloCache_Generator__Class* get_class() {
            return il2cpp::get_nested_class<app::MortarEntity_AimVeloCache_Generator__Class>(type_info, "", "MortarEntity+AimVeloCache", "Generator");
        }
        inline app::MortarEntity_AimVeloCache_Generator* create() {
            return il2cpp::create_object<app::MortarEntity_AimVeloCache_Generator>(get_class());
        }
    } // namespace MortarEntity_AimVeloCache_Generator
} // namespace app::classes::types
