#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFight1FeatherFlurryBehaviour_StartState {
        inline app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_StartState__Class** type_info = (app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_StartState__Class**)(modloader::win::memory::resolve_rva(0x0470DAC8));
        inline app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_StartState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_StartState__Class>(type_info, "", "PetrifiedOwlBossFight1FeatherFlurryBehaviour", "StartState");
        }
        inline app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_StartState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_StartState>(get_class());
        }
    } // namespace PetrifiedOwlBossFight1FeatherFlurryBehaviour_StartState
} // namespace app::classes::types
