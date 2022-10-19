#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TlsServerHelloDone {
        inline app::TlsServerHelloDone__Class** type_info = (app::TlsServerHelloDone__Class**)(modloader::win::memory::resolve_rva(0x04703950));
        inline app::TlsServerHelloDone__Class* get_class() {
            return il2cpp::get_class<app::TlsServerHelloDone__Class>(type_info, "Mono.Security.Protocol.Tls.Handshake.Server", "TlsServerHelloDone");
        }
        inline app::TlsServerHelloDone* create() {
            return il2cpp::create_object<app::TlsServerHelloDone>(get_class());
        }
    } // namespace TlsServerHelloDone
} // namespace app::classes::types
