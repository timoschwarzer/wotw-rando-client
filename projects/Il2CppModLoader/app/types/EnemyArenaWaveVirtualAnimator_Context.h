#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnemyArenaWaveVirtualAnimator_Context {
        inline app::EnemyArenaWaveVirtualAnimator_Context__Class** type_info = (app::EnemyArenaWaveVirtualAnimator_Context__Class**)(modloader::win::memory::resolve_rva(0x04712F48));
        inline app::EnemyArenaWaveVirtualAnimator_Context__Class* get_class() {
            return il2cpp::get_nested_class<app::EnemyArenaWaveVirtualAnimator_Context__Class>(type_info, "", "EnemyArenaWaveVirtualAnimator", "Context");
        }
        inline app::EnemyArenaWaveVirtualAnimator_Context* create() {
            return il2cpp::create_object<app::EnemyArenaWaveVirtualAnimator_Context>(get_class());
        }
        inline app::EnemyArenaWaveVirtualAnimator_Context__Boxed* box(app::EnemyArenaWaveVirtualAnimator_Context value) {
            return il2cpp::box_value<app::EnemyArenaWaveVirtualAnimator_Context__Boxed>(get_class(), value);
        }
    } // namespace EnemyArenaWaveVirtualAnimator_Context
} // namespace app::classes::types
