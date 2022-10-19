#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EventSendingStage {
        inline app::EventSendingStage__Class** type_info = (app::EventSendingStage__Class**)(modloader::win::memory::resolve_rva(0x04745988));
        inline app::EventSendingStage__Class* get_class() {
            return il2cpp::get_class<app::EventSendingStage__Class>(type_info, "PlayFab.Pipeline", "EventSendingStage");
        }
        inline app::EventSendingStage* create() {
            return il2cpp::create_object<app::EventSendingStage>(get_class());
        }
    } // namespace EventSendingStage
} // namespace app::classes::types
