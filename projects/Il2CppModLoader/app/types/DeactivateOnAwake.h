#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DeactivateOnAwake {
        namespace {
            inline app::DeactivateOnAwake__Class* type_info_ref = nullptr;
        }
        inline app::DeactivateOnAwake__Class** type_info = &type_info_ref;
        inline app::DeactivateOnAwake__Class* get_class() {
            return il2cpp::get_class<app::DeactivateOnAwake__Class>(type_info, "", "DeactivateOnAwake");
        }
        inline app::DeactivateOnAwake* create() {
            return il2cpp::create_object<app::DeactivateOnAwake>(get_class());
        }
    } // namespace DeactivateOnAwake
} // namespace app::classes::types
