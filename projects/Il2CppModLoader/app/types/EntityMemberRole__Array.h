#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityMemberRole__Array {
        namespace {
            inline app::EntityMemberRole__Array__Class* type_info_ref = nullptr;
        }
        inline app::EntityMemberRole__Array__Class** type_info = &type_info_ref;
        inline app::EntityMemberRole__Array__Class* get_class() {
            return il2cpp::get_class<app::EntityMemberRole__Array__Class>(type_info, "PlayFab.GroupsModels", "EntityMemberRole[]");
        }
        inline app::EntityMemberRole__Array* create() {
            return il2cpp::create_object<app::EntityMemberRole__Array>(get_class());
        }
    } // namespace EntityMemberRole__Array
} // namespace app::classes::types
