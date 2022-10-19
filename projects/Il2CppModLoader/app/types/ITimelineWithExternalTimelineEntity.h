#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ITimelineWithExternalTimelineEntity {
        inline app::ITimelineWithExternalTimelineEntity__Class** type_info = (app::ITimelineWithExternalTimelineEntity__Class**)(modloader::win::memory::resolve_rva(0x0476AD00));
        inline app::ITimelineWithExternalTimelineEntity__Class* get_class() {
            return il2cpp::get_class<app::ITimelineWithExternalTimelineEntity__Class>(type_info, "Moon.Timeline", "ITimelineWithExternalTimelineEntity");
        }
    } // namespace ITimelineWithExternalTimelineEntity
} // namespace app::classes::types
