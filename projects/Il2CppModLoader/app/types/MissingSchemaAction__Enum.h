#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MissingSchemaAction__Enum {
        namespace {
            inline app::MissingSchemaAction__Enum__Class* type_info_ref = nullptr;
        }
        inline app::MissingSchemaAction__Enum__Class** type_info = &type_info_ref;
        inline app::MissingSchemaAction__Enum__Class* get_class() {
            return il2cpp::get_class<app::MissingSchemaAction__Enum__Class>(type_info, "System.Data", "MissingSchemaAction");
        }
        inline app::MissingSchemaAction__Enum* create() {
            return il2cpp::create_object<app::MissingSchemaAction__Enum>(get_class());
        }
    } // namespace MissingSchemaAction__Enum
} // namespace app::classes::types
