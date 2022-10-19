#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VolumeEffect_c {
        inline app::VolumeEffect_c__Class** type_info = (app::VolumeEffect_c__Class**)(modloader::win::memory::resolve_rva(0x04755E28));
        inline app::VolumeEffect_c__Class* get_class() {
            return il2cpp::get_nested_class<app::VolumeEffect_c__Class>(type_info, "AmplifyColor", "VolumeEffect", "<>c");
        }
        inline app::VolumeEffect_c* create() {
            return il2cpp::create_object<app::VolumeEffect_c>(get_class());
        }
    } // namespace VolumeEffect_c
} // namespace app::classes::types
