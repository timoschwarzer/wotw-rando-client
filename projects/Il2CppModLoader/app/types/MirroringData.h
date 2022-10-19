#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MirroringData {
        inline app::MirroringData__Class** type_info = (app::MirroringData__Class**)(modloader::win::memory::resolve_rva(0x04717BC0));
        inline app::MirroringData__Class* get_class() {
            return il2cpp::get_class<app::MirroringData__Class>(type_info, "", "MirroringData");
        }
        inline app::MirroringData* create() {
            return il2cpp::create_object<app::MirroringData>(get_class());
        }
        inline app::MirroringData__Array* create_array(int size) {
            return il2cpp::array_new<app::MirroringData__Array>(get_class(), size);
        }
        inline app::MirroringData__Array* create_array(const std::vector<app::MirroringData*>& items) {
            return il2cpp::array_new<app::MirroringData__Array>(get_class(), items);
        }
    } // namespace MirroringData
} // namespace app::classes::types
