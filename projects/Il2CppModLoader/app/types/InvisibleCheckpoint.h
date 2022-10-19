#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InvisibleCheckpoint {
        inline app::InvisibleCheckpoint__Class** type_info = (app::InvisibleCheckpoint__Class**)(modloader::win::memory::resolve_rva(0x0475DF08));
        inline app::InvisibleCheckpoint__Class* get_class() {
            return il2cpp::get_class<app::InvisibleCheckpoint__Class>(type_info, "", "InvisibleCheckpoint");
        }
        inline app::InvisibleCheckpoint* create() {
            return il2cpp::create_object<app::InvisibleCheckpoint>(get_class());
        }
        inline app::InvisibleCheckpoint__Array* create_array(int size) {
            return il2cpp::array_new<app::InvisibleCheckpoint__Array>(get_class(), size);
        }
        inline app::InvisibleCheckpoint__Array* create_array(const std::vector<app::InvisibleCheckpoint*>& items) {
            return il2cpp::array_new<app::InvisibleCheckpoint__Array>(get_class(), items);
        }
    } // namespace InvisibleCheckpoint
} // namespace app::classes::types
