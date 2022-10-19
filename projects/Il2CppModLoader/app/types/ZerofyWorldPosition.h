#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ZerofyWorldPosition {
        namespace {
            inline app::ZerofyWorldPosition__Class* type_info_ref = nullptr;
        }
        inline app::ZerofyWorldPosition__Class** type_info = &type_info_ref;
        inline app::ZerofyWorldPosition__Class* get_class() {
            return il2cpp::get_class<app::ZerofyWorldPosition__Class>(type_info, "", "ZerofyWorldPosition");
        }
        inline app::ZerofyWorldPosition* create() {
            return il2cpp::create_object<app::ZerofyWorldPosition>(get_class());
        }
    } // namespace ZerofyWorldPosition
} // namespace app::classes::types
