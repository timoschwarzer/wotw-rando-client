#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CommonUnixIPGlobalProperties {
        namespace {
            inline app::CommonUnixIPGlobalProperties__Class* type_info_ref = nullptr;
        }
        inline app::CommonUnixIPGlobalProperties__Class** type_info = &type_info_ref;
        inline app::CommonUnixIPGlobalProperties__Class* get_class() {
            return il2cpp::get_class<app::CommonUnixIPGlobalProperties__Class>(type_info, "System.Net.NetworkInformation", "CommonUnixIPGlobalProperties");
        }
        inline app::CommonUnixIPGlobalProperties* create() {
            return il2cpp::create_object<app::CommonUnixIPGlobalProperties>(get_class());
        }
    } // namespace CommonUnixIPGlobalProperties
} // namespace app::classes::types
