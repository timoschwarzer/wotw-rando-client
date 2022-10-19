#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaObjectTable_XmlSchemaObjectEntry__Array {
        namespace {
            inline app::XmlSchemaObjectTable_XmlSchemaObjectEntry__Array__Class* type_info_ref = nullptr;
        }
        inline app::XmlSchemaObjectTable_XmlSchemaObjectEntry__Array__Class** type_info = &type_info_ref;
        inline app::XmlSchemaObjectTable_XmlSchemaObjectEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaObjectTable_XmlSchemaObjectEntry__Array__Class>(type_info, "System.Xml.Schema", "XmlSchemaObjectTable+XmlSchemaObjectEntry[]");
        }
        inline app::XmlSchemaObjectTable_XmlSchemaObjectEntry__Array* create() {
            return il2cpp::create_object<app::XmlSchemaObjectTable_XmlSchemaObjectEntry__Array>(get_class());
        }
    } // namespace XmlSchemaObjectTable_XmlSchemaObjectEntry__Array
} // namespace app::classes::types
