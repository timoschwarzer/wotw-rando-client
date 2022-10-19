#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ICondition {
        inline app::ICondition__Class** type_info = (app::ICondition__Class**)(modloader::win::memory::resolve_rva(0x04794720));
        inline app::ICondition__Class* get_class() {
            return il2cpp::get_class<app::ICondition__Class>(type_info, "", "ICondition");
        }
        inline app::ICondition__Array* create_array(int size) {
            return il2cpp::array_new<app::ICondition__Array>(get_class(), size);
        }
        inline app::ICondition__Array* create_array(const std::vector<app::ICondition*>& items) {
            return il2cpp::array_new<app::ICondition__Array>(get_class(), items);
        }
    } // namespace ICondition
} // namespace app::classes::types
