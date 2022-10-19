#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InternalObjectTypeE__Enum {
        inline app::InternalObjectTypeE__Enum__Class** type_info = (app::InternalObjectTypeE__Enum__Class**)(modloader::win::memory::resolve_rva(0x04702FB0));
        inline app::InternalObjectTypeE__Enum__Class* get_class() {
            return il2cpp::get_class<app::InternalObjectTypeE__Enum__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "InternalObjectTypeE");
        }
        inline app::InternalObjectTypeE__Enum* create() {
            return il2cpp::create_object<app::InternalObjectTypeE__Enum>(get_class());
        }
    } // namespace InternalObjectTypeE__Enum
} // namespace app::classes::types
