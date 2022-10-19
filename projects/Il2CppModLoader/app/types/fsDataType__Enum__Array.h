#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace fsDataType__Enum__Array {
        inline app::fsDataType__Enum__Array__Class** type_info = (app::fsDataType__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04746ED0));
        inline app::fsDataType__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::fsDataType__Enum__Array__Class>(type_info, "FullSerializer", "fsDataType[]");
        }
        inline app::fsDataType__Enum__Array* create() {
            return il2cpp::create_object<app::fsDataType__Enum__Array>(get_class());
        }
    } // namespace fsDataType__Enum__Array
} // namespace app::classes::types
