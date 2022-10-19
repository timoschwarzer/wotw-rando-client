#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Utils_3 {
        inline app::Utils_3__Class** type_info = (app::Utils_3__Class**)(modloader::win::memory::resolve_rva(0x04745DC8));
        inline app::Utils_3__Class* get_class() {
            return il2cpp::get_class<app::Utils_3__Class>(type_info, "Moon.Profile", "Utils");
        }
        inline app::Utils_3* create() {
            return il2cpp::create_object<app::Utils_3>(get_class());
        }
    } // namespace Utils_3
} // namespace app::classes::types
