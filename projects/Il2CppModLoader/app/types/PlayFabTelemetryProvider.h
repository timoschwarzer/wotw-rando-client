#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabTelemetryProvider {
        inline app::PlayFabTelemetryProvider__Class** type_info = (app::PlayFabTelemetryProvider__Class**)(modloader::win::memory::resolve_rva(0x04752C48));
        inline app::PlayFabTelemetryProvider__Class* get_class() {
            return il2cpp::get_class<app::PlayFabTelemetryProvider__Class>(type_info, "SystemIntegration.Synchronizer.Telemetry", "PlayFabTelemetryProvider");
        }
        inline app::PlayFabTelemetryProvider* create() {
            return il2cpp::create_object<app::PlayFabTelemetryProvider>(get_class());
        }
    } // namespace PlayFabTelemetryProvider
} // namespace app::classes::types
