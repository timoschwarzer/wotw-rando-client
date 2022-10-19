#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WaitForActionToFinishAction {
        namespace {
            inline app::WaitForActionToFinishAction__Class* type_info_ref = nullptr;
        }
        inline app::WaitForActionToFinishAction__Class** type_info = &type_info_ref;
        inline app::WaitForActionToFinishAction__Class* get_class() {
            return il2cpp::get_class<app::WaitForActionToFinishAction__Class>(type_info, "", "WaitForActionToFinishAction");
        }
        inline app::WaitForActionToFinishAction* create() {
            return il2cpp::create_object<app::WaitForActionToFinishAction>(get_class());
        }
    } // namespace WaitForActionToFinishAction
} // namespace app::classes::types
