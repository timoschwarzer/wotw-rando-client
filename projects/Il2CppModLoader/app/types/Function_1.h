#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Function_1 {
        inline app::Function_1__Class** type_info = (app::Function_1__Class**)(modloader::win::memory::resolve_rva(0x04742A98));
        inline app::Function_1__Class* get_class() {
            return il2cpp::get_class<app::Function_1__Class>(type_info, "System.Data", "Function");
        }
        inline app::Function_1* create() {
            return il2cpp::create_object<app::Function_1>(get_class());
        }
        inline app::Function_1__Array* create_array(int size) {
            return il2cpp::array_new<app::Function_1__Array>(get_class(), size);
        }
        inline app::Function_1__Array* create_array(const std::vector<app::Function_1*>& items) {
            return il2cpp::array_new<app::Function_1__Array>(get_class(), items);
        }
    } // namespace Function_1
} // namespace app::classes::types
