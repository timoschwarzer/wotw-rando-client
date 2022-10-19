#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinHealthController {
        namespace {
            inline app::SeinHealthController__Class* type_info_ref = nullptr;
        }
        inline app::SeinHealthController__Class** type_info = &type_info_ref;
        inline app::SeinHealthController__Class* get_class() {
            return il2cpp::get_class<app::SeinHealthController__Class>(type_info, "", "SeinHealthController");
        }
        inline app::SeinHealthController* create() {
            return il2cpp::create_object<app::SeinHealthController>(get_class());
        }
    } // namespace SeinHealthController
} // namespace app::classes::types
