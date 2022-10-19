#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShowWorldMapObjectiveAction {
        namespace {
            inline app::ShowWorldMapObjectiveAction__Class* type_info_ref = nullptr;
        }
        inline app::ShowWorldMapObjectiveAction__Class** type_info = &type_info_ref;
        inline app::ShowWorldMapObjectiveAction__Class* get_class() {
            return il2cpp::get_class<app::ShowWorldMapObjectiveAction__Class>(type_info, "", "ShowWorldMapObjectiveAction");
        }
        inline app::ShowWorldMapObjectiveAction* create() {
            return il2cpp::create_object<app::ShowWorldMapObjectiveAction>(get_class());
        }
    } // namespace ShowWorldMapObjectiveAction
} // namespace app::classes::types
