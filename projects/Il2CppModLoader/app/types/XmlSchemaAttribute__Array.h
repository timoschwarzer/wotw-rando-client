#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaAttribute__Array {
        inline app::XmlSchemaAttribute__Array__Class** type_info = (app::XmlSchemaAttribute__Array__Class**)(modloader::win::memory::resolve_rva(0x047652D8));
        inline app::XmlSchemaAttribute__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaAttribute__Array__Class>(type_info, "System.Xml.Schema", "XmlSchemaAttribute[]");
        }
        inline app::XmlSchemaAttribute__Array* create() {
            return il2cpp::create_object<app::XmlSchemaAttribute__Array>(get_class());
        }
    } // namespace XmlSchemaAttribute__Array
} // namespace app::classes::types
