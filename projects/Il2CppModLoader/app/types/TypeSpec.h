#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TypeSpec {
        inline app::TypeSpec__Class** type_info = (app::TypeSpec__Class**)(modloader::win::memory::resolve_rva(0x047281A8));
        inline app::TypeSpec__Class* get_class() {
            return il2cpp::get_class<app::TypeSpec__Class>(type_info, "System", "TypeSpec");
        }
        inline app::TypeSpec* create() {
            return il2cpp::create_object<app::TypeSpec>(get_class());
        }
        inline app::TypeSpec__Array* create_array(int size) {
            return il2cpp::array_new<app::TypeSpec__Array>(get_class(), size);
        }
        inline app::TypeSpec__Array* create_array(const std::vector<app::TypeSpec*>& items) {
            return il2cpp::array_new<app::TypeSpec__Array>(get_class(), items);
        }
    } // namespace TypeSpec
} // namespace app::classes::types
