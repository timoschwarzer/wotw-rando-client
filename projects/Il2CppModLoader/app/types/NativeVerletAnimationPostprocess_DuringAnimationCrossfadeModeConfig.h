#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NativeVerletAnimationPostprocess_DuringAnimationCrossfadeModeConfig {
        inline app::NativeVerletAnimationPostprocess_DuringAnimationCrossfadeModeConfig__Class** type_info = (app::NativeVerletAnimationPostprocess_DuringAnimationCrossfadeModeConfig__Class**)(modloader::win::memory::resolve_rva(0x04752378));
        inline app::NativeVerletAnimationPostprocess_DuringAnimationCrossfadeModeConfig__Class* get_class() {
            return il2cpp::get_nested_class<app::NativeVerletAnimationPostprocess_DuringAnimationCrossfadeModeConfig__Class>(type_info, "Moon.Animation", "NativeVerletAnimationPostprocess", "DuringAnimationCrossfadeModeConfig");
        }
        inline app::NativeVerletAnimationPostprocess_DuringAnimationCrossfadeModeConfig* create() {
            return il2cpp::create_object<app::NativeVerletAnimationPostprocess_DuringAnimationCrossfadeModeConfig>(get_class());
        }
    } // namespace NativeVerletAnimationPostprocess_DuringAnimationCrossfadeModeConfig
} // namespace app::classes::types
