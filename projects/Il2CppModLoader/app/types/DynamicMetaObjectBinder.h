#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DynamicMetaObjectBinder {
        namespace {
            inline app::DynamicMetaObjectBinder__Class* type_info_ref = nullptr;
        }
        inline app::DynamicMetaObjectBinder__Class** type_info = &type_info_ref;
        inline app::DynamicMetaObjectBinder__Class* get_class() {
            return il2cpp::get_class<app::DynamicMetaObjectBinder__Class>(type_info, "System.Dynamic", "DynamicMetaObjectBinder");
        }
        inline app::DynamicMetaObjectBinder* create() {
            return il2cpp::create_object<app::DynamicMetaObjectBinder>(get_class());
        }
    } // namespace DynamicMetaObjectBinder
} // namespace app::classes::types
