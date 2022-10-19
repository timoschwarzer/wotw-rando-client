#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetRemoteLoginEndpointRequest {
        inline app::GetRemoteLoginEndpointRequest__Class** type_info = (app::GetRemoteLoginEndpointRequest__Class**)(modloader::win::memory::resolve_rva(0x0471B328));
        inline app::GetRemoteLoginEndpointRequest__Class* get_class() {
            return il2cpp::get_class<app::GetRemoteLoginEndpointRequest__Class>(type_info, "PlayFab.MultiplayerModels", "GetRemoteLoginEndpointRequest");
        }
        inline app::GetRemoteLoginEndpointRequest* create() {
            return il2cpp::create_object<app::GetRemoteLoginEndpointRequest>(get_class());
        }
    } // namespace GetRemoteLoginEndpointRequest
} // namespace app::classes::types
