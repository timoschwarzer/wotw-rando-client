#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiritLightRadialVisualAffector {
        inline app::SpiritLightRadialVisualAffector__Class** type_info = (app::SpiritLightRadialVisualAffector__Class**)(modloader::win::memory::resolve_rva(0x0475C368));
        inline app::SpiritLightRadialVisualAffector__Class* get_class() {
            return il2cpp::get_class<app::SpiritLightRadialVisualAffector__Class>(type_info, "", "SpiritLightRadialVisualAffector");
        }
        inline app::SpiritLightRadialVisualAffector* create() {
            return il2cpp::create_object<app::SpiritLightRadialVisualAffector>(get_class());
        }
        inline app::SpiritLightRadialVisualAffector__Array* create_array(int size) {
            return il2cpp::array_new<app::SpiritLightRadialVisualAffector__Array>(get_class(), size);
        }
        inline app::SpiritLightRadialVisualAffector__Array* create_array(const std::vector<app::SpiritLightRadialVisualAffector*>& items) {
            return il2cpp::array_new<app::SpiritLightRadialVisualAffector__Array>(get_class(), items);
        }
    } // namespace SpiritLightRadialVisualAffector
} // namespace app::classes::types
