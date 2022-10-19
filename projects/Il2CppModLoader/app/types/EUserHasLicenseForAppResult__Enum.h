#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EUserHasLicenseForAppResult__Enum {
        namespace {
            inline app::EUserHasLicenseForAppResult__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EUserHasLicenseForAppResult__Enum__Class** type_info = &type_info_ref;
        inline app::EUserHasLicenseForAppResult__Enum__Class* get_class() {
            return il2cpp::get_class<app::EUserHasLicenseForAppResult__Enum__Class>(type_info, "Steamworks", "EUserHasLicenseForAppResult");
        }
        inline app::EUserHasLicenseForAppResult__Enum* create() {
            return il2cpp::create_object<app::EUserHasLicenseForAppResult__Enum>(get_class());
        }
    } // namespace EUserHasLicenseForAppResult__Enum
} // namespace app::classes::types
