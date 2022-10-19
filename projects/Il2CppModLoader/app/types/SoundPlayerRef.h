#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SoundPlayerRef {
        inline app::SoundPlayerRef__Class** type_info = (app::SoundPlayerRef__Class**)(modloader::win::memory::resolve_rva(0x0473B9A0));
        inline app::SoundPlayerRef__Class* get_class() {
            return il2cpp::get_class<app::SoundPlayerRef__Class>(type_info, "", "SoundPlayerRef");
        }
        inline app::SoundPlayerRef* create() {
            return il2cpp::create_object<app::SoundPlayerRef>(get_class());
        }
        inline app::SoundPlayerRef__Boxed* box(app::SoundPlayerRef value) {
            return il2cpp::box_value<app::SoundPlayerRef__Boxed>(get_class(), value);
        }
    } // namespace SoundPlayerRef
} // namespace app::classes::types
