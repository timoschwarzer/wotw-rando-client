#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SchemaAttDef__Array {
        namespace {
            inline app::SchemaAttDef__Array__Class* type_info_ref = nullptr;
        }
        inline app::SchemaAttDef__Array__Class** type_info = &type_info_ref;
        inline app::SchemaAttDef__Array__Class* get_class() {
            return il2cpp::get_class<app::SchemaAttDef__Array__Class>(type_info, "System.Xml.Schema", "SchemaAttDef[]");
        }
        inline app::SchemaAttDef__Array* create() {
            return il2cpp::create_object<app::SchemaAttDef__Array>(get_class());
        }
    } // namespace SchemaAttDef__Array
} // namespace app::classes::types
