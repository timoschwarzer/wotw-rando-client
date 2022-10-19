#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InstantStopBehaviour {
        namespace {
            inline app::InstantStopBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::InstantStopBehaviour__Class** type_info = &type_info_ref;
        inline app::InstantStopBehaviour__Class* get_class() {
            return il2cpp::get_class<app::InstantStopBehaviour__Class>(type_info, "Moon", "InstantStopBehaviour");
        }
        inline app::InstantStopBehaviour* create() {
            return il2cpp::create_object<app::InstantStopBehaviour>(get_class());
        }
    } // namespace InstantStopBehaviour
} // namespace app::classes::types
