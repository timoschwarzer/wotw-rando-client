#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ITimelineContext {
        inline app::ITimelineContext__Class** type_info = (app::ITimelineContext__Class**)(modloader::win::memory::resolve_rva(0x04715F58));
        inline app::ITimelineContext__Class* get_class() {
            return il2cpp::get_class<app::ITimelineContext__Class>(type_info, "Moon.Timeline", "ITimelineContext");
        }
    } // namespace ITimelineContext
} // namespace app::classes::types
