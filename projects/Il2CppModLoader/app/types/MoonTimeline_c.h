#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTimeline_c {
        inline app::MoonTimeline_c__Class** type_info = (app::MoonTimeline_c__Class**)(modloader::win::memory::resolve_rva(0x0476DA68));
        inline app::MoonTimeline_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTimeline_c__Class>(type_info, "Moon.Timeline", "MoonTimeline", "<>c");
        }
        inline app::MoonTimeline_c* create() {
            return il2cpp::create_object<app::MoonTimeline_c>(get_class());
        }
    } // namespace MoonTimeline_c
} // namespace app::classes::types
