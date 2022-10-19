#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace INonSerializedUberState {
        inline app::INonSerializedUberState__Class** type_info = (app::INonSerializedUberState__Class**)(modloader::win::memory::resolve_rva(0x04770010));
        inline app::INonSerializedUberState__Class* get_class() {
            return il2cpp::get_class<app::INonSerializedUberState__Class>(type_info, "Moon", "INonSerializedUberState");
        }
        inline app::INonSerializedUberState__Array* create_array(int size) {
            return il2cpp::array_new<app::INonSerializedUberState__Array>(get_class(), size);
        }
        inline app::INonSerializedUberState__Array* create_array(const std::vector<app::INonSerializedUberState*>& items) {
            return il2cpp::array_new<app::INonSerializedUberState__Array>(get_class(), items);
        }
    } // namespace INonSerializedUberState
} // namespace app::classes::types
