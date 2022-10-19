#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XPathNodeType__Enum {
        inline app::XPathNodeType__Enum__Class** type_info = (app::XPathNodeType__Enum__Class**)(modloader::win::memory::resolve_rva(0x047708D0));
        inline app::XPathNodeType__Enum__Class* get_class() {
            return il2cpp::get_class<app::XPathNodeType__Enum__Class>(type_info, "System.Xml.XPath", "XPathNodeType");
        }
        inline app::XPathNodeType__Enum* create() {
            return il2cpp::create_object<app::XPathNodeType__Enum>(get_class());
        }
    } // namespace XPathNodeType__Enum
} // namespace app::classes::types
