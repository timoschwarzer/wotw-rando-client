#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnixIPGlobalProperties {
        inline app::UnixIPGlobalProperties__Class** type_info = (app::UnixIPGlobalProperties__Class**)(modloader::win::memory::resolve_rva(0x04785EF8));
        inline app::UnixIPGlobalProperties__Class* get_class() {
            return il2cpp::get_class<app::UnixIPGlobalProperties__Class>(type_info, "System.Net.NetworkInformation", "UnixIPGlobalProperties");
        }
        inline app::UnixIPGlobalProperties* create() {
            return il2cpp::create_object<app::UnixIPGlobalProperties>(get_class());
        }
    } // namespace UnixIPGlobalProperties
} // namespace app::classes::types
