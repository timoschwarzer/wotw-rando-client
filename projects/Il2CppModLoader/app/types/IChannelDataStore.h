#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IChannelDataStore {
        inline app::IChannelDataStore__Class** type_info = (app::IChannelDataStore__Class**)(modloader::win::memory::resolve_rva(0x0475F7D0));
        inline app::IChannelDataStore__Class* get_class() {
            return il2cpp::get_class<app::IChannelDataStore__Class>(type_info, "System.Runtime.Remoting.Channels", "IChannelDataStore");
        }
    } // namespace IChannelDataStore
} // namespace app::classes::types
