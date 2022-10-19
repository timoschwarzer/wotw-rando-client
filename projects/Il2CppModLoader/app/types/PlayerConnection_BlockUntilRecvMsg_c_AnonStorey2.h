#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerConnection_BlockUntilRecvMsg_c_AnonStorey2 {
        inline app::PlayerConnection_BlockUntilRecvMsg_c_AnonStorey2__Class** type_info = (app::PlayerConnection_BlockUntilRecvMsg_c_AnonStorey2__Class**)(modloader::win::memory::resolve_rva(0x047544F8));
        inline app::PlayerConnection_BlockUntilRecvMsg_c_AnonStorey2__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerConnection_BlockUntilRecvMsg_c_AnonStorey2__Class>(type_info, "UnityEngine.Networking.PlayerConnection", "PlayerConnection", "<BlockUntilRecvMsg>c__AnonStorey2");
        }
        inline app::PlayerConnection_BlockUntilRecvMsg_c_AnonStorey2* create() {
            return il2cpp::create_object<app::PlayerConnection_BlockUntilRecvMsg_c_AnonStorey2>(get_class());
        }
    } // namespace PlayerConnection_BlockUntilRecvMsg_c_AnonStorey2
} // namespace app::classes::types
