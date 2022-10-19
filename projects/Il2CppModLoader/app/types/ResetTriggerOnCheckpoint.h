#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ResetTriggerOnCheckpoint {
        namespace {
            inline app::ResetTriggerOnCheckpoint__Class* type_info_ref = nullptr;
        }
        inline app::ResetTriggerOnCheckpoint__Class** type_info = &type_info_ref;
        inline app::ResetTriggerOnCheckpoint__Class* get_class() {
            return il2cpp::get_class<app::ResetTriggerOnCheckpoint__Class>(type_info, "", "ResetTriggerOnCheckpoint");
        }
        inline app::ResetTriggerOnCheckpoint* create() {
            return il2cpp::create_object<app::ResetTriggerOnCheckpoint>(get_class());
        }
    } // namespace ResetTriggerOnCheckpoint
} // namespace app::classes::types
