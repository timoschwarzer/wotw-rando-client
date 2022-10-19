#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScenesManagerPrediction_UpdatePositionType__Enum {
        namespace {
            inline app::ScenesManagerPrediction_UpdatePositionType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ScenesManagerPrediction_UpdatePositionType__Enum__Class** type_info = &type_info_ref;
        inline app::ScenesManagerPrediction_UpdatePositionType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ScenesManagerPrediction_UpdatePositionType__Enum__Class>(type_info, "", "ScenesManagerPrediction", "UpdatePositionType");
        }
        inline app::ScenesManagerPrediction_UpdatePositionType__Enum* create() {
            return il2cpp::create_object<app::ScenesManagerPrediction_UpdatePositionType__Enum>(get_class());
        }
    } // namespace ScenesManagerPrediction_UpdatePositionType__Enum
} // namespace app::classes::types
