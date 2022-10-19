#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Test__Array {
        namespace {
            inline app::Test__Array__Class* type_info_ref = nullptr;
        }
        inline app::Test__Array__Class** type_info = &type_info_ref;
        inline app::Test__Array__Class* get_class() {
            return il2cpp::get_class<app::Test__Array__Class>(type_info, "", "Test[]");
        }
        inline app::Test__Array* create() {
            return il2cpp::create_object<app::Test__Array>(get_class());
        }
    } // namespace Test__Array
} // namespace app::classes::types
