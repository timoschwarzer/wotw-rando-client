#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossLowFlightBehaviour_AirState {
        inline app::PetrifiedOwlBossLowFlightBehaviour_AirState__Class** type_info = (app::PetrifiedOwlBossLowFlightBehaviour_AirState__Class**)(modloader::win::memory::resolve_rva(0x0473B360));
        inline app::PetrifiedOwlBossLowFlightBehaviour_AirState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossLowFlightBehaviour_AirState__Class>(type_info, "", "PetrifiedOwlBossLowFlightBehaviour", "AirState");
        }
        inline app::PetrifiedOwlBossLowFlightBehaviour_AirState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossLowFlightBehaviour_AirState>(get_class());
        }
    } // namespace PetrifiedOwlBossLowFlightBehaviour_AirState
} // namespace app::classes::types
