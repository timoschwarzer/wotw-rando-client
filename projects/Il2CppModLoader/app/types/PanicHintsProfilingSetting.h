#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PanicHintsProfilingSetting {
        namespace {
            inline app::PanicHintsProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::PanicHintsProfilingSetting__Class** type_info = &type_info_ref;
        inline app::PanicHintsProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::PanicHintsProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "PanicHintsProfilingSetting");
        }
        inline app::PanicHintsProfilingSetting* create() {
            return il2cpp::create_object<app::PanicHintsProfilingSetting>(get_class());
        }
    } // namespace PanicHintsProfilingSetting
} // namespace app::classes::types
