#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFight1GroundLaserBehaviour {
        inline app::PetrifiedOwlBossFight1GroundLaserBehaviour__Class** type_info = (app::PetrifiedOwlBossFight1GroundLaserBehaviour__Class**)(modloader::win::memory::resolve_rva(0x047078B0));
        inline app::PetrifiedOwlBossFight1GroundLaserBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossFight1GroundLaserBehaviour__Class>(type_info, "", "PetrifiedOwlBossFight1GroundLaserBehaviour");
        }
        inline app::PetrifiedOwlBossFight1GroundLaserBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFight1GroundLaserBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossFight1GroundLaserBehaviour
} // namespace app::classes::types
