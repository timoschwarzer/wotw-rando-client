#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GasballPlaceholderMarker {
        namespace {
            inline app::GasballPlaceholderMarker__Class* type_info_ref = nullptr;
        }
        inline app::GasballPlaceholderMarker__Class** type_info = &type_info_ref;
        inline app::GasballPlaceholderMarker__Class* get_class() {
            return il2cpp::get_class<app::GasballPlaceholderMarker__Class>(type_info, "", "GasballPlaceholderMarker");
        }
        inline app::GasballPlaceholderMarker* create() {
            return il2cpp::create_object<app::GasballPlaceholderMarker>(get_class());
        }
    } // namespace GasballPlaceholderMarker
} // namespace app::classes::types
