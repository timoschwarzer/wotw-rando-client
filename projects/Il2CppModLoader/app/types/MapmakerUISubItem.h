#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MapmakerUISubItem {
        namespace {
            inline app::MapmakerUISubItem__Class* type_info_ref = nullptr;
        }
        inline app::MapmakerUISubItem__Class** type_info = &type_info_ref;
        inline app::MapmakerUISubItem__Class* get_class() {
            return il2cpp::get_class<app::MapmakerUISubItem__Class>(type_info, "", "MapmakerUISubItem");
        }
        inline app::MapmakerUISubItem* create() {
            return il2cpp::create_object<app::MapmakerUISubItem>(get_class());
        }
    } // namespace MapmakerUISubItem
} // namespace app::classes::types
