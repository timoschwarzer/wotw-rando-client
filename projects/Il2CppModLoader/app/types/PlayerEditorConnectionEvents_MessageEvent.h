#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerEditorConnectionEvents_MessageEvent {
        inline app::PlayerEditorConnectionEvents_MessageEvent__Class** type_info = (app::PlayerEditorConnectionEvents_MessageEvent__Class**)(modloader::win::memory::resolve_rva(0x047774D0));
        inline app::PlayerEditorConnectionEvents_MessageEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerEditorConnectionEvents_MessageEvent__Class>(type_info, "UnityEngine.Networking.PlayerConnection", "PlayerEditorConnectionEvents", "MessageEvent");
        }
        inline app::PlayerEditorConnectionEvents_MessageEvent* create() {
            return il2cpp::create_object<app::PlayerEditorConnectionEvents_MessageEvent>(get_class());
        }
    } // namespace PlayerEditorConnectionEvents_MessageEvent
} // namespace app::classes::types
