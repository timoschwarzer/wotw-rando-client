#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MultiplyLayerModifier {
        namespace {
            inline app::MultiplyLayerModifier__Class* type_info_ref = nullptr;
        }
        inline app::MultiplyLayerModifier__Class** type_info = &type_info_ref;
        inline app::MultiplyLayerModifier__Class* get_class() {
            return il2cpp::get_class<app::MultiplyLayerModifier__Class>(type_info, "", "MultiplyLayerModifier");
        }
        inline app::MultiplyLayerModifier* create() {
            return il2cpp::create_object<app::MultiplyLayerModifier>(get_class());
        }
        inline app::MultiplyLayerModifier__Array* create_array(int size) {
            return il2cpp::array_new<app::MultiplyLayerModifier__Array>(get_class(), size);
        }
        inline app::MultiplyLayerModifier__Array* create_array(const std::vector<app::MultiplyLayerModifier*>& items) {
            return il2cpp::array_new<app::MultiplyLayerModifier__Array>(get_class(), items);
        }
    } // namespace MultiplyLayerModifier
} // namespace app::classes::types
