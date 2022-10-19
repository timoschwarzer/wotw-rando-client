#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LocalDataStore {
        inline app::LocalDataStore__Class** type_info = (app::LocalDataStore__Class**)(modloader::win::memory::resolve_rva(0x04775E58));
        inline app::LocalDataStore__Class* get_class() {
            return il2cpp::get_class<app::LocalDataStore__Class>(type_info, "System", "LocalDataStore");
        }
        inline app::LocalDataStore* create() {
            return il2cpp::create_object<app::LocalDataStore>(get_class());
        }
        inline app::LocalDataStore__Array* create_array(int size) {
            return il2cpp::array_new<app::LocalDataStore__Array>(get_class(), size);
        }
        inline app::LocalDataStore__Array* create_array(const std::vector<app::LocalDataStore*>& items) {
            return il2cpp::array_new<app::LocalDataStore__Array>(get_class(), items);
        }
    } // namespace LocalDataStore
} // namespace app::classes::types
