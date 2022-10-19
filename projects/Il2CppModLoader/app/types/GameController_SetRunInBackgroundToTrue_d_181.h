#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameController_SetRunInBackgroundToTrue_d_181 {
        inline app::GameController_SetRunInBackgroundToTrue_d_181__Class** type_info = (app::GameController_SetRunInBackgroundToTrue_d_181__Class**)(modloader::win::memory::resolve_rva(0x04702BA0));
        inline app::GameController_SetRunInBackgroundToTrue_d_181__Class* get_class() {
            return il2cpp::get_nested_class<app::GameController_SetRunInBackgroundToTrue_d_181__Class>(type_info, "", "GameController", "<SetRunInBackgroundToTrue>d__181");
        }
        inline app::GameController_SetRunInBackgroundToTrue_d_181* create() {
            return il2cpp::create_object<app::GameController_SetRunInBackgroundToTrue_d_181>(get_class());
        }
    } // namespace GameController_SetRunInBackgroundToTrue_d_181
} // namespace app::classes::types
