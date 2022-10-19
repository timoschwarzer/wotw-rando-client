#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ICertificateValidator2 {
        inline app::ICertificateValidator2__Class** type_info = (app::ICertificateValidator2__Class**)(modloader::win::memory::resolve_rva(0x04794CD0));
        inline app::ICertificateValidator2__Class* get_class() {
            return il2cpp::get_class<app::ICertificateValidator2__Class>(type_info, "Mono.Security.Interface", "ICertificateValidator2");
        }
    } // namespace ICertificateValidator2
} // namespace app::classes::types
