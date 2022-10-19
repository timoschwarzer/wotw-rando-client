#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XUserChangeEvent__Enum {
        inline app::XUserChangeEvent__Enum__Class** type_info = (app::XUserChangeEvent__Enum__Class**)(modloader::win::memory::resolve_rva(0x04702E90));
        inline app::XUserChangeEvent__Enum__Class* get_class() {
            return il2cpp::get_class<app::XUserChangeEvent__Enum__Class>(type_info, "XGamingRuntime", "XUserChangeEvent");
        }
        inline app::XUserChangeEvent__Enum* create() {
            return il2cpp::create_object<app::XUserChangeEvent__Enum>(get_class());
        }
    } // namespace XUserChangeEvent__Enum
} // namespace app::classes::types
