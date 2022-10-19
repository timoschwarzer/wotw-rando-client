#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IEventDescriptor {
        inline app::IEventDescriptor__Class** type_info = (app::IEventDescriptor__Class**)(modloader::win::memory::resolve_rva(0x04703BA8));
        inline app::IEventDescriptor__Class* get_class() {
            return il2cpp::get_class<app::IEventDescriptor__Class>(type_info, "Moon.Timeline", "IEventDescriptor");
        }
        inline app::IEventDescriptor__Array* create_array(int size) {
            return il2cpp::array_new<app::IEventDescriptor__Array>(get_class(), size);
        }
        inline app::IEventDescriptor__Array* create_array(const std::vector<app::IEventDescriptor*>& items) {
            return il2cpp::array_new<app::IEventDescriptor__Array>(get_class(), items);
        }
    } // namespace IEventDescriptor
} // namespace app::classes::types
