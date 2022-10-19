#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShowRaceFinishMessageAction {
        namespace {
            inline app::ShowRaceFinishMessageAction__Class* type_info_ref = nullptr;
        }
        inline app::ShowRaceFinishMessageAction__Class** type_info = &type_info_ref;
        inline app::ShowRaceFinishMessageAction__Class* get_class() {
            return il2cpp::get_class<app::ShowRaceFinishMessageAction__Class>(type_info, "", "ShowRaceFinishMessageAction");
        }
        inline app::ShowRaceFinishMessageAction* create() {
            return il2cpp::create_object<app::ShowRaceFinishMessageAction>(get_class());
        }
    } // namespace ShowRaceFinishMessageAction
} // namespace app::classes::types
