#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromGenericIDsRequest {
        inline app::GetPlayFabIDsFromGenericIDsRequest__Class** type_info = (app::GetPlayFabIDsFromGenericIDsRequest__Class**)(modloader::win::memory::resolve_rva(0x04796588));
        inline app::GetPlayFabIDsFromGenericIDsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromGenericIDsRequest__Class>(type_info, "PlayFab.ClientModels", "GetPlayFabIDsFromGenericIDsRequest");
        }
        inline app::GetPlayFabIDsFromGenericIDsRequest* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromGenericIDsRequest>(get_class());
        }
    } // namespace GetPlayFabIDsFromGenericIDsRequest
} // namespace app::classes::types
