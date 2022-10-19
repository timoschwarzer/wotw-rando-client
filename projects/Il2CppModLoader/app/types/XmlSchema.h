#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchema {
        inline app::XmlSchema__Class** type_info = (app::XmlSchema__Class**)(modloader::win::memory::resolve_rva(0x04755C60));
        inline app::XmlSchema__Class* get_class() {
            return il2cpp::get_class<app::XmlSchema__Class>(type_info, "System.Xml.Schema", "XmlSchema");
        }
        inline app::XmlSchema* create() {
            return il2cpp::create_object<app::XmlSchema>(get_class());
        }
        inline app::XmlSchema__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlSchema__Array>(get_class(), size);
        }
        inline app::XmlSchema__Array* create_array(const std::vector<app::XmlSchema*>& items) {
            return il2cpp::array_new<app::XmlSchema__Array>(get_class(), items);
        }
    } // namespace XmlSchema
} // namespace app::classes::types
#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XMLSchema {
        namespace {
            inline app::XMLSchema__Class* type_info_ref = nullptr;
        }
        inline app::XMLSchema__Class** type_info = &type_info_ref;
        inline app::XMLSchema__Class* get_class() {
            return il2cpp::get_class<app::XMLSchema__Class>(type_info, "System.Data", "XMLSchema");
        }
        inline app::XMLSchema* create() {
            return il2cpp::create_object<app::XMLSchema>(get_class());
        }
    } // namespace XMLSchema
} // namespace app::classes::types
