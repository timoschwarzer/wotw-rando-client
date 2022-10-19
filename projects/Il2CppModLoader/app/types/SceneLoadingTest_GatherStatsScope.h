#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneLoadingTest_GatherStatsScope {
        inline app::SceneLoadingTest_GatherStatsScope__Class** type_info = (app::SceneLoadingTest_GatherStatsScope__Class**)(modloader::win::memory::resolve_rva(0x0470ED30));
        inline app::SceneLoadingTest_GatherStatsScope__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneLoadingTest_GatherStatsScope__Class>(type_info, "Moon", "SceneLoadingTest", "GatherStatsScope");
        }
        inline app::SceneLoadingTest_GatherStatsScope* create() {
            return il2cpp::create_object<app::SceneLoadingTest_GatherStatsScope>(get_class());
        }
    } // namespace SceneLoadingTest_GatherStatsScope
} // namespace app::classes::types
