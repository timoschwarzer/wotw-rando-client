#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SchemaNotation {
        inline app::SchemaNotation__Class** type_info = (app::SchemaNotation__Class**)(modloader::win::memory::resolve_rva(0x0472CE40));
        inline app::SchemaNotation__Class* get_class() {
            return il2cpp::get_class<app::SchemaNotation__Class>(type_info, "System.Xml.Schema", "SchemaNotation");
        }
        inline app::SchemaNotation* create() {
            return il2cpp::create_object<app::SchemaNotation>(get_class());
        }
        inline app::SchemaNotation__Array* create_array(int size) {
            return il2cpp::array_new<app::SchemaNotation__Array>(get_class(), size);
        }
        inline app::SchemaNotation__Array* create_array(const std::vector<app::SchemaNotation*>& items) {
            return il2cpp::array_new<app::SchemaNotation__Array>(get_class(), items);
        }
    } // namespace SchemaNotation
} // namespace app::classes::types
