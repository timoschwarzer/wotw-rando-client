#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ContainerImageReference {
        namespace {
            inline app::ContainerImageReference__Class* type_info_ref = nullptr;
        }
        inline app::ContainerImageReference__Class** type_info = &type_info_ref;
        inline app::ContainerImageReference__Class* get_class() {
            return il2cpp::get_class<app::ContainerImageReference__Class>(type_info, "PlayFab.MultiplayerModels", "ContainerImageReference");
        }
        inline app::ContainerImageReference* create() {
            return il2cpp::create_object<app::ContainerImageReference>(get_class());
        }
    } // namespace ContainerImageReference
} // namespace app::classes::types
