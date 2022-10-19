#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReferenceTester {
        namespace {
            inline app::ReferenceTester__Class* type_info_ref = nullptr;
        }
        inline app::ReferenceTester__Class** type_info = &type_info_ref;
        inline app::ReferenceTester__Class* get_class() {
            return il2cpp::get_class<app::ReferenceTester__Class>(type_info, "", "ReferenceTester");
        }
        inline app::ReferenceTester* create() {
            return il2cpp::create_object<app::ReferenceTester>(get_class());
        }
    } // namespace ReferenceTester
} // namespace app::classes::types
