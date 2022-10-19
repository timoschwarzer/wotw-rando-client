#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyEntityDamageReciever {
        inline app::LegacyEntityDamageReciever__Class** type_info = (app::LegacyEntityDamageReciever__Class**)(modloader::win::memory::resolve_rva(0x04796C50));
        inline app::LegacyEntityDamageReciever__Class* get_class() {
            return il2cpp::get_class<app::LegacyEntityDamageReciever__Class>(type_info, "", "LegacyEntityDamageReciever");
        }
        inline app::LegacyEntityDamageReciever* create() {
            return il2cpp::create_object<app::LegacyEntityDamageReciever>(get_class());
        }
        inline app::LegacyEntityDamageReciever__Array* create_array(int size) {
            return il2cpp::array_new<app::LegacyEntityDamageReciever__Array>(get_class(), size);
        }
        inline app::LegacyEntityDamageReciever__Array* create_array(const std::vector<app::LegacyEntityDamageReciever*>& items) {
            return il2cpp::array_new<app::LegacyEntityDamageReciever__Array>(get_class(), items);
        }
    } // namespace LegacyEntityDamageReciever
} // namespace app::classes::types
