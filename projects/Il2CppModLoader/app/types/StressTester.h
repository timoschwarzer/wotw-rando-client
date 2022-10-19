#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StressTester {
        inline app::StressTester__Class** type_info = (app::StressTester__Class**)(modloader::win::memory::resolve_rva(0x04733568));
        inline app::StressTester__Class* get_class() {
            return il2cpp::get_class<app::StressTester__Class>(type_info, "", "StressTester");
        }
        inline app::StressTester* create() {
            return il2cpp::create_object<app::StressTester>(get_class());
        }
        inline app::StressTester__Array* create_array(int size) {
            return il2cpp::array_new<app::StressTester__Array>(get_class(), size);
        }
        inline app::StressTester__Array* create_array(const std::vector<app::StressTester*>& items) {
            return il2cpp::array_new<app::StressTester__Array>(get_class(), items);
        }
    } // namespace StressTester
} // namespace app::classes::types
