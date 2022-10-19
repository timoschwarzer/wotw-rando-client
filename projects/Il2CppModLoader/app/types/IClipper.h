#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IClipper {
        inline app::IClipper__Class** type_info = (app::IClipper__Class**)(modloader::win::memory::resolve_rva(0x0478EF48));
        inline app::IClipper__Class* get_class() {
            return il2cpp::get_class<app::IClipper__Class>(type_info, "UnityEngine.UI", "IClipper");
        }
        inline app::IClipper__Array* create_array(int size) {
            return il2cpp::array_new<app::IClipper__Array>(get_class(), size);
        }
        inline app::IClipper__Array* create_array(const std::vector<app::IClipper*>& items) {
            return il2cpp::array_new<app::IClipper__Array>(get_class(), items);
        }
    } // namespace IClipper
} // namespace app::classes::types
