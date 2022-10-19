#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISuspendable {
        inline app::ISuspendable__Class** type_info = (app::ISuspendable__Class**)(modloader::win::memory::resolve_rva(0x04799580));
        inline app::ISuspendable__Class* get_class() {
            return il2cpp::get_class<app::ISuspendable__Class>(type_info, "Moon", "ISuspendable");
        }
        inline app::ISuspendable__Array* create_array(int size) {
            return il2cpp::array_new<app::ISuspendable__Array>(get_class(), size);
        }
        inline app::ISuspendable__Array* create_array(const std::vector<app::ISuspendable*>& items) {
            return il2cpp::array_new<app::ISuspendable__Array>(get_class(), items);
        }
    } // namespace ISuspendable
} // namespace app::classes::types
