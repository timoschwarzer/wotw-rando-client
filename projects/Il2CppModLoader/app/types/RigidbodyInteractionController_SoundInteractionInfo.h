#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RigidbodyInteractionController_SoundInteractionInfo {
        inline app::RigidbodyInteractionController_SoundInteractionInfo__Class** type_info = (app::RigidbodyInteractionController_SoundInteractionInfo__Class**)(modloader::win::memory::resolve_rva(0x04793C68));
        inline app::RigidbodyInteractionController_SoundInteractionInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::RigidbodyInteractionController_SoundInteractionInfo__Class>(type_info, "", "RigidbodyInteractionController", "SoundInteractionInfo");
        }
        inline app::RigidbodyInteractionController_SoundInteractionInfo* create() {
            return il2cpp::create_object<app::RigidbodyInteractionController_SoundInteractionInfo>(get_class());
        }
        inline app::RigidbodyInteractionController_SoundInteractionInfo__Boxed* box(app::RigidbodyInteractionController_SoundInteractionInfo value) {
            return il2cpp::box_value<app::RigidbodyInteractionController_SoundInteractionInfo__Boxed>(get_class(), value);
        }
    } // namespace RigidbodyInteractionController_SoundInteractionInfo
} // namespace app::classes::types
