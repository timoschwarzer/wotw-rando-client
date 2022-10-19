#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Damage {
        inline app::Damage__Class** type_info = (app::Damage__Class**)(modloader::win::memory::resolve_rva(0x04732128));
        inline app::Damage__Class* get_class() {
            return il2cpp::get_class<app::Damage__Class>(type_info, "", "Damage");
        }
        inline app::Damage* create() {
            return il2cpp::create_object<app::Damage>(get_class());
        }
        inline app::Damage__Array* create_array(int size) {
            return il2cpp::array_new<app::Damage__Array>(get_class(), size);
        }
        inline app::Damage__Array* create_array(const std::vector<app::Damage*>& items) {
            return il2cpp::array_new<app::Damage__Array>(get_class(), items);
        }
    } // namespace Damage
} // namespace app::classes::types
