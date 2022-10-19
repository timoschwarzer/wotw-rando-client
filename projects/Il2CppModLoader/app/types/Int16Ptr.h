#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Int16Ptr {
        namespace {
            inline app::Int16Ptr__Class* type_info_ref = nullptr;
        }
        inline app::Int16Ptr__Class** type_info = &type_info_ref;
        inline app::Int16Ptr__Class* get_class() {
            return il2cpp::get_class<app::Int16Ptr__Class>(type_info, "System", "Int16*");
        }
        inline app::Int16Ptr* create() {
            return il2cpp::create_object<app::Int16Ptr>(get_class());
        }
    } // namespace Int16Ptr
} // namespace app::classes::types
