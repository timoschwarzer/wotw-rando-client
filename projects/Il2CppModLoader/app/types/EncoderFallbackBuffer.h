#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EncoderFallbackBuffer {
        namespace {
            inline app::EncoderFallbackBuffer__Class* type_info_ref = nullptr;
        }
        inline app::EncoderFallbackBuffer__Class** type_info = &type_info_ref;
        inline app::EncoderFallbackBuffer__Class* get_class() {
            return il2cpp::get_class<app::EncoderFallbackBuffer__Class>(type_info, "System.Text", "EncoderFallbackBuffer");
        }
        inline app::EncoderFallbackBuffer* create() {
            return il2cpp::create_object<app::EncoderFallbackBuffer>(get_class());
        }
    } // namespace EncoderFallbackBuffer
} // namespace app::classes::types
