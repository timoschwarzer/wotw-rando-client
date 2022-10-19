#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimelineEntityRecord_EntityPlayState__Enum {
        namespace {
            inline app::TimelineEntityRecord_EntityPlayState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::TimelineEntityRecord_EntityPlayState__Enum__Class** type_info = &type_info_ref;
        inline app::TimelineEntityRecord_EntityPlayState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TimelineEntityRecord_EntityPlayState__Enum__Class>(type_info, "Moon.Timeline", "TimelineEntityRecord", "EntityPlayState");
        }
        inline app::TimelineEntityRecord_EntityPlayState__Enum* create() {
            return il2cpp::create_object<app::TimelineEntityRecord_EntityPlayState__Enum>(get_class());
        }
    } // namespace TimelineEntityRecord_EntityPlayState__Enum
} // namespace app::classes::types
