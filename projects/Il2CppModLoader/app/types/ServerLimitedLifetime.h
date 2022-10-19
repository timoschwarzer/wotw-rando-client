#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ServerLimitedLifetime {
        namespace {
            inline app::ServerLimitedLifetime__Class* type_info_ref = nullptr;
        }
        inline app::ServerLimitedLifetime__Class** type_info = &type_info_ref;
        inline app::ServerLimitedLifetime__Class* get_class() {
            return il2cpp::get_class<app::ServerLimitedLifetime__Class>(type_info, "", "ServerLimitedLifetime");
        }
        inline app::ServerLimitedLifetime* create() {
            return il2cpp::create_object<app::ServerLimitedLifetime>(get_class());
        }
    } // namespace ServerLimitedLifetime
} // namespace app::classes::types
