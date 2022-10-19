#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EventInfo_1 {
        inline app::EventInfo_1__Class** type_info = (app::EventInfo_1__Class**)(modloader::win::memory::resolve_rva(0x04762A10));
        inline app::EventInfo_1__Class* get_class() {
            return il2cpp::get_class<app::EventInfo_1__Class>(type_info, "System.Reflection", "EventInfo");
        }
        inline app::EventInfo_1* create() {
            return il2cpp::create_object<app::EventInfo_1>(get_class());
        }
        inline app::EventInfo_1__Array* create_array(int size) {
            return il2cpp::array_new<app::EventInfo_1__Array>(get_class(), size);
        }
        inline app::EventInfo_1__Array* create_array(const std::vector<app::EventInfo_1*>& items) {
            return il2cpp::array_new<app::EventInfo_1__Array>(get_class(), items);
        }
    } // namespace EventInfo_1
} // namespace app::classes::types
