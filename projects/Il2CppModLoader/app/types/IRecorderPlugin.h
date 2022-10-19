#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IRecorderPlugin {
        inline app::IRecorderPlugin__Class** type_info = (app::IRecorderPlugin__Class**)(modloader::win::memory::resolve_rva(0x04740C58));
        inline app::IRecorderPlugin__Class* get_class() {
            return il2cpp::get_class<app::IRecorderPlugin__Class>(type_info, "", "IRecorderPlugin");
        }
        inline app::IRecorderPlugin__Array* create_array(int size) {
            return il2cpp::array_new<app::IRecorderPlugin__Array>(get_class(), size);
        }
        inline app::IRecorderPlugin__Array* create_array(const std::vector<app::IRecorderPlugin*>& items) {
            return il2cpp::array_new<app::IRecorderPlugin__Array>(get_class(), items);
        }
    } // namespace IRecorderPlugin
} // namespace app::classes::types
