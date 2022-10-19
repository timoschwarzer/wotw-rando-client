#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EHTTPStatusCode__Enum {
        namespace {
            inline app::EHTTPStatusCode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EHTTPStatusCode__Enum__Class** type_info = &type_info_ref;
        inline app::EHTTPStatusCode__Enum__Class* get_class() {
            return il2cpp::get_class<app::EHTTPStatusCode__Enum__Class>(type_info, "Steamworks", "EHTTPStatusCode");
        }
        inline app::EHTTPStatusCode__Enum* create() {
            return il2cpp::create_object<app::EHTTPStatusCode__Enum>(get_class());
        }
    } // namespace EHTTPStatusCode__Enum
} // namespace app::classes::types
