#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DelegateSerializationHolder {
        namespace {
            inline app::DelegateSerializationHolder__Class* type_info_ref = nullptr;
        }
        inline app::DelegateSerializationHolder__Class** type_info = &type_info_ref;
        inline app::DelegateSerializationHolder__Class* get_class() {
            return il2cpp::get_class<app::DelegateSerializationHolder__Class>(type_info, "System", "DelegateSerializationHolder");
        }
        inline app::DelegateSerializationHolder* create() {
            return il2cpp::create_object<app::DelegateSerializationHolder>(get_class());
        }
    } // namespace DelegateSerializationHolder
} // namespace app::classes::types
