#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RuntimePropertyInfo {
        inline app::RuntimePropertyInfo__Class** type_info = (app::RuntimePropertyInfo__Class**)(modloader::win::memory::resolve_rva(0x0470E248));
        inline app::RuntimePropertyInfo__Class* get_class() {
            return il2cpp::get_class<app::RuntimePropertyInfo__Class>(type_info, "System.Reflection", "RuntimePropertyInfo");
        }
        inline app::RuntimePropertyInfo* create() {
            return il2cpp::create_object<app::RuntimePropertyInfo>(get_class());
        }
        inline app::RuntimePropertyInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::RuntimePropertyInfo__Array>(get_class(), size);
        }
        inline app::RuntimePropertyInfo__Array* create_array(const std::vector<app::RuntimePropertyInfo*>& items) {
            return il2cpp::array_new<app::RuntimePropertyInfo__Array>(get_class(), items);
        }
    } // namespace RuntimePropertyInfo
} // namespace app::classes::types
