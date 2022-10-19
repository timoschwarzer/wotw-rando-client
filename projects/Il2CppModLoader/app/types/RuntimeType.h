#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RuntimeType {
        inline app::RuntimeType__Class** type_info = (app::RuntimeType__Class**)(modloader::win::memory::resolve_rva(0x0472BB00));
        inline app::RuntimeType__Class* get_class() {
            return il2cpp::get_class<app::RuntimeType__Class>(type_info, "System", "RuntimeType");
        }
        inline app::RuntimeType* create() {
            return il2cpp::create_object<app::RuntimeType>(get_class());
        }
        inline app::RuntimeType__Array* create_array(int size) {
            return il2cpp::array_new<app::RuntimeType__Array>(get_class(), size);
        }
        inline app::RuntimeType__Array* create_array(const std::vector<app::RuntimeType*>& items) {
            return il2cpp::array_new<app::RuntimeType__Array>(get_class(), items);
        }
    } // namespace RuntimeType
} // namespace app::classes::types
