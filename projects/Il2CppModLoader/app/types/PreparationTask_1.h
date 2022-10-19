#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PreparationTask_1 {
        inline app::PreparationTask_1__Class** type_info = (app::PreparationTask_1__Class**)(modloader::win::memory::resolve_rva(0x0478FDA0));
        inline app::PreparationTask_1__Class* get_class() {
            return il2cpp::get_class<app::PreparationTask_1__Class>(type_info, "Moon.ArtOptimization", "PreparationTask");
        }
        inline app::PreparationTask_1* create() {
            return il2cpp::create_object<app::PreparationTask_1>(get_class());
        }
    } // namespace PreparationTask_1
} // namespace app::classes::types
