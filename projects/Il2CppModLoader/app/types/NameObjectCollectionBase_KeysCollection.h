#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NameObjectCollectionBase_KeysCollection {
        inline app::NameObjectCollectionBase_KeysCollection__Class** type_info = (app::NameObjectCollectionBase_KeysCollection__Class**)(modloader::win::memory::resolve_rva(0x04732560));
        inline app::NameObjectCollectionBase_KeysCollection__Class* get_class() {
            return il2cpp::get_nested_class<app::NameObjectCollectionBase_KeysCollection__Class>(type_info, "System.Collections.Specialized", "NameObjectCollectionBase", "KeysCollection");
        }
        inline app::NameObjectCollectionBase_KeysCollection* create() {
            return il2cpp::create_object<app::NameObjectCollectionBase_KeysCollection>(get_class());
        }
    } // namespace NameObjectCollectionBase_KeysCollection
} // namespace app::classes::types
