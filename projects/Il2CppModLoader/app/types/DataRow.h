#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataRow {
        inline app::DataRow__Class** type_info = (app::DataRow__Class**)(modloader::win::memory::resolve_rva(0x0478D818));
        inline app::DataRow__Class* get_class() {
            return il2cpp::get_class<app::DataRow__Class>(type_info, "System.Data", "DataRow");
        }
        inline app::DataRow* create() {
            return il2cpp::create_object<app::DataRow>(get_class());
        }
        inline app::DataRow__Array* create_array(int size) {
            return il2cpp::array_new<app::DataRow__Array>(get_class(), size);
        }
        inline app::DataRow__Array* create_array(const std::vector<app::DataRow*>& items) {
            return il2cpp::array_new<app::DataRow__Array>(get_class(), items);
        }
    } // namespace DataRow
} // namespace app::classes::types
