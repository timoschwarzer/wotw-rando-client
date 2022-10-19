#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkSettingsValidationHandler {
        namespace {
            inline app::AkSettingsValidationHandler__Class* type_info_ref = nullptr;
        }
        inline app::AkSettingsValidationHandler__Class** type_info = &type_info_ref;
        inline app::AkSettingsValidationHandler__Class* get_class() {
            return il2cpp::get_class<app::AkSettingsValidationHandler__Class>(type_info, "", "AkSettingsValidationHandler");
        }
        inline app::AkSettingsValidationHandler* create() {
            return il2cpp::create_object<app::AkSettingsValidationHandler>(get_class());
        }
    } // namespace AkSettingsValidationHandler
} // namespace app::classes::types
