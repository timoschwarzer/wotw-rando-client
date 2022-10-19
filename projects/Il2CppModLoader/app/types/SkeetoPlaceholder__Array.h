#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SkeetoPlaceholder__Array {
        namespace {
            inline app::SkeetoPlaceholder__Array__Class* type_info_ref = nullptr;
        }
        inline app::SkeetoPlaceholder__Array__Class** type_info = &type_info_ref;
        inline app::SkeetoPlaceholder__Array__Class* get_class() {
            return il2cpp::get_class<app::SkeetoPlaceholder__Array__Class>(type_info, "", "SkeetoPlaceholder[]");
        }
        inline app::SkeetoPlaceholder__Array* create() {
            return il2cpp::create_object<app::SkeetoPlaceholder__Array>(get_class());
        }
    } // namespace SkeetoPlaceholder__Array
} // namespace app::classes::types
