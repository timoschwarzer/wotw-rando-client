#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ILocomotionMovementProcessor {
        inline app::ILocomotionMovementProcessor__Class** type_info = (app::ILocomotionMovementProcessor__Class**)(modloader::win::memory::resolve_rva(0x0475A8D0));
        inline app::ILocomotionMovementProcessor__Class* get_class() {
            return il2cpp::get_class<app::ILocomotionMovementProcessor__Class>(type_info, "", "ILocomotionMovementProcessor");
        }
    } // namespace ILocomotionMovementProcessor
} // namespace app::classes::types
