#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinEnvironmentForceController {
        namespace {
            inline app::SeinEnvironmentForceController__Class* type_info_ref = nullptr;
        }
        inline app::SeinEnvironmentForceController__Class** type_info = &type_info_ref;
        inline app::SeinEnvironmentForceController__Class* get_class() {
            return il2cpp::get_class<app::SeinEnvironmentForceController__Class>(type_info, "", "SeinEnvironmentForceController");
        }
        inline app::SeinEnvironmentForceController* create() {
            return il2cpp::create_object<app::SeinEnvironmentForceController>(get_class());
        }
    } // namespace SeinEnvironmentForceController
} // namespace app::classes::types
