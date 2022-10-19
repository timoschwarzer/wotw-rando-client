#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CryptographicException {
        inline app::CryptographicException__Class** type_info = (app::CryptographicException__Class**)(modloader::win::memory::resolve_rva(0x0472B6A8));
        inline app::CryptographicException__Class* get_class() {
            return il2cpp::get_class<app::CryptographicException__Class>(type_info, "System.Security.Cryptography", "CryptographicException");
        }
        inline app::CryptographicException* create() {
            return il2cpp::create_object<app::CryptographicException>(get_class());
        }
    } // namespace CryptographicException
} // namespace app::classes::types
