#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimelineHelper_EverythingConstrainedTo_d_28 {
        inline app::TimelineHelper_EverythingConstrainedTo_d_28__Class** type_info = (app::TimelineHelper_EverythingConstrainedTo_d_28__Class**)(modloader::win::memory::resolve_rva(0x047805E8));
        inline app::TimelineHelper_EverythingConstrainedTo_d_28__Class* get_class() {
            return il2cpp::get_nested_class<app::TimelineHelper_EverythingConstrainedTo_d_28__Class>(type_info, "Moon.Timeline", "TimelineHelper", "<EverythingConstrainedTo>d__28");
        }
        inline app::TimelineHelper_EverythingConstrainedTo_d_28* create() {
            return il2cpp::create_object<app::TimelineHelper_EverythingConstrainedTo_d_28>(get_class());
        }
    } // namespace TimelineHelper_EverythingConstrainedTo_d_28
} // namespace app::classes::types
