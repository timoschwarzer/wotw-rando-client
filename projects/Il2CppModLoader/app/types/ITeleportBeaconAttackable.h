#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ITeleportBeaconAttackable {
        inline app::ITeleportBeaconAttackable__Class** type_info = (app::ITeleportBeaconAttackable__Class**)(modloader::win::memory::resolve_rva(0x0470C498));
        inline app::ITeleportBeaconAttackable__Class* get_class() {
            return il2cpp::get_class<app::ITeleportBeaconAttackable__Class>(type_info, "", "ITeleportBeaconAttackable");
        }
    } // namespace ITeleportBeaconAttackable
} // namespace app::classes::types
