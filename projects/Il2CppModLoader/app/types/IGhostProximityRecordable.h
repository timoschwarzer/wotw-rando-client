#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IGhostProximityRecordable {
        inline app::IGhostProximityRecordable__Class** type_info = (app::IGhostProximityRecordable__Class**)(modloader::win::memory::resolve_rva(0x047021E0));
        inline app::IGhostProximityRecordable__Class* get_class() {
            return il2cpp::get_class<app::IGhostProximityRecordable__Class>(type_info, "", "IGhostProximityRecordable");
        }
    } // namespace IGhostProximityRecordable
} // namespace app::classes::types
