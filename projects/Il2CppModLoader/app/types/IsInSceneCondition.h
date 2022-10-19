#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IsInSceneCondition {
        namespace {
            inline app::IsInSceneCondition__Class* type_info_ref = nullptr;
        }
        inline app::IsInSceneCondition__Class** type_info = &type_info_ref;
        inline app::IsInSceneCondition__Class* get_class() {
            return il2cpp::get_class<app::IsInSceneCondition__Class>(type_info, "", "IsInSceneCondition");
        }
        inline app::IsInSceneCondition* create() {
            return il2cpp::create_object<app::IsInSceneCondition>(get_class());
        }
    } // namespace IsInSceneCondition
} // namespace app::classes::types
