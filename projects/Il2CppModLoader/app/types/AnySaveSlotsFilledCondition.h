#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnySaveSlotsFilledCondition {
        namespace {
            inline app::AnySaveSlotsFilledCondition__Class* type_info_ref = nullptr;
        }
        inline app::AnySaveSlotsFilledCondition__Class** type_info = &type_info_ref;
        inline app::AnySaveSlotsFilledCondition__Class* get_class() {
            return il2cpp::get_class<app::AnySaveSlotsFilledCondition__Class>(type_info, "", "AnySaveSlotsFilledCondition");
        }
        inline app::AnySaveSlotsFilledCondition* create() {
            return il2cpp::create_object<app::AnySaveSlotsFilledCondition>(get_class());
        }
    } // namespace AnySaveSlotsFilledCondition
} // namespace app::classes::types
