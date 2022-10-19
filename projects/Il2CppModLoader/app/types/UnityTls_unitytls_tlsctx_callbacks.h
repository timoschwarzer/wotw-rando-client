#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnityTls_unitytls_tlsctx_callbacks {
        inline app::UnityTls_unitytls_tlsctx_callbacks__Class** type_info = (app::UnityTls_unitytls_tlsctx_callbacks__Class**)(modloader::win::memory::resolve_rva(0x04721270));
        inline app::UnityTls_unitytls_tlsctx_callbacks__Class* get_class() {
            return il2cpp::get_nested_class<app::UnityTls_unitytls_tlsctx_callbacks__Class>(type_info, "Mono.Unity", "UnityTls", "unitytls_tlsctx_callbacks");
        }
        inline app::UnityTls_unitytls_tlsctx_callbacks* create() {
            return il2cpp::create_object<app::UnityTls_unitytls_tlsctx_callbacks>(get_class());
        }
        inline app::UnityTls_unitytls_tlsctx_callbacks__Boxed* box(app::UnityTls_unitytls_tlsctx_callbacks value) {
            return il2cpp::box_value<app::UnityTls_unitytls_tlsctx_callbacks__Boxed>(get_class(), value);
        }
    } // namespace UnityTls_unitytls_tlsctx_callbacks
} // namespace app::classes::types
