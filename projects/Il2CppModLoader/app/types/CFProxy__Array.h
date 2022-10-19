#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CFProxy__Array {
        inline app::CFProxy__Array__Class** type_info = (app::CFProxy__Array__Class**)(modloader::win::memory::resolve_rva(0x0474FA68));
        inline app::CFProxy__Array__Class* get_class() {
            return il2cpp::get_class<app::CFProxy__Array__Class>(type_info, "Mono.Net", "CFProxy[]");
        }
        inline app::CFProxy__Array* create() {
            return il2cpp::create_object<app::CFProxy__Array>(get_class());
        }
    } // namespace CFProxy__Array
} // namespace app::classes::types
