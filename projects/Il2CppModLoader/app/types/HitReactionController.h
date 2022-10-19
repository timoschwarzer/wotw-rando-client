#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HitReactionController {
        inline app::HitReactionController__Class** type_info = (app::HitReactionController__Class**)(modloader::win::memory::resolve_rva(0x047836D8));
        inline app::HitReactionController__Class* get_class() {
            return il2cpp::get_class<app::HitReactionController__Class>(type_info, "", "HitReactionController");
        }
        inline app::HitReactionController* create() {
            return il2cpp::create_object<app::HitReactionController>(get_class());
        }
    } // namespace HitReactionController
} // namespace app::classes::types
