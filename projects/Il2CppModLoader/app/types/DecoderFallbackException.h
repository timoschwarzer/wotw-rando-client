#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DecoderFallbackException {
        inline app::DecoderFallbackException__Class** type_info = (app::DecoderFallbackException__Class**)(modloader::win::memory::resolve_rva(0x04770318));
        inline app::DecoderFallbackException__Class* get_class() {
            return il2cpp::get_class<app::DecoderFallbackException__Class>(type_info, "System.Text", "DecoderFallbackException");
        }
        inline app::DecoderFallbackException* create() {
            return il2cpp::create_object<app::DecoderFallbackException>(get_class());
        }
    } // namespace DecoderFallbackException
} // namespace app::classes::types
