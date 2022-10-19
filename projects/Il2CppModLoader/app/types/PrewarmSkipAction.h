#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PrewarmSkipAction {
        namespace {
            inline app::PrewarmSkipAction__Class* type_info_ref = nullptr;
        }
        inline app::PrewarmSkipAction__Class** type_info = &type_info_ref;
        inline app::PrewarmSkipAction__Class* get_class() {
            return il2cpp::get_class<app::PrewarmSkipAction__Class>(type_info, "", "PrewarmSkipAction");
        }
        inline app::PrewarmSkipAction* create() {
            return il2cpp::create_object<app::PrewarmSkipAction>(get_class());
        }
    } // namespace PrewarmSkipAction
} // namespace app::classes::types
