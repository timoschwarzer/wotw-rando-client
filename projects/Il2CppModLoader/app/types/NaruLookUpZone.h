#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NaruLookUpZone {
        inline app::NaruLookUpZone__Class** type_info = (app::NaruLookUpZone__Class**)(modloader::win::memory::resolve_rva(0x0475E0D8));
        inline app::NaruLookUpZone__Class* get_class() {
            return il2cpp::get_class<app::NaruLookUpZone__Class>(type_info, "", "NaruLookUpZone");
        }
        inline app::NaruLookUpZone* create() {
            return il2cpp::create_object<app::NaruLookUpZone>(get_class());
        }
        inline app::NaruLookUpZone__Array* create_array(int size) {
            return il2cpp::array_new<app::NaruLookUpZone__Array>(get_class(), size);
        }
        inline app::NaruLookUpZone__Array* create_array(const std::vector<app::NaruLookUpZone*>& items) {
            return il2cpp::array_new<app::NaruLookUpZone__Array>(get_class(), items);
        }
    } // namespace NaruLookUpZone
} // namespace app::classes::types
