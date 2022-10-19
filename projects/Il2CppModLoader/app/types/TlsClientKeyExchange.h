#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TlsClientKeyExchange {
        inline app::TlsClientKeyExchange__Class** type_info = (app::TlsClientKeyExchange__Class**)(modloader::win::memory::resolve_rva(0x04795408));
        inline app::TlsClientKeyExchange__Class* get_class() {
            return il2cpp::get_class<app::TlsClientKeyExchange__Class>(type_info, "Mono.Security.Protocol.Tls.Handshake.Server", "TlsClientKeyExchange");
        }
        inline app::TlsClientKeyExchange* create() {
            return il2cpp::create_object<app::TlsClientKeyExchange>(get_class());
        }
    } // namespace TlsClientKeyExchange
} // namespace app::classes::types
