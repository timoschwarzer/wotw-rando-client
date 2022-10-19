#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Locomotion {
        inline app::Locomotion__Class** type_info = (app::Locomotion__Class**)(modloader::win::memory::resolve_rva(0x04717448));
        inline app::Locomotion__Class* get_class() {
            return il2cpp::get_class<app::Locomotion__Class>(type_info, "Moon", "Locomotion");
        }
        inline app::Locomotion* create() {
            return il2cpp::create_object<app::Locomotion>(get_class());
        }
        inline app::Locomotion__Array* create_array(int size) {
            return il2cpp::array_new<app::Locomotion__Array>(get_class(), size);
        }
        inline app::Locomotion__Array* create_array(const std::vector<app::Locomotion*>& items) {
            return il2cpp::array_new<app::Locomotion__Array>(get_class(), items);
        }
    } // namespace Locomotion
} // namespace app::classes::types
