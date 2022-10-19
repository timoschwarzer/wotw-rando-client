#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InternalSerializerTypeE__Enum {
        namespace {
            inline app::InternalSerializerTypeE__Enum__Class* type_info_ref = nullptr;
        }
        inline app::InternalSerializerTypeE__Enum__Class** type_info = &type_info_ref;
        inline app::InternalSerializerTypeE__Enum__Class* get_class() {
            return il2cpp::get_class<app::InternalSerializerTypeE__Enum__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "InternalSerializerTypeE");
        }
        inline app::InternalSerializerTypeE__Enum* create() {
            return il2cpp::create_object<app::InternalSerializerTypeE__Enum>(get_class());
        }
    } // namespace InternalSerializerTypeE__Enum
} // namespace app::classes::types
