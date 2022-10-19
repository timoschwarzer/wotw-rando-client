#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaSubstitutionGroupV1Compat {
        inline app::XmlSchemaSubstitutionGroupV1Compat__Class** type_info = (app::XmlSchemaSubstitutionGroupV1Compat__Class**)(modloader::win::memory::resolve_rva(0x04711840));
        inline app::XmlSchemaSubstitutionGroupV1Compat__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaSubstitutionGroupV1Compat__Class>(type_info, "System.Xml.Schema", "XmlSchemaSubstitutionGroupV1Compat");
        }
        inline app::XmlSchemaSubstitutionGroupV1Compat* create() {
            return il2cpp::create_object<app::XmlSchemaSubstitutionGroupV1Compat>(get_class());
        }
    } // namespace XmlSchemaSubstitutionGroupV1Compat
} // namespace app::classes::types
