#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RecorderMessageInputUI {
        namespace {
            inline app::RecorderMessageInputUI__Class* type_info_ref = nullptr;
        }
        inline app::RecorderMessageInputUI__Class** type_info = &type_info_ref;
        inline app::RecorderMessageInputUI__Class* get_class() {
            return il2cpp::get_class<app::RecorderMessageInputUI__Class>(type_info, "", "RecorderMessageInputUI");
        }
        inline app::RecorderMessageInputUI* create() {
            return il2cpp::create_object<app::RecorderMessageInputUI>(get_class());
        }
    } // namespace RecorderMessageInputUI
} // namespace app::classes::types
