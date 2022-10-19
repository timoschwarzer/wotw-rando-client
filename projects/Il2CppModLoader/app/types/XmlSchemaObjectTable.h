#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaObjectTable {
        inline app::XmlSchemaObjectTable__Class** type_info = (app::XmlSchemaObjectTable__Class**)(modloader::win::memory::resolve_rva(0x04798280));
        inline app::XmlSchemaObjectTable__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaObjectTable__Class>(type_info, "System.Xml.Schema", "XmlSchemaObjectTable");
        }
        inline app::XmlSchemaObjectTable* create() {
            return il2cpp::create_object<app::XmlSchemaObjectTable>(get_class());
        }
    } // namespace XmlSchemaObjectTable
} // namespace app::classes::types
