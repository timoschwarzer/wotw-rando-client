#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTelemetryClientHeartbeatEvent {
        namespace {
            inline app::MoonTelemetryClientHeartbeatEvent__Class* type_info_ref = nullptr;
        }
        inline app::MoonTelemetryClientHeartbeatEvent__Class** type_info = &type_info_ref;
        inline app::MoonTelemetryClientHeartbeatEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryClientHeartbeatEvent__Class>(type_info, "", "MoonTelemetryClientHeartbeatEvent");
        }
        inline app::MoonTelemetryClientHeartbeatEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryClientHeartbeatEvent>(get_class());
        }
    } // namespace MoonTelemetryClientHeartbeatEvent
} // namespace app::classes::types
