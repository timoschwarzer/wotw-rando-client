#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ClientInformation {
        inline app::ClientInformation__Class** type_info = (app::ClientInformation__Class**)(modloader::win::memory::resolve_rva(0x04712568));
        inline app::ClientInformation__Class* get_class() {
            return il2cpp::get_class<app::ClientInformation__Class>(type_info, "", "ClientInformation");
        }
        inline app::ClientInformation* create() {
            return il2cpp::create_object<app::ClientInformation>(get_class());
        }
    } // namespace ClientInformation
} // namespace app::classes::types
