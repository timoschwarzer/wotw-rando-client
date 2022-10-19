#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossRainOfFeathersBehaviour_RainOfFeathersStates {
        inline app::PetrifiedOwlBossRainOfFeathersBehaviour_RainOfFeathersStates__Class** type_info = (app::PetrifiedOwlBossRainOfFeathersBehaviour_RainOfFeathersStates__Class**)(modloader::win::memory::resolve_rva(0x0478C0E0));
        inline app::PetrifiedOwlBossRainOfFeathersBehaviour_RainOfFeathersStates__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossRainOfFeathersBehaviour_RainOfFeathersStates__Class>(type_info, "", "PetrifiedOwlBossRainOfFeathersBehaviour", "RainOfFeathersStates");
        }
        inline app::PetrifiedOwlBossRainOfFeathersBehaviour_RainOfFeathersStates* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossRainOfFeathersBehaviour_RainOfFeathersStates>(get_class());
        }
    } // namespace PetrifiedOwlBossRainOfFeathersBehaviour_RainOfFeathersStates
} // namespace app::classes::types
