#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XalService_XalPlatformRemoteConnectShowPromptEventHandler {
        inline app::XalService_XalPlatformRemoteConnectShowPromptEventHandler__Class** type_info = (app::XalService_XalPlatformRemoteConnectShowPromptEventHandler__Class**)(modloader::win::memory::resolve_rva(0x047289E0));
        inline app::XalService_XalPlatformRemoteConnectShowPromptEventHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::XalService_XalPlatformRemoteConnectShowPromptEventHandler__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalService", "XalPlatformRemoteConnectShowPromptEventHandler");
        }
        inline app::XalService_XalPlatformRemoteConnectShowPromptEventHandler* create() {
            return il2cpp::create_object<app::XalService_XalPlatformRemoteConnectShowPromptEventHandler>(get_class());
        }
    } // namespace XalService_XalPlatformRemoteConnectShowPromptEventHandler
} // namespace app::classes::types
