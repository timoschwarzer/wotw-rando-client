#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFovOffsetMixer {
        inline app::CameraFovOffsetMixer__Class** type_info = (app::CameraFovOffsetMixer__Class**)(modloader::win::memory::resolve_rva(0x04757060));
        inline app::CameraFovOffsetMixer__Class* get_class() {
            return il2cpp::get_class<app::CameraFovOffsetMixer__Class>(type_info, "", "CameraFovOffsetMixer");
        }
        inline app::CameraFovOffsetMixer* create() {
            return il2cpp::create_object<app::CameraFovOffsetMixer>(get_class());
        }
    } // namespace CameraFovOffsetMixer
} // namespace app::classes::types
