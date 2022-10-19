#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NamespaceList {
        inline app::NamespaceList__Class** type_info = (app::NamespaceList__Class**)(modloader::win::memory::resolve_rva(0x0478A9F0));
        inline app::NamespaceList__Class* get_class() {
            return il2cpp::get_class<app::NamespaceList__Class>(type_info, "System.Xml.Schema", "NamespaceList");
        }
        inline app::NamespaceList* create() {
            return il2cpp::create_object<app::NamespaceList>(get_class());
        }
    } // namespace NamespaceList
} // namespace app::classes::types
