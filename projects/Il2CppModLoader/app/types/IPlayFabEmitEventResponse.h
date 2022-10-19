#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IPlayFabEmitEventResponse {
        namespace {
            inline app::IPlayFabEmitEventResponse__Class* type_info_ref = nullptr;
        }
        inline app::IPlayFabEmitEventResponse__Class** type_info = &type_info_ref;
        inline app::IPlayFabEmitEventResponse__Class* get_class() {
            return il2cpp::get_class<app::IPlayFabEmitEventResponse__Class>(type_info, "PlayFab", "IPlayFabEmitEventResponse");
        }
    } // namespace IPlayFabEmitEventResponse
} // namespace app::classes::types
