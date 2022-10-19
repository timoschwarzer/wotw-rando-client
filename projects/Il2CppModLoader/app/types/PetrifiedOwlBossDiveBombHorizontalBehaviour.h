#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossDiveBombHorizontalBehaviour {
        inline app::PetrifiedOwlBossDiveBombHorizontalBehaviour__Class** type_info = (app::PetrifiedOwlBossDiveBombHorizontalBehaviour__Class**)(modloader::win::memory::resolve_rva(0x04732520));
        inline app::PetrifiedOwlBossDiveBombHorizontalBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossDiveBombHorizontalBehaviour__Class>(type_info, "", "PetrifiedOwlBossDiveBombHorizontalBehaviour");
        }
        inline app::PetrifiedOwlBossDiveBombHorizontalBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossDiveBombHorizontalBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossDiveBombHorizontalBehaviour
} // namespace app::classes::types
