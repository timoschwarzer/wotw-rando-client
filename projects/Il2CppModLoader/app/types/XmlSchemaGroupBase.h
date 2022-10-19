#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaGroupBase {
        inline app::XmlSchemaGroupBase__Class** type_info = (app::XmlSchemaGroupBase__Class**)(modloader::win::memory::resolve_rva(0x0473CF00));
        inline app::XmlSchemaGroupBase__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaGroupBase__Class>(type_info, "System.Xml.Schema", "XmlSchemaGroupBase");
        }
        inline app::XmlSchemaGroupBase* create() {
            return il2cpp::create_object<app::XmlSchemaGroupBase>(get_class());
        }
    } // namespace XmlSchemaGroupBase
} // namespace app::classes::types
