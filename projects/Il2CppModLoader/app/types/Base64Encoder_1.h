#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Base64Encoder_1 {
        inline app::Base64Encoder_1__Class** type_info = (app::Base64Encoder_1__Class**)(modloader::win::memory::resolve_rva(0x047737C0));
        inline app::Base64Encoder_1__Class* get_class() {
            return il2cpp::get_class<app::Base64Encoder_1__Class>(type_info, "Newtonsoft.Json.Utilities", "Base64Encoder");
        }
        inline app::Base64Encoder_1* create() {
            return il2cpp::create_object<app::Base64Encoder_1>(get_class());
        }
    } // namespace Base64Encoder_1
} // namespace app::classes::types
