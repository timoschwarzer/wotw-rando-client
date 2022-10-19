#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberPoolGroupWarmer__Array {
        namespace {
            inline app::UberPoolGroupWarmer__Array__Class* type_info_ref = nullptr;
        }
        inline app::UberPoolGroupWarmer__Array__Class** type_info = &type_info_ref;
        inline app::UberPoolGroupWarmer__Array__Class* get_class() {
            return il2cpp::get_class<app::UberPoolGroupWarmer__Array__Class>(type_info, "", "UberPoolGroupWarmer[]");
        }
        inline app::UberPoolGroupWarmer__Array* create() {
            return il2cpp::create_object<app::UberPoolGroupWarmer__Array>(get_class());
        }
    } // namespace UberPoolGroupWarmer__Array
} // namespace app::classes::types
