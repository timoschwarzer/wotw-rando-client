#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ListSortDescription {
        inline app::ListSortDescription__Class** type_info = (app::ListSortDescription__Class**)(modloader::win::memory::resolve_rva(0x04707FE0));
        inline app::ListSortDescription__Class* get_class() {
            return il2cpp::get_class<app::ListSortDescription__Class>(type_info, "System.ComponentModel", "ListSortDescription");
        }
        inline app::ListSortDescription* create() {
            return il2cpp::create_object<app::ListSortDescription>(get_class());
        }
        inline app::ListSortDescription__Array* create_array(int size) {
            return il2cpp::array_new<app::ListSortDescription__Array>(get_class(), size);
        }
        inline app::ListSortDescription__Array* create_array(const std::vector<app::ListSortDescription*>& items) {
            return il2cpp::array_new<app::ListSortDescription__Array>(get_class(), items);
        }
    } // namespace ListSortDescription
} // namespace app::classes::types
