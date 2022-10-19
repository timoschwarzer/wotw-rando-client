#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HandshakeType__Enum {
        inline app::HandshakeType__Enum__Class** type_info = (app::HandshakeType__Enum__Class**)(modloader::win::memory::resolve_rva(0x0477CA98));
        inline app::HandshakeType__Enum__Class* get_class() {
            return il2cpp::get_class<app::HandshakeType__Enum__Class>(type_info, "Mono.Security.Protocol.Tls.Handshake", "HandshakeType");
        }
        inline app::HandshakeType__Enum* create() {
            return il2cpp::create_object<app::HandshakeType__Enum>(get_class());
        }
    } // namespace HandshakeType__Enum
} // namespace app::classes::types
