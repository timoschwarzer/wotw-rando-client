#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IChannel {
        inline app::IChannel__Class** type_info = (app::IChannel__Class**)(modloader::win::memory::resolve_rva(0x0474EE58));
        inline app::IChannel__Class* get_class() {
            return il2cpp::get_class<app::IChannel__Class>(type_info, "System.Runtime.Remoting.Channels", "IChannel");
        }
    } // namespace IChannel
} // namespace app::classes::types
