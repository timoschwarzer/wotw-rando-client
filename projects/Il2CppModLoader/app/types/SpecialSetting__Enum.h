#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpecialSetting__Enum {
        namespace {
            inline app::SpecialSetting__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SpecialSetting__Enum__Class** type_info = &type_info_ref;
        inline app::SpecialSetting__Enum__Class* get_class() {
            return il2cpp::get_class<app::SpecialSetting__Enum__Class>(type_info, "System.Configuration", "SpecialSetting");
        }
        inline app::SpecialSetting__Enum* create() {
            return il2cpp::create_object<app::SpecialSetting__Enum>(get_class());
        }
    } // namespace SpecialSetting__Enum
} // namespace app::classes::types
