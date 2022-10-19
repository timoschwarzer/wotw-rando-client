#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromFacebookIDsRequest_1 {
        inline app::GetPlayFabIDsFromFacebookIDsRequest_1__Class** type_info = (app::GetPlayFabIDsFromFacebookIDsRequest_1__Class**)(modloader::win::memory::resolve_rva(0x047986D0));
        inline app::GetPlayFabIDsFromFacebookIDsRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromFacebookIDsRequest_1__Class>(type_info, "PlayFab.ServerModels", "GetPlayFabIDsFromFacebookIDsRequest");
        }
        inline app::GetPlayFabIDsFromFacebookIDsRequest_1* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromFacebookIDsRequest_1>(get_class());
        }
    } // namespace GetPlayFabIDsFromFacebookIDsRequest_1
} // namespace app::classes::types
