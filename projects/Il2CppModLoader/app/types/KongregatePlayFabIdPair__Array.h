#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KongregatePlayFabIdPair__Array {
        namespace {
            inline app::KongregatePlayFabIdPair__Array__Class* type_info_ref = nullptr;
        }
        inline app::KongregatePlayFabIdPair__Array__Class** type_info = &type_info_ref;
        inline app::KongregatePlayFabIdPair__Array__Class* get_class() {
            return il2cpp::get_class<app::KongregatePlayFabIdPair__Array__Class>(type_info, "PlayFab.ClientModels", "KongregatePlayFabIdPair[]");
        }
        inline app::KongregatePlayFabIdPair__Array* create() {
            return il2cpp::create_object<app::KongregatePlayFabIdPair__Array>(get_class());
        }
    } // namespace KongregatePlayFabIdPair__Array
} // namespace app::classes::types
