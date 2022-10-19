#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace fsData {
        inline app::fsData__Class** type_info = (app::fsData__Class**)(modloader::win::memory::resolve_rva(0x0476C358));
        inline app::fsData__Class* get_class() {
            return il2cpp::get_class<app::fsData__Class>(type_info, "FullSerializer", "fsData");
        }
        inline app::fsData* create() {
            return il2cpp::create_object<app::fsData>(get_class());
        }
        inline app::fsData__Array* create_array(int size) {
            return il2cpp::array_new<app::fsData__Array>(get_class(), size);
        }
        inline app::fsData__Array* create_array(const std::vector<app::fsData*>& items) {
            return il2cpp::array_new<app::fsData__Array>(get_class(), items);
        }
    } // namespace fsData
} // namespace app::classes::types
