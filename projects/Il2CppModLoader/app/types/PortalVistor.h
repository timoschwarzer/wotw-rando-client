#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PortalVistor {
        inline app::PortalVistor__Class** type_info = (app::PortalVistor__Class**)(modloader::win::memory::resolve_rva(0x047314C8));
        inline app::PortalVistor__Class* get_class() {
            return il2cpp::get_class<app::PortalVistor__Class>(type_info, "", "PortalVistor");
        }
        inline app::PortalVistor* create() {
            return il2cpp::create_object<app::PortalVistor>(get_class());
        }
    } // namespace PortalVistor
} // namespace app::classes::types
