#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AxisAlignedBox__Array {
        namespace {
            inline app::AxisAlignedBox__Array__Class* type_info_ref = nullptr;
        }
        inline app::AxisAlignedBox__Array__Class** type_info = &type_info_ref;
        inline app::AxisAlignedBox__Array__Class* get_class() {
            return il2cpp::get_class<app::AxisAlignedBox__Array__Class>(type_info, "Moon", "AxisAlignedBox[]");
        }
        inline app::AxisAlignedBox__Array* create() {
            return il2cpp::create_object<app::AxisAlignedBox__Array>(get_class());
        }
    } // namespace AxisAlignedBox__Array
} // namespace app::classes::types
