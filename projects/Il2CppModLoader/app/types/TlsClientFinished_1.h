#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TlsClientFinished_1 {
        inline app::TlsClientFinished_1__Class** type_info = (app::TlsClientFinished_1__Class**)(modloader::win::memory::resolve_rva(0x04725C98));
        inline app::TlsClientFinished_1__Class* get_class() {
            return il2cpp::get_class<app::TlsClientFinished_1__Class>(type_info, "Mono.Security.Protocol.Tls.Handshake.Client", "TlsClientFinished");
        }
        inline app::TlsClientFinished_1* create() {
            return il2cpp::create_object<app::TlsClientFinished_1>(get_class());
        }
    } // namespace TlsClientFinished_1
} // namespace app::classes::types
