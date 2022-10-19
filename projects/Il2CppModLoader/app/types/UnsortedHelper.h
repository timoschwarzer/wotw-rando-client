#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnsortedHelper {
        namespace {
            inline app::UnsortedHelper__Class* type_info_ref = nullptr;
        }
        inline app::UnsortedHelper__Class** type_info = &type_info_ref;
        inline app::UnsortedHelper__Class* get_class() {
            return il2cpp::get_class<app::UnsortedHelper__Class>(type_info, "", "UnsortedHelper");
        }
        inline app::UnsortedHelper* create() {
            return il2cpp::create_object<app::UnsortedHelper>(get_class());
        }
    } // namespace UnsortedHelper
} // namespace app::classes::types
