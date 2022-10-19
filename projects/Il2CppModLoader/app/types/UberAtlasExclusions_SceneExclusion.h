#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberAtlasExclusions_SceneExclusion {
        inline app::UberAtlasExclusions_SceneExclusion__Class** type_info = (app::UberAtlasExclusions_SceneExclusion__Class**)(modloader::win::memory::resolve_rva(0x0474D048));
        inline app::UberAtlasExclusions_SceneExclusion__Class* get_class() {
            return il2cpp::get_nested_class<app::UberAtlasExclusions_SceneExclusion__Class>(type_info, "", "UberAtlasExclusions", "SceneExclusion");
        }
        inline app::UberAtlasExclusions_SceneExclusion* create() {
            return il2cpp::create_object<app::UberAtlasExclusions_SceneExclusion>(get_class());
        }
        inline app::UberAtlasExclusions_SceneExclusion__Boxed* box(app::UberAtlasExclusions_SceneExclusion value) {
            return il2cpp::box_value<app::UberAtlasExclusions_SceneExclusion__Boxed>(get_class(), value);
        }
        inline app::UberAtlasExclusions_SceneExclusion__Array* create_array(int size) {
            return il2cpp::array_new<app::UberAtlasExclusions_SceneExclusion__Array>(get_class(), size);
        }
        inline app::UberAtlasExclusions_SceneExclusion__Array* create_array(const std::vector<app::UberAtlasExclusions_SceneExclusion>& items) {
            return il2cpp::array_new<app::UberAtlasExclusions_SceneExclusion__Array>(get_class(), items);
        }
    } // namespace UberAtlasExclusions_SceneExclusion
} // namespace app::classes::types
