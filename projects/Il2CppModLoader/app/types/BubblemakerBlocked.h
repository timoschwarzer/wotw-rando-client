#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BubblemakerBlocked {
        namespace {
            inline app::BubblemakerBlocked__Class* type_info_ref = nullptr;
        }
        inline app::BubblemakerBlocked__Class** type_info = &type_info_ref;
        inline app::BubblemakerBlocked__Class* get_class() {
            return il2cpp::get_class<app::BubblemakerBlocked__Class>(type_info, "", "BubblemakerBlocked");
        }
        inline app::BubblemakerBlocked* create() {
            return il2cpp::create_object<app::BubblemakerBlocked>(get_class());
        }
    } // namespace BubblemakerBlocked
} // namespace app::classes::types
