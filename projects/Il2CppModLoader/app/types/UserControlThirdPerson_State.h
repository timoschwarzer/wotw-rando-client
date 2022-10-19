#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UserControlThirdPerson_State {
        namespace {
            inline app::UserControlThirdPerson_State__Class* type_info_ref = nullptr;
        }
        inline app::UserControlThirdPerson_State__Class** type_info = &type_info_ref;
        inline app::UserControlThirdPerson_State__Class* get_class() {
            return il2cpp::get_nested_class<app::UserControlThirdPerson_State__Class>(type_info, "RootMotion.Demos", "UserControlThirdPerson", "State");
        }
        inline app::UserControlThirdPerson_State* create() {
            return il2cpp::create_object<app::UserControlThirdPerson_State>(get_class());
        }
        inline app::UserControlThirdPerson_State__Boxed* box(app::UserControlThirdPerson_State value) {
            return il2cpp::box_value<app::UserControlThirdPerson_State__Boxed>(get_class(), value);
        }
    } // namespace UserControlThirdPerson_State
} // namespace app::classes::types
