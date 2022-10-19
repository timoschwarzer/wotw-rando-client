#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTelemetryCharacterBaseEvent {
        inline app::MoonTelemetryCharacterBaseEvent__Class** type_info = (app::MoonTelemetryCharacterBaseEvent__Class**)(modloader::win::memory::resolve_rva(0x0470DC98));
        inline app::MoonTelemetryCharacterBaseEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryCharacterBaseEvent__Class>(type_info, "", "MoonTelemetryCharacterBaseEvent");
        }
        inline app::MoonTelemetryCharacterBaseEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryCharacterBaseEvent>(get_class());
        }
    } // namespace MoonTelemetryCharacterBaseEvent
} // namespace app::classes::types
