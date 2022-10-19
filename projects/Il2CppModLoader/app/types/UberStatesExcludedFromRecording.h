#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberStatesExcludedFromRecording {
        namespace {
            inline app::UberStatesExcludedFromRecording__Class* type_info_ref = nullptr;
        }
        inline app::UberStatesExcludedFromRecording__Class** type_info = &type_info_ref;
        inline app::UberStatesExcludedFromRecording__Class* get_class() {
            return il2cpp::get_class<app::UberStatesExcludedFromRecording__Class>(type_info, "", "UberStatesExcludedFromRecording");
        }
        inline app::UberStatesExcludedFromRecording* create() {
            return il2cpp::create_object<app::UberStatesExcludedFromRecording>(get_class());
        }
    } // namespace UberStatesExcludedFromRecording
} // namespace app::classes::types
