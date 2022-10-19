#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NetEventSource {
        inline app::NetEventSource__Class** type_info = (app::NetEventSource__Class**)(modloader::win::memory::resolve_rva(0x04755FF8));
        inline app::NetEventSource__Class* get_class() {
            return il2cpp::get_class<app::NetEventSource__Class>(type_info, "System.Net", "NetEventSource");
        }
        inline app::NetEventSource* create() {
            return il2cpp::create_object<app::NetEventSource>(get_class());
        }
    } // namespace NetEventSource
} // namespace app::classes::types
