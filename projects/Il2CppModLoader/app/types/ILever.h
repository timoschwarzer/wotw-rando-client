#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ILever {
        inline app::ILever__Class** type_info = (app::ILever__Class**)(modloader::win::memory::resolve_rva(0x04785DF0));
        inline app::ILever__Class* get_class() {
            return il2cpp::get_class<app::ILever__Class>(type_info, "", "ILever");
        }
        inline app::ILever__Array* create_array(int size) {
            return il2cpp::array_new<app::ILever__Array>(get_class(), size);
        }
        inline app::ILever__Array* create_array(const std::vector<app::ILever*>& items) {
            return il2cpp::array_new<app::ILever__Array>(get_class(), items);
        }
    } // namespace ILever
} // namespace app::classes::types
