#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneRoot_UnloadSceneCoroutine_d_61 {
        inline app::SceneRoot_UnloadSceneCoroutine_d_61__Class** type_info = (app::SceneRoot_UnloadSceneCoroutine_d_61__Class**)(modloader::win::memory::resolve_rva(0x047275C0));
        inline app::SceneRoot_UnloadSceneCoroutine_d_61__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneRoot_UnloadSceneCoroutine_d_61__Class>(type_info, "", "SceneRoot", "<UnloadSceneCoroutine>d__61");
        }
        inline app::SceneRoot_UnloadSceneCoroutine_d_61* create() {
            return il2cpp::create_object<app::SceneRoot_UnloadSceneCoroutine_d_61>(get_class());
        }
    } // namespace SceneRoot_UnloadSceneCoroutine_d_61
} // namespace app::classes::types
