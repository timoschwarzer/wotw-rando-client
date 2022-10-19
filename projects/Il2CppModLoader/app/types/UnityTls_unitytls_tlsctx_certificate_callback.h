#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnityTls_unitytls_tlsctx_certificate_callback {
        inline app::UnityTls_unitytls_tlsctx_certificate_callback__Class** type_info = (app::UnityTls_unitytls_tlsctx_certificate_callback__Class**)(modloader::win::memory::resolve_rva(0x0474E018));
        inline app::UnityTls_unitytls_tlsctx_certificate_callback__Class* get_class() {
            return il2cpp::get_nested_class<app::UnityTls_unitytls_tlsctx_certificate_callback__Class>(type_info, "Mono.Unity", "UnityTls", "unitytls_tlsctx_certificate_callback");
        }
        inline app::UnityTls_unitytls_tlsctx_certificate_callback* create() {
            return il2cpp::create_object<app::UnityTls_unitytls_tlsctx_certificate_callback>(get_class());
        }
    } // namespace UnityTls_unitytls_tlsctx_certificate_callback
} // namespace app::classes::types
