#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossWallCrushBehaviour {
        namespace {
            inline app::PetrifiedOwlBossWallCrushBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::PetrifiedOwlBossWallCrushBehaviour__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlBossWallCrushBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossWallCrushBehaviour__Class>(type_info, "", "PetrifiedOwlBossWallCrushBehaviour");
        }
        inline app::PetrifiedOwlBossWallCrushBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossWallCrushBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossWallCrushBehaviour
} // namespace app::classes::types
