#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UIInteractable {
        inline app::UIInteractable__Class** type_info = (app::UIInteractable__Class**)(modloader::win::memory::resolve_rva(0x04755E20));
        inline app::UIInteractable__Class* get_class() {
            return il2cpp::get_class<app::UIInteractable__Class>(type_info, "Moon.UI", "UIInteractable");
        }
        inline app::UIInteractable* create() {
            return il2cpp::create_object<app::UIInteractable>(get_class());
        }
        inline app::UIInteractable__Array* create_array(int size) {
            return il2cpp::array_new<app::UIInteractable__Array>(get_class(), size);
        }
        inline app::UIInteractable__Array* create_array(const std::vector<app::UIInteractable*>& items) {
            return il2cpp::array_new<app::UIInteractable__Array>(get_class(), items);
        }
    } // namespace UIInteractable
} // namespace app::classes::types
