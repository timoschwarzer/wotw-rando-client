#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPlayerTagsRequest_1 {
        inline app::GetPlayerTagsRequest_1__Class** type_info = (app::GetPlayerTagsRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04785C80));
        inline app::GetPlayerTagsRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerTagsRequest_1__Class>(type_info, "PlayFab.ServerModels", "GetPlayerTagsRequest");
        }
        inline app::GetPlayerTagsRequest_1* create() {
            return il2cpp::create_object<app::GetPlayerTagsRequest_1>(get_class());
        }
    } // namespace GetPlayerTagsRequest_1
} // namespace app::classes::types
