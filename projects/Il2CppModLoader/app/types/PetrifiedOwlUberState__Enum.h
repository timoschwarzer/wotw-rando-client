#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlUberState__Enum {
        namespace {
            inline app::PetrifiedOwlUberState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::PetrifiedOwlUberState__Enum__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlUberState__Enum__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlUberState__Enum__Class>(type_info, "PetrifiedOwlFeedingGrounds", "PetrifiedOwlUberState");
        }
        inline app::PetrifiedOwlUberState__Enum* create() {
            return il2cpp::create_object<app::PetrifiedOwlUberState__Enum>(get_class());
        }
    } // namespace PetrifiedOwlUberState__Enum
} // namespace app::classes::types
