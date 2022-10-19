#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RSA {
        inline app::RSA__Class** type_info = (app::RSA__Class**)(modloader::win::memory::resolve_rva(0x0470CE80));
        inline app::RSA__Class* get_class() {
            return il2cpp::get_class<app::RSA__Class>(type_info, "System.Security.Cryptography", "RSA");
        }
        inline app::RSA* create() {
            return il2cpp::create_object<app::RSA>(get_class());
        }
    } // namespace RSA
} // namespace app::classes::types
