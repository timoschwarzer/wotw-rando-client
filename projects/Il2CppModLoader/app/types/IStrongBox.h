#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IStrongBox {
        inline app::IStrongBox__Class** type_info = (app::IStrongBox__Class**)(modloader::win::memory::resolve_rva(0x0475EFA0));
        inline app::IStrongBox__Class* get_class() {
            return il2cpp::get_class<app::IStrongBox__Class>(type_info, "System.Runtime.CompilerServices", "IStrongBox");
        }
        inline app::IStrongBox__Array* create_array(int size) {
            return il2cpp::array_new<app::IStrongBox__Array>(get_class(), size);
        }
        inline app::IStrongBox__Array* create_array(const std::vector<app::IStrongBox*>& items) {
            return il2cpp::array_new<app::IStrongBox__Array>(get_class(), items);
        }
    } // namespace IStrongBox
} // namespace app::classes::types
