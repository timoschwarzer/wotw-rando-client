#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GhostTimelineEventsPlugin {
        inline app::GhostTimelineEventsPlugin__Class** type_info = (app::GhostTimelineEventsPlugin__Class**)(modloader::win::memory::resolve_rva(0x04750EC0));
        inline app::GhostTimelineEventsPlugin__Class* get_class() {
            return il2cpp::get_class<app::GhostTimelineEventsPlugin__Class>(type_info, "", "GhostTimelineEventsPlugin");
        }
        inline app::GhostTimelineEventsPlugin* create() {
            return il2cpp::create_object<app::GhostTimelineEventsPlugin>(get_class());
        }
    } // namespace GhostTimelineEventsPlugin
} // namespace app::classes::types
