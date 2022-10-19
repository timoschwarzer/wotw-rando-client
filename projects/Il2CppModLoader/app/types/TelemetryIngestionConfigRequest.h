#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TelemetryIngestionConfigRequest {
        inline app::TelemetryIngestionConfigRequest__Class** type_info = (app::TelemetryIngestionConfigRequest__Class**)(modloader::win::memory::resolve_rva(0x0472A758));
        inline app::TelemetryIngestionConfigRequest__Class* get_class() {
            return il2cpp::get_class<app::TelemetryIngestionConfigRequest__Class>(type_info, "PlayFab.EventsModels", "TelemetryIngestionConfigRequest");
        }
        inline app::TelemetryIngestionConfigRequest* create() {
            return il2cpp::create_object<app::TelemetryIngestionConfigRequest>(get_class());
        }
    } // namespace TelemetryIngestionConfigRequest
} // namespace app::classes::types
