#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData {
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Class** type_info = (app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Class**)(modloader::win::memory::resolve_rva(0x0472DB80));
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Class>(type_info, "Moon.EffectsFramework", "MoonEffectGenericRevertibleData", "MoonEffectRevertibleRendererData");
        }
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData* create() {
            return il2cpp::create_object<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData>(get_class());
        }
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Array>(get_class(), size);
        }
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Array* create_array(const std::vector<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData*>& items) {
            return il2cpp::array_new<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Array>(get_class(), items);
        }
    } // namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData
} // namespace app::classes::types
