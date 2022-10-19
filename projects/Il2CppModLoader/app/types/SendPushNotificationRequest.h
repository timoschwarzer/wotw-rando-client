#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SendPushNotificationRequest {
        inline app::SendPushNotificationRequest__Class** type_info = (app::SendPushNotificationRequest__Class**)(modloader::win::memory::resolve_rva(0x04708DC0));
        inline app::SendPushNotificationRequest__Class* get_class() {
            return il2cpp::get_class<app::SendPushNotificationRequest__Class>(type_info, "PlayFab.ServerModels", "SendPushNotificationRequest");
        }
        inline app::SendPushNotificationRequest* create() {
            return il2cpp::create_object<app::SendPushNotificationRequest>(get_class());
        }
    } // namespace SendPushNotificationRequest
} // namespace app::classes::types
