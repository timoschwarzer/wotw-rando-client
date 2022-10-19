#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossGroundPiece {
        namespace {
            inline app::PetrifiedOwlBossGroundPiece__Class* type_info_ref = nullptr;
        }
        inline app::PetrifiedOwlBossGroundPiece__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlBossGroundPiece__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossGroundPiece__Class>(type_info, "", "PetrifiedOwlBossGroundPiece");
        }
        inline app::PetrifiedOwlBossGroundPiece* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossGroundPiece>(get_class());
        }
        inline app::PetrifiedOwlBossGroundPiece__Array* create_array(int size) {
            return il2cpp::array_new<app::PetrifiedOwlBossGroundPiece__Array>(get_class(), size);
        }
        inline app::PetrifiedOwlBossGroundPiece__Array* create_array(const std::vector<app::PetrifiedOwlBossGroundPiece*>& items) {
            return il2cpp::array_new<app::PetrifiedOwlBossGroundPiece__Array>(get_class(), items);
        }
    } // namespace PetrifiedOwlBossGroundPiece
} // namespace app::classes::types
