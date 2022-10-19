#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IComboMoveProvider {
        inline app::IComboMoveProvider__Class** type_info = (app::IComboMoveProvider__Class**)(modloader::win::memory::resolve_rva(0x0471BAB8));
        inline app::IComboMoveProvider__Class* get_class() {
            return il2cpp::get_class<app::IComboMoveProvider__Class>(type_info, "Moon.ComboSystem", "IComboMoveProvider");
        }
        inline app::IComboMoveProvider__Array* create_array(int size) {
            return il2cpp::array_new<app::IComboMoveProvider__Array>(get_class(), size);
        }
        inline app::IComboMoveProvider__Array* create_array(const std::vector<app::IComboMoveProvider*>& items) {
            return il2cpp::array_new<app::IComboMoveProvider__Array>(get_class(), items);
        }
    } // namespace IComboMoveProvider
} // namespace app::classes::types
