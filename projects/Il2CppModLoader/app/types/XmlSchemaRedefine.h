#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaRedefine {
        inline app::XmlSchemaRedefine__Class** type_info = (app::XmlSchemaRedefine__Class**)(modloader::win::memory::resolve_rva(0x047586E0));
        inline app::XmlSchemaRedefine__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaRedefine__Class>(type_info, "System.Xml.Schema", "XmlSchemaRedefine");
        }
        inline app::XmlSchemaRedefine* create() {
            return il2cpp::create_object<app::XmlSchemaRedefine>(get_class());
        }
    } // namespace XmlSchemaRedefine
} // namespace app::classes::types
