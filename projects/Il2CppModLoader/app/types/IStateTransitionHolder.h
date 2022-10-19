#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IStateTransitionHolder {
        inline app::IStateTransitionHolder__Class** type_info = (app::IStateTransitionHolder__Class**)(modloader::win::memory::resolve_rva(0x0472FAF8));
        inline app::IStateTransitionHolder__Class* get_class() {
            return il2cpp::get_class<app::IStateTransitionHolder__Class>(type_info, "", "IStateTransitionHolder");
        }
    } // namespace IStateTransitionHolder
} // namespace app::classes::types
