#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShowPagesFinishedCondition {
        namespace {
            inline app::ShowPagesFinishedCondition__Class* type_info_ref = nullptr;
        }
        inline app::ShowPagesFinishedCondition__Class** type_info = &type_info_ref;
        inline app::ShowPagesFinishedCondition__Class* get_class() {
            return il2cpp::get_class<app::ShowPagesFinishedCondition__Class>(type_info, "", "ShowPagesFinishedCondition");
        }
        inline app::ShowPagesFinishedCondition* create() {
            return il2cpp::create_object<app::ShowPagesFinishedCondition>(get_class());
        }
    } // namespace ShowPagesFinishedCondition
} // namespace app::classes::types
