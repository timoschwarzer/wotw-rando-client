#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimesliceSceneUnloadTask {
        inline app::TimesliceSceneUnloadTask__Class** type_info = (app::TimesliceSceneUnloadTask__Class**)(modloader::win::memory::resolve_rva(0x0477DB88));
        inline app::TimesliceSceneUnloadTask__Class* get_class() {
            return il2cpp::get_class<app::TimesliceSceneUnloadTask__Class>(type_info, "Moon.TimeSlicer", "TimesliceSceneUnloadTask");
        }
        inline app::TimesliceSceneUnloadTask* create() {
            return il2cpp::create_object<app::TimesliceSceneUnloadTask>(get_class());
        }
    } // namespace TimesliceSceneUnloadTask
} // namespace app::classes::types
