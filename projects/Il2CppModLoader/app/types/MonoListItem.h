#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MonoListItem {
        namespace {
            inline app::MonoListItem__Class* type_info_ref = nullptr;
        }
        inline app::MonoListItem__Class** type_info = &type_info_ref;
        inline app::MonoListItem__Class* get_class() {
            return il2cpp::get_class<app::MonoListItem__Class>(type_info, "System", "MonoListItem");
        }
        inline app::MonoListItem* create() {
            return il2cpp::create_object<app::MonoListItem>(get_class());
        }
    } // namespace MonoListItem
} // namespace app::classes::types
