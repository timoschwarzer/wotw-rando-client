#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimelineEventTrigger_c {
        inline app::TimelineEventTrigger_c__Class** type_info = (app::TimelineEventTrigger_c__Class**)(modloader::win::memory::resolve_rva(0x047237D0));
        inline app::TimelineEventTrigger_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TimelineEventTrigger_c__Class>(type_info, "", "TimelineEventTrigger", "<>c");
        }
        inline app::TimelineEventTrigger_c* create() {
            return il2cpp::create_object<app::TimelineEventTrigger_c>(get_class());
        }
    } // namespace TimelineEventTrigger_c
} // namespace app::classes::types
