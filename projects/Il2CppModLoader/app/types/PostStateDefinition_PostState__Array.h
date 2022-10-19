#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PostStateDefinition_PostState__Array {
        namespace {
            inline app::PostStateDefinition_PostState__Array__Class* type_info_ref = nullptr;
        }
        inline app::PostStateDefinition_PostState__Array__Class** type_info = &type_info_ref;
        inline app::PostStateDefinition_PostState__Array__Class* get_class() {
            return il2cpp::get_class<app::PostStateDefinition_PostState__Array__Class>(type_info, "", "PostStateDefinition+PostState[]");
        }
        inline app::PostStateDefinition_PostState__Array* create() {
            return il2cpp::create_object<app::PostStateDefinition_PostState__Array>(get_class());
        }
    } // namespace PostStateDefinition_PostState__Array
} // namespace app::classes::types
