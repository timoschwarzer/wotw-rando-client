#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MothAggroState__Enum {
        namespace {
            inline app::MothAggroState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::MothAggroState__Enum__Class** type_info = &type_info_ref;
        inline app::MothAggroState__Enum__Class* get_class() {
            return il2cpp::get_class<app::MothAggroState__Enum__Class>(type_info, "", "MothAggroState");
        }
        inline app::MothAggroState__Enum* create() {
            return il2cpp::create_object<app::MothAggroState__Enum>(get_class());
        }
    } // namespace MothAggroState__Enum
} // namespace app::classes::types
