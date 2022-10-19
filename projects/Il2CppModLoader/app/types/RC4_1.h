#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RC4_1 {
        inline app::RC4_1__Class** type_info = (app::RC4_1__Class**)(modloader::win::memory::resolve_rva(0x0473C1D0));
        inline app::RC4_1__Class* get_class() {
            return il2cpp::get_class<app::RC4_1__Class>(type_info, "Mono.Security.Cryptography", "RC4");
        }
        inline app::RC4_1* create() {
            return il2cpp::create_object<app::RC4_1>(get_class());
        }
    } // namespace RC4_1
} // namespace app::classes::types
