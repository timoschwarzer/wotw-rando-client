#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InternalCodePageDataItem__Array {
        inline app::InternalCodePageDataItem__Array__Class** type_info = (app::InternalCodePageDataItem__Array__Class**)(modloader::win::memory::resolve_rva(0x047539A8));
        inline app::InternalCodePageDataItem__Array__Class* get_class() {
            return il2cpp::get_class<app::InternalCodePageDataItem__Array__Class>(type_info, "System.Globalization", "InternalCodePageDataItem[]");
        }
        inline app::InternalCodePageDataItem__Array* create() {
            return il2cpp::create_object<app::InternalCodePageDataItem__Array>(get_class());
        }
    } // namespace InternalCodePageDataItem__Array
} // namespace app::classes::types
