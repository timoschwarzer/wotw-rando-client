#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CFRunLoop {
        inline app::CFRunLoop__Class** type_info = (app::CFRunLoop__Class**)(modloader::win::memory::resolve_rva(0x04718470));
        inline app::CFRunLoop__Class* get_class() {
            return il2cpp::get_class<app::CFRunLoop__Class>(type_info, "Mono.Net", "CFRunLoop");
        }
        inline app::CFRunLoop* create() {
            return il2cpp::create_object<app::CFRunLoop>(get_class());
        }
    } // namespace CFRunLoop
} // namespace app::classes::types
