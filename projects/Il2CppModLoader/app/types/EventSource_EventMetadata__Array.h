#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EventSource_EventMetadata__Array {
        inline app::EventSource_EventMetadata__Array__Class** type_info = (app::EventSource_EventMetadata__Array__Class**)(modloader::win::memory::resolve_rva(0x0476BF40));
        inline app::EventSource_EventMetadata__Array__Class* get_class() {
            return il2cpp::get_class<app::EventSource_EventMetadata__Array__Class>(type_info, "System.Diagnostics.Tracing", "EventSource+EventMetadata[]");
        }
        inline app::EventSource_EventMetadata__Array* create() {
            return il2cpp::create_object<app::EventSource_EventMetadata__Array>(get_class());
        }
    } // namespace EventSource_EventMetadata__Array
} // namespace app::classes::types
