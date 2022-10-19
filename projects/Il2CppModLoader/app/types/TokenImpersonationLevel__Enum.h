#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TokenImpersonationLevel__Enum {
        namespace {
            inline app::TokenImpersonationLevel__Enum__Class* type_info_ref = nullptr;
        }
        inline app::TokenImpersonationLevel__Enum__Class** type_info = &type_info_ref;
        inline app::TokenImpersonationLevel__Enum__Class* get_class() {
            return il2cpp::get_class<app::TokenImpersonationLevel__Enum__Class>(type_info, "System.Security.Principal", "TokenImpersonationLevel");
        }
        inline app::TokenImpersonationLevel__Enum* create() {
            return il2cpp::create_object<app::TokenImpersonationLevel__Enum>(get_class());
        }
    } // namespace TokenImpersonationLevel__Enum
} // namespace app::classes::types
