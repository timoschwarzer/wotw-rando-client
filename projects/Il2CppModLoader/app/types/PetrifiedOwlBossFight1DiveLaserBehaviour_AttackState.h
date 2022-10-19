#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFight1DiveLaserBehaviour_AttackState {
        inline app::PetrifiedOwlBossFight1DiveLaserBehaviour_AttackState__Class** type_info = (app::PetrifiedOwlBossFight1DiveLaserBehaviour_AttackState__Class**)(modloader::win::memory::resolve_rva(0x04722DD8));
        inline app::PetrifiedOwlBossFight1DiveLaserBehaviour_AttackState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossFight1DiveLaserBehaviour_AttackState__Class>(type_info, "", "PetrifiedOwlBossFight1DiveLaserBehaviour", "AttackState");
        }
        inline app::PetrifiedOwlBossFight1DiveLaserBehaviour_AttackState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFight1DiveLaserBehaviour_AttackState>(get_class());
        }
    } // namespace PetrifiedOwlBossFight1DiveLaserBehaviour_AttackState
} // namespace app::classes::types
