#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneUberStateGroup__Array {
        namespace {
            inline app::SceneUberStateGroup__Array__Class* type_info_ref = nullptr;
        }
        inline app::SceneUberStateGroup__Array__Class** type_info = &type_info_ref;
        inline app::SceneUberStateGroup__Array__Class* get_class() {
            return il2cpp::get_class<app::SceneUberStateGroup__Array__Class>(type_info, "Moon", "SceneUberStateGroup[]");
        }
        inline app::SceneUberStateGroup__Array* create() {
            return il2cpp::create_object<app::SceneUberStateGroup__Array>(get_class());
        }
    } // namespace SceneUberStateGroup__Array
} // namespace app::classes::types
