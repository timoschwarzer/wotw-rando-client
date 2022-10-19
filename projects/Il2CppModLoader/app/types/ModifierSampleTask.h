#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ModifierSampleTask {
        inline app::ModifierSampleTask__Class** type_info = (app::ModifierSampleTask__Class**)(modloader::win::memory::resolve_rva(0x0471C9C8));
        inline app::ModifierSampleTask__Class* get_class() {
            return il2cpp::get_class<app::ModifierSampleTask__Class>(type_info, "Moon.ArtOptimization", "ModifierSampleTask");
        }
        inline app::ModifierSampleTask* create() {
            return il2cpp::create_object<app::ModifierSampleTask>(get_class());
        }
    } // namespace ModifierSampleTask
} // namespace app::classes::types
