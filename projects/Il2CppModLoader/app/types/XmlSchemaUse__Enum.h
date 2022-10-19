#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaUse__Enum {
        inline app::XmlSchemaUse__Enum__Class** type_info = (app::XmlSchemaUse__Enum__Class**)(modloader::win::memory::resolve_rva(0x04781DF8));
        inline app::XmlSchemaUse__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaUse__Enum__Class>(type_info, "System.Xml.Schema", "XmlSchemaUse");
        }
        inline app::XmlSchemaUse__Enum* create() {
            return il2cpp::create_object<app::XmlSchemaUse__Enum>(get_class());
        }
    } // namespace XmlSchemaUse__Enum
} // namespace app::classes::types
