#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTelemetrySpawnEvent {
        inline app::MoonTelemetrySpawnEvent__Class** type_info = (app::MoonTelemetrySpawnEvent__Class**)(modloader::win::memory::resolve_rva(0x047413A8));
        inline app::MoonTelemetrySpawnEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetrySpawnEvent__Class>(type_info, "", "MoonTelemetrySpawnEvent");
        }
        inline app::MoonTelemetrySpawnEvent* create() {
            return il2cpp::create_object<app::MoonTelemetrySpawnEvent>(get_class());
        }
    } // namespace MoonTelemetrySpawnEvent
} // namespace app::classes::types
