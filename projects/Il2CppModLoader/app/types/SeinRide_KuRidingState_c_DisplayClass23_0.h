#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinRide_KuRidingState_c_DisplayClass23_0 {
        inline app::SeinRide_KuRidingState_c_DisplayClass23_0__Class** type_info = (app::SeinRide_KuRidingState_c_DisplayClass23_0__Class**)(modloader::win::memory::resolve_rva(0x0471D088));
        inline app::SeinRide_KuRidingState_c_DisplayClass23_0__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinRide_KuRidingState_c_DisplayClass23_0__Class>(type_info, "", "SeinRide+KuRidingState", "<>c__DisplayClass23_0");
        }
        inline app::SeinRide_KuRidingState_c_DisplayClass23_0* create() {
            return il2cpp::create_object<app::SeinRide_KuRidingState_c_DisplayClass23_0>(get_class());
        }
    } // namespace SeinRide_KuRidingState_c_DisplayClass23_0
} // namespace app::classes::types
