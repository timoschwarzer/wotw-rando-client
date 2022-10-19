#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromXboxLiveIDsRequest {
        inline app::GetPlayFabIDsFromXboxLiveIDsRequest__Class** type_info = (app::GetPlayFabIDsFromXboxLiveIDsRequest__Class**)(modloader::win::memory::resolve_rva(0x04710540));
        inline app::GetPlayFabIDsFromXboxLiveIDsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromXboxLiveIDsRequest__Class>(type_info, "PlayFab.ClientModels", "GetPlayFabIDsFromXboxLiveIDsRequest");
        }
        inline app::GetPlayFabIDsFromXboxLiveIDsRequest* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromXboxLiveIDsRequest>(get_class());
        }
    } // namespace GetPlayFabIDsFromXboxLiveIDsRequest
} // namespace app::classes::types
