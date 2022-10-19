#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XalSignInProvider_c {
        inline app::XalSignInProvider_c__Class** type_info = (app::XalSignInProvider_c__Class**)(modloader::win::memory::resolve_rva(0x0470A688));
        inline app::XalSignInProvider_c__Class* get_class() {
            return il2cpp::get_nested_class<app::XalSignInProvider_c__Class>(type_info, "SystemIntegration", "XalSignInProvider", "<>c");
        }
        inline app::XalSignInProvider_c* create() {
            return il2cpp::create_object<app::XalSignInProvider_c>(get_class());
        }
    } // namespace XalSignInProvider_c
} // namespace app::classes::types
