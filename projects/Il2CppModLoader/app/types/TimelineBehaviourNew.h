#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimelineBehaviourNew {
        namespace {
            inline app::TimelineBehaviourNew__Class* type_info_ref = nullptr;
        }
        inline app::TimelineBehaviourNew__Class** type_info = &type_info_ref;
        inline app::TimelineBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::TimelineBehaviourNew__Class>(type_info, "", "TimelineBehaviourNew");
        }
        inline app::TimelineBehaviourNew* create() {
            return il2cpp::create_object<app::TimelineBehaviourNew>(get_class());
        }
    } // namespace TimelineBehaviourNew
} // namespace app::classes::types
