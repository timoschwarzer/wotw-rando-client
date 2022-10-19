#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GhostAnimationParameterPlugin_FloatParamenterTracker__Array {
        namespace {
            inline app::GhostAnimationParameterPlugin_FloatParamenterTracker__Array__Class* type_info_ref = nullptr;
        }
        inline app::GhostAnimationParameterPlugin_FloatParamenterTracker__Array__Class** type_info = &type_info_ref;
        inline app::GhostAnimationParameterPlugin_FloatParamenterTracker__Array__Class* get_class() {
            return il2cpp::get_class<app::GhostAnimationParameterPlugin_FloatParamenterTracker__Array__Class>(type_info, "", "GhostAnimationParameterPlugin+FloatParamenterTracker[]");
        }
        inline app::GhostAnimationParameterPlugin_FloatParamenterTracker__Array* create() {
            return il2cpp::create_object<app::GhostAnimationParameterPlugin_FloatParamenterTracker__Array>(get_class());
        }
    } // namespace GhostAnimationParameterPlugin_FloatParamenterTracker__Array
} // namespace app::classes::types
