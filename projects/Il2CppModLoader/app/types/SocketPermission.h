#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SocketPermission {
        inline app::SocketPermission__Class** type_info = (app::SocketPermission__Class**)(modloader::win::memory::resolve_rva(0x04793D98));
        inline app::SocketPermission__Class* get_class() {
            return il2cpp::get_class<app::SocketPermission__Class>(type_info, "System.Net", "SocketPermission");
        }
        inline app::SocketPermission* create() {
            return il2cpp::create_object<app::SocketPermission>(get_class());
        }
    } // namespace SocketPermission
} // namespace app::classes::types
