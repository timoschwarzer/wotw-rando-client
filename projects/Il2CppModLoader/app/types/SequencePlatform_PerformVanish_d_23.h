#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SequencePlatform_PerformVanish_d_23 {
        inline app::SequencePlatform_PerformVanish_d_23__Class** type_info = (app::SequencePlatform_PerformVanish_d_23__Class**)(modloader::win::memory::resolve_rva(0x0473BCC8));
        inline app::SequencePlatform_PerformVanish_d_23__Class* get_class() {
            return il2cpp::get_nested_class<app::SequencePlatform_PerformVanish_d_23__Class>(type_info, "", "SequencePlatform", "<PerformVanish>d__23");
        }
        inline app::SequencePlatform_PerformVanish_d_23* create() {
            return il2cpp::create_object<app::SequencePlatform_PerformVanish_d_23>(get_class());
        }
    } // namespace SequencePlatform_PerformVanish_d_23
} // namespace app::classes::types
