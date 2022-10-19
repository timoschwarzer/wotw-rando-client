#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ICertificatePolicy {
        inline app::ICertificatePolicy__Class** type_info = (app::ICertificatePolicy__Class**)(modloader::win::memory::resolve_rva(0x047542B0));
        inline app::ICertificatePolicy__Class* get_class() {
            return il2cpp::get_class<app::ICertificatePolicy__Class>(type_info, "System.Net", "ICertificatePolicy");
        }
    } // namespace ICertificatePolicy
} // namespace app::classes::types
