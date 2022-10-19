#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ControlListGridController {
        namespace {
            inline app::ControlListGridController__Class* type_info_ref = nullptr;
        }
        inline app::ControlListGridController__Class** type_info = &type_info_ref;
        inline app::ControlListGridController__Class* get_class() {
            return il2cpp::get_class<app::ControlListGridController__Class>(type_info, "", "ControlListGridController");
        }
        inline app::ControlListGridController* create() {
            return il2cpp::create_object<app::ControlListGridController>(get_class());
        }
    } // namespace ControlListGridController
} // namespace app::classes::types
