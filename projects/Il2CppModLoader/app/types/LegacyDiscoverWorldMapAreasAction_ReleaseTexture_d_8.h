#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyDiscoverWorldMapAreasAction_ReleaseTexture_d_8 {
        inline app::LegacyDiscoverWorldMapAreasAction_ReleaseTexture_d_8__Class** type_info = (app::LegacyDiscoverWorldMapAreasAction_ReleaseTexture_d_8__Class**)(modloader::win::memory::resolve_rva(0x04754678));
        inline app::LegacyDiscoverWorldMapAreasAction_ReleaseTexture_d_8__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyDiscoverWorldMapAreasAction_ReleaseTexture_d_8__Class>(type_info, "", "LegacyDiscoverWorldMapAreasAction", "<ReleaseTexture>d__8");
        }
        inline app::LegacyDiscoverWorldMapAreasAction_ReleaseTexture_d_8* create() {
            return il2cpp::create_object<app::LegacyDiscoverWorldMapAreasAction_ReleaseTexture_d_8>(get_class());
        }
    } // namespace LegacyDiscoverWorldMapAreasAction_ReleaseTexture_d_8
} // namespace app::classes::types
