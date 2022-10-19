#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CFStreamClientContext {
        namespace {
            inline app::CFStreamClientContext__Class* type_info_ref = nullptr;
        }
        inline app::CFStreamClientContext__Class** type_info = &type_info_ref;
        inline app::CFStreamClientContext__Class* get_class() {
            return il2cpp::get_class<app::CFStreamClientContext__Class>(type_info, "Mono.Net", "CFStreamClientContext");
        }
        inline app::CFStreamClientContext* create() {
            return il2cpp::create_object<app::CFStreamClientContext>(get_class());
        }
        inline app::CFStreamClientContext__Boxed* box(app::CFStreamClientContext value) {
            return il2cpp::box_value<app::CFStreamClientContext__Boxed>(get_class(), value);
        }
    } // namespace CFStreamClientContext
} // namespace app::classes::types
