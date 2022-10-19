#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerEditorConnectionEvents_MessageTypeSubscribers {
        inline app::PlayerEditorConnectionEvents_MessageTypeSubscribers__Class** type_info = (app::PlayerEditorConnectionEvents_MessageTypeSubscribers__Class**)(modloader::win::memory::resolve_rva(0x0470BE70));
        inline app::PlayerEditorConnectionEvents_MessageTypeSubscribers__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerEditorConnectionEvents_MessageTypeSubscribers__Class>(type_info, "UnityEngine.Networking.PlayerConnection", "PlayerEditorConnectionEvents", "MessageTypeSubscribers");
        }
        inline app::PlayerEditorConnectionEvents_MessageTypeSubscribers* create() {
            return il2cpp::create_object<app::PlayerEditorConnectionEvents_MessageTypeSubscribers>(get_class());
        }
        inline app::PlayerEditorConnectionEvents_MessageTypeSubscribers__Array* create_array(int size) {
            return il2cpp::array_new<app::PlayerEditorConnectionEvents_MessageTypeSubscribers__Array>(get_class(), size);
        }
        inline app::PlayerEditorConnectionEvents_MessageTypeSubscribers__Array* create_array(const std::vector<app::PlayerEditorConnectionEvents_MessageTypeSubscribers*>& items) {
            return il2cpp::array_new<app::PlayerEditorConnectionEvents_MessageTypeSubscribers__Array>(get_class(), items);
        }
    } // namespace PlayerEditorConnectionEvents_MessageTypeSubscribers
} // namespace app::classes::types
