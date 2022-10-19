#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SimpleFPS_VideoPlayerDebugInfo__Array {
        namespace {
            inline app::SimpleFPS_VideoPlayerDebugInfo__Array__Class* type_info_ref = nullptr;
        }
        inline app::SimpleFPS_VideoPlayerDebugInfo__Array__Class** type_info = &type_info_ref;
        inline app::SimpleFPS_VideoPlayerDebugInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::SimpleFPS_VideoPlayerDebugInfo__Array__Class>(type_info, "", "SimpleFPS+VideoPlayerDebugInfo[]");
        }
        inline app::SimpleFPS_VideoPlayerDebugInfo__Array* create() {
            return il2cpp::create_object<app::SimpleFPS_VideoPlayerDebugInfo__Array>(get_class());
        }
    } // namespace SimpleFPS_VideoPlayerDebugInfo__Array
} // namespace app::classes::types
