#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerInRangeChecker {
        namespace {
            inline app::PlayerInRangeChecker__Class* type_info_ref = nullptr;
        }
        inline app::PlayerInRangeChecker__Class** type_info = &type_info_ref;
        inline app::PlayerInRangeChecker__Class* get_class() {
            return il2cpp::get_class<app::PlayerInRangeChecker__Class>(type_info, "", "PlayerInRangeChecker");
        }
        inline app::PlayerInRangeChecker* create() {
            return il2cpp::create_object<app::PlayerInRangeChecker>(get_class());
        }
    } // namespace PlayerInRangeChecker
} // namespace app::classes::types
