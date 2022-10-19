#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HookPlant {
        namespace {
            inline app::HookPlant__Class* type_info_ref = nullptr;
        }
        inline app::HookPlant__Class** type_info = &type_info_ref;
        inline app::HookPlant__Class* get_class() {
            return il2cpp::get_class<app::HookPlant__Class>(type_info, "", "HookPlant");
        }
        inline app::HookPlant* create() {
            return il2cpp::create_object<app::HookPlant>(get_class());
        }
    } // namespace HookPlant
} // namespace app::classes::types
