#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RigidbodyInteractionController {
        inline app::RigidbodyInteractionController__Class** type_info = (app::RigidbodyInteractionController__Class**)(modloader::win::memory::resolve_rva(0x04761630));
        inline app::RigidbodyInteractionController__Class* get_class() {
            return il2cpp::get_class<app::RigidbodyInteractionController__Class>(type_info, "", "RigidbodyInteractionController");
        }
        inline app::RigidbodyInteractionController* create() {
            return il2cpp::create_object<app::RigidbodyInteractionController>(get_class());
        }
    } // namespace RigidbodyInteractionController
} // namespace app::classes::types
