#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AdditiveLayerDistortedModifier {
        namespace {
            inline app::AdditiveLayerDistortedModifier__Class* type_info_ref = nullptr;
        }
        inline app::AdditiveLayerDistortedModifier__Class** type_info = &type_info_ref;
        inline app::AdditiveLayerDistortedModifier__Class* get_class() {
            return il2cpp::get_class<app::AdditiveLayerDistortedModifier__Class>(type_info, "", "AdditiveLayerDistortedModifier");
        }
        inline app::AdditiveLayerDistortedModifier* create() {
            return il2cpp::create_object<app::AdditiveLayerDistortedModifier>(get_class());
        }
    } // namespace AdditiveLayerDistortedModifier
} // namespace app::classes::types
