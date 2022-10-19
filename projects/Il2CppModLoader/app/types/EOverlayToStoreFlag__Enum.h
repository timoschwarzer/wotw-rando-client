#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EOverlayToStoreFlag__Enum {
        namespace {
            inline app::EOverlayToStoreFlag__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EOverlayToStoreFlag__Enum__Class** type_info = &type_info_ref;
        inline app::EOverlayToStoreFlag__Enum__Class* get_class() {
            return il2cpp::get_class<app::EOverlayToStoreFlag__Enum__Class>(type_info, "Steamworks", "EOverlayToStoreFlag");
        }
        inline app::EOverlayToStoreFlag__Enum* create() {
            return il2cpp::create_object<app::EOverlayToStoreFlag__Enum>(get_class());
        }
    } // namespace EOverlayToStoreFlag__Enum
} // namespace app::classes::types
