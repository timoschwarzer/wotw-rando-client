#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IInteractable {
        inline app::IInteractable__Class** type_info = (app::IInteractable__Class**)(modloader::win::memory::resolve_rva(0x047886E0));
        inline app::IInteractable__Class* get_class() {
            return il2cpp::get_class<app::IInteractable__Class>(type_info, "", "IInteractable");
        }
        inline app::IInteractable__Array* create_array(int size) {
            return il2cpp::array_new<app::IInteractable__Array>(get_class(), size);
        }
        inline app::IInteractable__Array* create_array(const std::vector<app::IInteractable*>& items) {
            return il2cpp::array_new<app::IInteractable__Array>(get_class(), items);
        }
    } // namespace IInteractable
} // namespace app::classes::types
