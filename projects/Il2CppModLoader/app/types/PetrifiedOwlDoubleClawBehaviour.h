#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlDoubleClawBehaviour {
        inline app::PetrifiedOwlDoubleClawBehaviour__Class** type_info = (app::PetrifiedOwlDoubleClawBehaviour__Class**)(modloader::win::memory::resolve_rva(0x0472D988));
        inline app::PetrifiedOwlDoubleClawBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlDoubleClawBehaviour__Class>(type_info, "Moon", "PetrifiedOwlDoubleClawBehaviour");
        }
        inline app::PetrifiedOwlDoubleClawBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlDoubleClawBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlDoubleClawBehaviour
} // namespace app::classes::types
