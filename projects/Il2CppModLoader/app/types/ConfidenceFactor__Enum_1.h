#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConfidenceFactor__Enum_1 {
        inline app::ConfidenceFactor__Enum_1__Class** type_info = (app::ConfidenceFactor__Enum_1__Class**)(modloader::win::memory::resolve_rva(0x04714288));
        inline app::ConfidenceFactor__Enum_1__Class* get_class() {
            return il2cpp::get_class<app::ConfidenceFactor__Enum_1__Class>(type_info, "Mono.Math.Prime", "ConfidenceFactor");
        }
        inline app::ConfidenceFactor__Enum_1* create() {
            return il2cpp::create_object<app::ConfidenceFactor__Enum_1>(get_class());
        }
    } // namespace ConfidenceFactor__Enum_1
} // namespace app::classes::types
