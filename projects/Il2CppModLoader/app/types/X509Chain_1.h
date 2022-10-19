#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace X509Chain_1 {
        inline app::X509Chain_1__Class** type_info = (app::X509Chain_1__Class**)(modloader::win::memory::resolve_rva(0x04702D90));
        inline app::X509Chain_1__Class* get_class() {
            return il2cpp::get_class<app::X509Chain_1__Class>(type_info, "Mono.Security.X509", "X509Chain");
        }
        inline app::X509Chain_1* create() {
            return il2cpp::create_object<app::X509Chain_1>(get_class());
        }
    } // namespace X509Chain_1
} // namespace app::classes::types
