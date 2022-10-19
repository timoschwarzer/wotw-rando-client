#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataObjectAttribute {
        inline app::DataObjectAttribute__Class** type_info = (app::DataObjectAttribute__Class**)(modloader::win::memory::resolve_rva(0x04754E08));
        inline app::DataObjectAttribute__Class* get_class() {
            return il2cpp::get_class<app::DataObjectAttribute__Class>(type_info, "System.ComponentModel", "DataObjectAttribute");
        }
        inline app::DataObjectAttribute* create() {
            return il2cpp::create_object<app::DataObjectAttribute>(get_class());
        }
    } // namespace DataObjectAttribute
} // namespace app::classes::types
