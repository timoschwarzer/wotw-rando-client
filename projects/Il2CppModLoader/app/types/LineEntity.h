#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LineEntity {
        inline app::LineEntity__Class** type_info = (app::LineEntity__Class**)(modloader::win::memory::resolve_rva(0x04765460));
        inline app::LineEntity__Class* get_class() {
            return il2cpp::get_class<app::LineEntity__Class>(type_info, "Moon.VisualDebug", "LineEntity");
        }
        inline app::LineEntity* create() {
            return il2cpp::create_object<app::LineEntity>(get_class());
        }
        inline app::LineEntity__Array* create_array(int size) {
            return il2cpp::array_new<app::LineEntity__Array>(get_class(), size);
        }
        inline app::LineEntity__Array* create_array(const std::vector<app::LineEntity*>& items) {
            return il2cpp::array_new<app::LineEntity__Array>(get_class(), items);
        }
    } // namespace LineEntity
} // namespace app::classes::types
