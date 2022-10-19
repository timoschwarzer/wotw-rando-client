#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabSendingProxy {
        inline app::PlayFabSendingProxy__Class** type_info = (app::PlayFabSendingProxy__Class**)(modloader::win::memory::resolve_rva(0x04731A20));
        inline app::PlayFabSendingProxy__Class* get_class() {
            return il2cpp::get_class<app::PlayFabSendingProxy__Class>(type_info, "", "PlayFabSendingProxy");
        }
        inline app::PlayFabSendingProxy* create() {
            return il2cpp::create_object<app::PlayFabSendingProxy>(get_class());
        }
    } // namespace PlayFabSendingProxy
} // namespace app::classes::types
