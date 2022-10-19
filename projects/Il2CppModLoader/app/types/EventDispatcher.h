#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EventDispatcher {
        inline app::EventDispatcher__Class** type_info = (app::EventDispatcher__Class**)(modloader::win::memory::resolve_rva(0x04711EA0));
        inline app::EventDispatcher__Class* get_class() {
            return il2cpp::get_class<app::EventDispatcher__Class>(type_info, "System.Diagnostics.Tracing", "EventDispatcher");
        }
        inline app::EventDispatcher* create() {
            return il2cpp::create_object<app::EventDispatcher>(get_class());
        }
    } // namespace EventDispatcher
} // namespace app::classes::types
