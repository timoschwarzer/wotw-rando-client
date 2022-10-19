#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Group {
        inline app::Group__Class** type_info = (app::Group__Class**)(modloader::win::memory::resolve_rva(0x0477AAC0));
        inline app::Group__Class* get_class() {
            return il2cpp::get_class<app::Group__Class>(type_info, "System.Text.RegularExpressions", "Group");
        }
        inline app::Group* create() {
            return il2cpp::create_object<app::Group>(get_class());
        }
        inline app::Group__Array* create_array(int size) {
            return il2cpp::array_new<app::Group__Array>(get_class(), size);
        }
        inline app::Group__Array* create_array(const std::vector<app::Group*>& items) {
            return il2cpp::array_new<app::Group__Array>(get_class(), items);
        }
    } // namespace Group
} // namespace app::classes::types
