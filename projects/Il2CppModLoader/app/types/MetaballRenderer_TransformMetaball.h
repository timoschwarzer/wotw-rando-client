#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MetaballRenderer_TransformMetaball {
        namespace {
            inline app::MetaballRenderer_TransformMetaball__Class* type_info_ref = nullptr;
        }
        inline app::MetaballRenderer_TransformMetaball__Class** type_info = &type_info_ref;
        inline app::MetaballRenderer_TransformMetaball__Class* get_class() {
            return il2cpp::get_nested_class<app::MetaballRenderer_TransformMetaball__Class>(type_info, "Metaballs2D", "MetaballRenderer", "TransformMetaball");
        }
        inline app::MetaballRenderer_TransformMetaball* create() {
            return il2cpp::create_object<app::MetaballRenderer_TransformMetaball>(get_class());
        }
        inline app::MetaballRenderer_TransformMetaball__Array* create_array(int size) {
            return il2cpp::array_new<app::MetaballRenderer_TransformMetaball__Array>(get_class(), size);
        }
        inline app::MetaballRenderer_TransformMetaball__Array* create_array(const std::vector<app::MetaballRenderer_TransformMetaball*>& items) {
            return il2cpp::array_new<app::MetaballRenderer_TransformMetaball__Array>(get_class(), items);
        }
    } // namespace MetaballRenderer_TransformMetaball
} // namespace app::classes::types
