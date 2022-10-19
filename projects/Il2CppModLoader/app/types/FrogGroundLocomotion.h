#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FrogGroundLocomotion {
        inline app::FrogGroundLocomotion__Class** type_info = (app::FrogGroundLocomotion__Class**)(modloader::win::memory::resolve_rva(0x04781E88));
        inline app::FrogGroundLocomotion__Class* get_class() {
            return il2cpp::get_class<app::FrogGroundLocomotion__Class>(type_info, "", "FrogGroundLocomotion");
        }
        inline app::FrogGroundLocomotion* create() {
            return il2cpp::create_object<app::FrogGroundLocomotion>(get_class());
        }
    } // namespace FrogGroundLocomotion
} // namespace app::classes::types
