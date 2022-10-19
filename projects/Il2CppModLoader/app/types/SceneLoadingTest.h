#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneLoadingTest {
        inline app::SceneLoadingTest__Class** type_info = (app::SceneLoadingTest__Class**)(modloader::win::memory::resolve_rva(0x04789990));
        inline app::SceneLoadingTest__Class* get_class() {
            return il2cpp::get_class<app::SceneLoadingTest__Class>(type_info, "Moon", "SceneLoadingTest");
        }
        inline app::SceneLoadingTest* create() {
            return il2cpp::create_object<app::SceneLoadingTest>(get_class());
        }
    } // namespace SceneLoadingTest
} // namespace app::classes::types
