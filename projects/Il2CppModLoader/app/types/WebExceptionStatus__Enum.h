#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WebExceptionStatus__Enum {
        inline app::WebExceptionStatus__Enum__Class** type_info = (app::WebExceptionStatus__Enum__Class**)(modloader::win::memory::resolve_rva(0x04707668));
        inline app::WebExceptionStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::WebExceptionStatus__Enum__Class>(type_info, "System.Net", "WebExceptionStatus");
        }
        inline app::WebExceptionStatus__Enum* create() {
            return il2cpp::create_object<app::WebExceptionStatus__Enum>(get_class());
        }
    } // namespace WebExceptionStatus__Enum
} // namespace app::classes::types
