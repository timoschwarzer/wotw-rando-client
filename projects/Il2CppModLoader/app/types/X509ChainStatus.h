#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace X509ChainStatus {
        inline app::X509ChainStatus__Class** type_info = (app::X509ChainStatus__Class**)(modloader::win::memory::resolve_rva(0x047942D0));
        inline app::X509ChainStatus__Class* get_class() {
            return il2cpp::get_class<app::X509ChainStatus__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509ChainStatus");
        }
        inline app::X509ChainStatus* create() {
            return il2cpp::create_object<app::X509ChainStatus>(get_class());
        }
        inline app::X509ChainStatus__Boxed* box(app::X509ChainStatus value) {
            return il2cpp::box_value<app::X509ChainStatus__Boxed>(get_class(), value);
        }
        inline app::X509ChainStatus__Array* create_array(int size) {
            return il2cpp::array_new<app::X509ChainStatus__Array>(get_class(), size);
        }
        inline app::X509ChainStatus__Array* create_array(const std::vector<app::X509ChainStatus>& items) {
            return il2cpp::array_new<app::X509ChainStatus__Array>(get_class(), items);
        }
    } // namespace X509ChainStatus
} // namespace app::classes::types
