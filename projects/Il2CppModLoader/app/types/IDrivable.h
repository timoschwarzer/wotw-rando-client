#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDrivable {
        inline app::IDrivable__Class** type_info = (app::IDrivable__Class**)(modloader::win::memory::resolve_rva(0x0478D738));
        inline app::IDrivable__Class* get_class() {
            return il2cpp::get_class<app::IDrivable__Class>(type_info, "Moon", "IDrivable");
        }
        inline app::IDrivable__Array* create_array(int size) {
            return il2cpp::array_new<app::IDrivable__Array>(get_class(), size);
        }
        inline app::IDrivable__Array* create_array(const std::vector<app::IDrivable*>& items) {
            return il2cpp::array_new<app::IDrivable__Array>(get_class(), items);
        }
    } // namespace IDrivable
} // namespace app::classes::types
