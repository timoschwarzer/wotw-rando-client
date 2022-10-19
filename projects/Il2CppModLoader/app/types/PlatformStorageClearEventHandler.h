#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlatformStorageClearEventHandler {
        inline app::PlatformStorageClearEventHandler__Class** type_info = (app::PlatformStorageClearEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04763678));
        inline app::PlatformStorageClearEventHandler__Class* get_class() {
            return il2cpp::get_class<app::PlatformStorageClearEventHandler__Class>(type_info, "Microsoft.Xbox.Services.Xal", "PlatformStorageClearEventHandler");
        }
        inline app::PlatformStorageClearEventHandler* create() {
            return il2cpp::create_object<app::PlatformStorageClearEventHandler>(get_class());
        }
    } // namespace PlatformStorageClearEventHandler
} // namespace app::classes::types
