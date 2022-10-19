#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnityTls_unitytls_errorstate {
        namespace {
            inline app::UnityTls_unitytls_errorstate__Class* type_info_ref = nullptr;
        }
        inline app::UnityTls_unitytls_errorstate__Class** type_info = &type_info_ref;
        inline app::UnityTls_unitytls_errorstate__Class* get_class() {
            return il2cpp::get_nested_class<app::UnityTls_unitytls_errorstate__Class>(type_info, "Mono.Unity", "UnityTls", "unitytls_errorstate");
        }
        inline app::UnityTls_unitytls_errorstate* create() {
            return il2cpp::create_object<app::UnityTls_unitytls_errorstate>(get_class());
        }
        inline app::UnityTls_unitytls_errorstate__Boxed* box(app::UnityTls_unitytls_errorstate value) {
            return il2cpp::box_value<app::UnityTls_unitytls_errorstate__Boxed>(get_class(), value);
        }
    } // namespace UnityTls_unitytls_errorstate
} // namespace app::classes::types
