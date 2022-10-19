#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ValidationEventHandler {
        inline app::ValidationEventHandler__Class** type_info = (app::ValidationEventHandler__Class**)(modloader::win::memory::resolve_rva(0x047892B8));
        inline app::ValidationEventHandler__Class* get_class() {
            return il2cpp::get_class<app::ValidationEventHandler__Class>(type_info, "System.Xml.Schema", "ValidationEventHandler");
        }
        inline app::ValidationEventHandler* create() {
            return il2cpp::create_object<app::ValidationEventHandler>(get_class());
        }
    } // namespace ValidationEventHandler
} // namespace app::classes::types
