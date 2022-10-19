#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataColumn {
        inline app::DataColumn__Class** type_info = (app::DataColumn__Class**)(modloader::win::memory::resolve_rva(0x04713A18));
        inline app::DataColumn__Class* get_class() {
            return il2cpp::get_class<app::DataColumn__Class>(type_info, "System.Data", "DataColumn");
        }
        inline app::DataColumn* create() {
            return il2cpp::create_object<app::DataColumn>(get_class());
        }
        inline app::DataColumn__Array* create_array(int size) {
            return il2cpp::array_new<app::DataColumn__Array>(get_class(), size);
        }
        inline app::DataColumn__Array* create_array(const std::vector<app::DataColumn*>& items) {
            return il2cpp::array_new<app::DataColumn__Array>(get_class(), items);
        }
    } // namespace DataColumn
} // namespace app::classes::types
