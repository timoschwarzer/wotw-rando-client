#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FixupHolderList {
        inline app::FixupHolderList__Class** type_info = (app::FixupHolderList__Class**)(modloader::win::memory::resolve_rva(0x047909E8));
        inline app::FixupHolderList__Class* get_class() {
            return il2cpp::get_class<app::FixupHolderList__Class>(type_info, "System.Runtime.Serialization", "FixupHolderList");
        }
        inline app::FixupHolderList* create() {
            return il2cpp::create_object<app::FixupHolderList>(get_class());
        }
    } // namespace FixupHolderList
} // namespace app::classes::types
