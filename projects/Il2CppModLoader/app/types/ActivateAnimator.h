#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ActivateAnimator {
        inline app::ActivateAnimator__Class** type_info = (app::ActivateAnimator__Class**)(modloader::win::memory::resolve_rva(0x0473F488));
        inline app::ActivateAnimator__Class* get_class() {
            return il2cpp::get_class<app::ActivateAnimator__Class>(type_info, "Moon.Timeline", "ActivateAnimator");
        }
        inline app::ActivateAnimator* create() {
            return il2cpp::create_object<app::ActivateAnimator>(get_class());
        }
    } // namespace ActivateAnimator
} // namespace app::classes::types
