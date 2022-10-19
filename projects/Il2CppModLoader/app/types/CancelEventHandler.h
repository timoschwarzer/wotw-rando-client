#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CancelEventHandler {
        namespace {
            inline app::CancelEventHandler__Class* type_info_ref = nullptr;
        }
        inline app::CancelEventHandler__Class** type_info = &type_info_ref;
        inline app::CancelEventHandler__Class* get_class() {
            return il2cpp::get_class<app::CancelEventHandler__Class>(type_info, "System.ComponentModel", "CancelEventHandler");
        }
        inline app::CancelEventHandler* create() {
            return il2cpp::create_object<app::CancelEventHandler>(get_class());
        }
    } // namespace CancelEventHandler
} // namespace app::classes::types
