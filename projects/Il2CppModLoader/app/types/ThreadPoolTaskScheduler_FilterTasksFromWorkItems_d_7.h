#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ThreadPoolTaskScheduler_FilterTasksFromWorkItems_d_7 {
        inline app::ThreadPoolTaskScheduler_FilterTasksFromWorkItems_d_7__Class** type_info = (app::ThreadPoolTaskScheduler_FilterTasksFromWorkItems_d_7__Class**)(modloader::win::memory::resolve_rva(0x0478F250));
        inline app::ThreadPoolTaskScheduler_FilterTasksFromWorkItems_d_7__Class* get_class() {
            return il2cpp::get_nested_class<app::ThreadPoolTaskScheduler_FilterTasksFromWorkItems_d_7__Class>(type_info, "System.Threading.Tasks", "ThreadPoolTaskScheduler", "<FilterTasksFromWorkItems>d__7");
        }
        inline app::ThreadPoolTaskScheduler_FilterTasksFromWorkItems_d_7* create() {
            return il2cpp::create_object<app::ThreadPoolTaskScheduler_FilterTasksFromWorkItems_d_7>(get_class());
        }
    } // namespace ThreadPoolTaskScheduler_FilterTasksFromWorkItems_d_7
} // namespace app::classes::types
