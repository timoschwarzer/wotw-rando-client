#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RemoveFriendRequest_1 {
        inline app::RemoveFriendRequest_1__Class** type_info = (app::RemoveFriendRequest_1__Class**)(modloader::win::memory::resolve_rva(0x047692B8));
        inline app::RemoveFriendRequest_1__Class* get_class() {
            return il2cpp::get_class<app::RemoveFriendRequest_1__Class>(type_info, "PlayFab.ServerModels", "RemoveFriendRequest");
        }
        inline app::RemoveFriendRequest_1* create() {
            return il2cpp::create_object<app::RemoveFriendRequest_1>(get_class());
        }
    } // namespace RemoveFriendRequest_1
} // namespace app::classes::types
