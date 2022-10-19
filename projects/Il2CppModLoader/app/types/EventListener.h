#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EventListener {
        inline app::EventListener__Class** type_info = (app::EventListener__Class**)(modloader::win::memory::resolve_rva(0x04729620));
        inline app::EventListener__Class* get_class() {
            return il2cpp::get_class<app::EventListener__Class>(type_info, "System.Diagnostics.Tracing", "EventListener");
        }
        inline app::EventListener* create() {
            return il2cpp::create_object<app::EventListener>(get_class());
        }
    } // namespace EventListener
} // namespace app::classes::types
