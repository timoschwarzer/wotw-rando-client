#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SketchupGroup {
        namespace {
            inline app::SketchupGroup__Class* type_info_ref = nullptr;
        }
        inline app::SketchupGroup__Class** type_info = &type_info_ref;
        inline app::SketchupGroup__Class* get_class() {
            return il2cpp::get_class<app::SketchupGroup__Class>(type_info, "", "SketchupGroup");
        }
        inline app::SketchupGroup* create() {
            return il2cpp::create_object<app::SketchupGroup>(get_class());
        }
    } // namespace SketchupGroup
} // namespace app::classes::types
