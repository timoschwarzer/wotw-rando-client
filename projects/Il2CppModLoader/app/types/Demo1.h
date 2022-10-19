#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Demo1 {
        namespace {
            inline app::Demo1__Class* type_info_ref = nullptr;
        }
        inline app::Demo1__Class** type_info = &type_info_ref;
        inline app::Demo1__Class* get_class() {
            return il2cpp::get_class<app::Demo1__Class>(type_info, "BeautifyEffect", "Demo1");
        }
        inline app::Demo1* create() {
            return il2cpp::create_object<app::Demo1>(get_class());
        }
    } // namespace Demo1
} // namespace app::classes::types
