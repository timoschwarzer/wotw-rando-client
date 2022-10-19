#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlDataLoader {
        inline app::XmlDataLoader__Class** type_info = (app::XmlDataLoader__Class**)(modloader::win::memory::resolve_rva(0x0474A360));
        inline app::XmlDataLoader__Class* get_class() {
            return il2cpp::get_class<app::XmlDataLoader__Class>(type_info, "System.Data", "XmlDataLoader");
        }
        inline app::XmlDataLoader* create() {
            return il2cpp::create_object<app::XmlDataLoader>(get_class());
        }
    } // namespace XmlDataLoader
} // namespace app::classes::types
