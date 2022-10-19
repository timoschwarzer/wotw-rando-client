#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SetupState {
        inline app::SetupState__Class** type_info = (app::SetupState__Class**)(modloader::win::memory::resolve_rva(0x04725E08));
        inline app::SetupState__Class* get_class() {
            return il2cpp::get_class<app::SetupState__Class>(type_info, "", "SetupState");
        }
        inline app::SetupState* create() {
            return il2cpp::create_object<app::SetupState>(get_class());
        }
        inline app::SetupState__Array* create_array(int size) {
            return il2cpp::array_new<app::SetupState__Array>(get_class(), size);
        }
        inline app::SetupState__Array* create_array(const std::vector<app::SetupState*>& items) {
            return il2cpp::array_new<app::SetupState__Array>(get_class(), items);
        }
    } // namespace SetupState
} // namespace app::classes::types
