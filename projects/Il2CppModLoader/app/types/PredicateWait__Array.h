#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PredicateWait__Array {
        namespace {
            inline app::PredicateWait__Array__Class* type_info_ref = nullptr;
        }
        inline app::PredicateWait__Array__Class** type_info = &type_info_ref;
        inline app::PredicateWait__Array__Class* get_class() {
            return il2cpp::get_class<app::PredicateWait__Array__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "PredicateWait[]");
        }
        inline app::PredicateWait__Array* create() {
            return il2cpp::create_object<app::PredicateWait__Array>(get_class());
        }
    } // namespace PredicateWait__Array
} // namespace app::classes::types
