#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DirectProxy {
        inline app::DirectProxy__Class** type_info = (app::DirectProxy__Class**)(modloader::win::memory::resolve_rva(0x04732B60));
        inline app::DirectProxy__Class* get_class() {
            return il2cpp::get_class<app::DirectProxy__Class>(type_info, "System.Net", "DirectProxy");
        }
        inline app::DirectProxy* create() {
            return il2cpp::create_object<app::DirectProxy>(get_class());
        }
    } // namespace DirectProxy
} // namespace app::classes::types
