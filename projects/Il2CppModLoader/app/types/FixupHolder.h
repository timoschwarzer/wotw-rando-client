#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FixupHolder {
        inline app::FixupHolder__Class** type_info = (app::FixupHolder__Class**)(modloader::win::memory::resolve_rva(0x0475A968));
        inline app::FixupHolder__Class* get_class() {
            return il2cpp::get_class<app::FixupHolder__Class>(type_info, "System.Runtime.Serialization", "FixupHolder");
        }
        inline app::FixupHolder* create() {
            return il2cpp::create_object<app::FixupHolder>(get_class());
        }
        inline app::FixupHolder__Array* create_array(int size) {
            return il2cpp::array_new<app::FixupHolder__Array>(get_class(), size);
        }
        inline app::FixupHolder__Array* create_array(const std::vector<app::FixupHolder*>& items) {
            return il2cpp::array_new<app::FixupHolder__Array>(get_class(), items);
        }
    } // namespace FixupHolder
} // namespace app::classes::types
