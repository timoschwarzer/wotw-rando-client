#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WriteEventsResponse {
        inline app::WriteEventsResponse__Class** type_info = (app::WriteEventsResponse__Class**)(modloader::win::memory::resolve_rva(0x0470D4A8));
        inline app::WriteEventsResponse__Class* get_class() {
            return il2cpp::get_class<app::WriteEventsResponse__Class>(type_info, "PlayFab.EventsModels", "WriteEventsResponse");
        }
        inline app::WriteEventsResponse* create() {
            return il2cpp::create_object<app::WriteEventsResponse>(get_class());
        }
    } // namespace WriteEventsResponse
} // namespace app::classes::types
