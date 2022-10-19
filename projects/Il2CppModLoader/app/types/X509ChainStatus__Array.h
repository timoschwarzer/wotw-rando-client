#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace X509ChainStatus__Array {
        inline app::X509ChainStatus__Array__Class** type_info = (app::X509ChainStatus__Array__Class**)(modloader::win::memory::resolve_rva(0x0474A4C0));
        inline app::X509ChainStatus__Array__Class* get_class() {
            return il2cpp::get_class<app::X509ChainStatus__Array__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509ChainStatus[]");
        }
        inline app::X509ChainStatus__Array* create() {
            return il2cpp::create_object<app::X509ChainStatus__Array>(get_class());
        }
    } // namespace X509ChainStatus__Array
} // namespace app::classes::types
