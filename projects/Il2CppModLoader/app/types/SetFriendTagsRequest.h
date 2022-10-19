#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SetFriendTagsRequest {
        inline app::SetFriendTagsRequest__Class** type_info = (app::SetFriendTagsRequest__Class**)(modloader::win::memory::resolve_rva(0x04719368));
        inline app::SetFriendTagsRequest__Class* get_class() {
            return il2cpp::get_class<app::SetFriendTagsRequest__Class>(type_info, "PlayFab.ClientModels", "SetFriendTagsRequest");
        }
        inline app::SetFriendTagsRequest* create() {
            return il2cpp::create_object<app::SetFriendTagsRequest>(get_class());
        }
    } // namespace SetFriendTagsRequest
} // namespace app::classes::types
