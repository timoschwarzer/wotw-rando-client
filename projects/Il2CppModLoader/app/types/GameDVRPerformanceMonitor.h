#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameDVRPerformanceMonitor {
        inline app::GameDVRPerformanceMonitor__Class** type_info = (app::GameDVRPerformanceMonitor__Class**)(modloader::win::memory::resolve_rva(0x0475CA98));
        inline app::GameDVRPerformanceMonitor__Class* get_class() {
            return il2cpp::get_class<app::GameDVRPerformanceMonitor__Class>(type_info, "", "GameDVRPerformanceMonitor");
        }
        inline app::GameDVRPerformanceMonitor* create() {
            return il2cpp::create_object<app::GameDVRPerformanceMonitor>(get_class());
        }
    } // namespace GameDVRPerformanceMonitor
} // namespace app::classes::types
