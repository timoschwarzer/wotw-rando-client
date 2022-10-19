#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SetDemoPlaytimeAction {
        namespace {
            inline app::SetDemoPlaytimeAction__Class* type_info_ref = nullptr;
        }
        inline app::SetDemoPlaytimeAction__Class** type_info = &type_info_ref;
        inline app::SetDemoPlaytimeAction__Class* get_class() {
            return il2cpp::get_class<app::SetDemoPlaytimeAction__Class>(type_info, "", "SetDemoPlaytimeAction");
        }
        inline app::SetDemoPlaytimeAction* create() {
            return il2cpp::create_object<app::SetDemoPlaytimeAction>(get_class());
        }
    } // namespace SetDemoPlaytimeAction
} // namespace app::classes::types
