#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PKCS12_DeriveBytes_1 {
        inline app::PKCS12_DeriveBytes_1__Class** type_info = (app::PKCS12_DeriveBytes_1__Class**)(modloader::win::memory::resolve_rva(0x04758B48));
        inline app::PKCS12_DeriveBytes_1__Class* get_class() {
            return il2cpp::get_nested_class<app::PKCS12_DeriveBytes_1__Class>(type_info, "Mono.Security.X509", "PKCS12", "DeriveBytes");
        }
        inline app::PKCS12_DeriveBytes_1* create() {
            return il2cpp::create_object<app::PKCS12_DeriveBytes_1>(get_class());
        }
    } // namespace PKCS12_DeriveBytes_1
} // namespace app::classes::types
