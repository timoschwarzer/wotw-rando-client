#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GSPolicyResponse_t {
        namespace {
            inline app::GSPolicyResponse_t__Class* type_info_ref = nullptr;
        }
        inline app::GSPolicyResponse_t__Class** type_info = &type_info_ref;
        inline app::GSPolicyResponse_t__Class* get_class() {
            return il2cpp::get_class<app::GSPolicyResponse_t__Class>(type_info, "Steamworks", "GSPolicyResponse_t");
        }
        inline app::GSPolicyResponse_t* create() {
            return il2cpp::create_object<app::GSPolicyResponse_t>(get_class());
        }
        inline app::GSPolicyResponse_t__Boxed* box(app::GSPolicyResponse_t value) {
            return il2cpp::box_value<app::GSPolicyResponse_t__Boxed>(get_class(), value);
        }
    } // namespace GSPolicyResponse_t
} // namespace app::classes::types
