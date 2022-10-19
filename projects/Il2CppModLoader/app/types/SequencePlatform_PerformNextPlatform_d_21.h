#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SequencePlatform_PerformNextPlatform_d_21 {
        inline app::SequencePlatform_PerformNextPlatform_d_21__Class** type_info = (app::SequencePlatform_PerformNextPlatform_d_21__Class**)(modloader::win::memory::resolve_rva(0x0470C628));
        inline app::SequencePlatform_PerformNextPlatform_d_21__Class* get_class() {
            return il2cpp::get_nested_class<app::SequencePlatform_PerformNextPlatform_d_21__Class>(type_info, "", "SequencePlatform", "<PerformNextPlatform>d__21");
        }
        inline app::SequencePlatform_PerformNextPlatform_d_21* create() {
            return il2cpp::create_object<app::SequencePlatform_PerformNextPlatform_d_21>(get_class());
        }
    } // namespace SequencePlatform_PerformNextPlatform_d_21
} // namespace app::classes::types
