#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EventSourceCreatedEventArgs {
        inline app::EventSourceCreatedEventArgs__Class** type_info = (app::EventSourceCreatedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04719D30));
        inline app::EventSourceCreatedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::EventSourceCreatedEventArgs__Class>(type_info, "System.Diagnostics.Tracing", "EventSourceCreatedEventArgs");
        }
        inline app::EventSourceCreatedEventArgs* create() {
            return il2cpp::create_object<app::EventSourceCreatedEventArgs>(get_class());
        }
    } // namespace EventSourceCreatedEventArgs
} // namespace app::classes::types
