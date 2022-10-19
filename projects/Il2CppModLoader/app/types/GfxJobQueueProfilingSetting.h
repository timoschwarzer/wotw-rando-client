#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GfxJobQueueProfilingSetting {
        namespace {
            inline app::GfxJobQueueProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::GfxJobQueueProfilingSetting__Class** type_info = &type_info_ref;
        inline app::GfxJobQueueProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::GfxJobQueueProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "GfxJobQueueProfilingSetting");
        }
        inline app::GfxJobQueueProfilingSetting* create() {
            return il2cpp::create_object<app::GfxJobQueueProfilingSetting>(get_class());
        }
    } // namespace GfxJobQueueProfilingSetting
} // namespace app::classes::types
