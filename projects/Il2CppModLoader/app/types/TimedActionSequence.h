#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimedActionSequence {
        namespace {
            inline app::TimedActionSequence__Class* type_info_ref = nullptr;
        }
        inline app::TimedActionSequence__Class** type_info = &type_info_ref;
        inline app::TimedActionSequence__Class* get_class() {
            return il2cpp::get_class<app::TimedActionSequence__Class>(type_info, "", "TimedActionSequence");
        }
        inline app::TimedActionSequence* create() {
            return il2cpp::create_object<app::TimedActionSequence>(get_class());
        }
    } // namespace TimedActionSequence
} // namespace app::classes::types
