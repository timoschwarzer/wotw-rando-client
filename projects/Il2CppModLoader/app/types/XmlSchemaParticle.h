#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaParticle {
        inline app::XmlSchemaParticle__Class** type_info = (app::XmlSchemaParticle__Class**)(modloader::win::memory::resolve_rva(0x04779178));
        inline app::XmlSchemaParticle__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaParticle__Class>(type_info, "System.Xml.Schema", "XmlSchemaParticle");
        }
        inline app::XmlSchemaParticle* create() {
            return il2cpp::create_object<app::XmlSchemaParticle>(get_class());
        }
        inline app::XmlSchemaParticle__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlSchemaParticle__Array>(get_class(), size);
        }
        inline app::XmlSchemaParticle__Array* create_array(const std::vector<app::XmlSchemaParticle*>& items) {
            return il2cpp::array_new<app::XmlSchemaParticle__Array>(get_class(), items);
        }
    } // namespace XmlSchemaParticle
} // namespace app::classes::types
