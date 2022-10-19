#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SettingsSectionInternal {
        inline app::SettingsSectionInternal__Class** type_info = (app::SettingsSectionInternal__Class**)(modloader::win::memory::resolve_rva(0x04721D70));
        inline app::SettingsSectionInternal__Class* get_class() {
            return il2cpp::get_class<app::SettingsSectionInternal__Class>(type_info, "System.Net.Configuration", "SettingsSectionInternal");
        }
        inline app::SettingsSectionInternal* create() {
            return il2cpp::create_object<app::SettingsSectionInternal>(get_class());
        }
    } // namespace SettingsSectionInternal
} // namespace app::classes::types
