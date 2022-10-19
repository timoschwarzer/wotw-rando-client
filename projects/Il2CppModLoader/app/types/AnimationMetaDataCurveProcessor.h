#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationMetaDataCurveProcessor {
        inline app::AnimationMetaDataCurveProcessor__Class** type_info = (app::AnimationMetaDataCurveProcessor__Class**)(modloader::win::memory::resolve_rva(0x04749D90));
        inline app::AnimationMetaDataCurveProcessor__Class* get_class() {
            return il2cpp::get_class<app::AnimationMetaDataCurveProcessor__Class>(type_info, "", "AnimationMetaDataCurveProcessor");
        }
        inline app::AnimationMetaDataCurveProcessor* create() {
            return il2cpp::create_object<app::AnimationMetaDataCurveProcessor>(get_class());
        }
    } // namespace AnimationMetaDataCurveProcessor
} // namespace app::classes::types
