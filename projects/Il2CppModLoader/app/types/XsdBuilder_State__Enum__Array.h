#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XsdBuilder_State__Enum__Array {
        inline app::XsdBuilder_State__Enum__Array__Class** type_info = (app::XsdBuilder_State__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x0471BD90));
        inline app::XsdBuilder_State__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::XsdBuilder_State__Enum__Array__Class>(type_info, "System.Xml.Schema", "XsdBuilder+State[]");
        }
        inline app::XsdBuilder_State__Enum__Array* create() {
            return il2cpp::create_object<app::XsdBuilder_State__Enum__Array>(get_class());
        }
    } // namespace XsdBuilder_State__Enum__Array
} // namespace app::classes::types
