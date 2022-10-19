#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IPostProcessInfluencerUpdateReceiver {
        inline app::IPostProcessInfluencerUpdateReceiver__Class** type_info = (app::IPostProcessInfluencerUpdateReceiver__Class**)(modloader::win::memory::resolve_rva(0x0478AF28));
        inline app::IPostProcessInfluencerUpdateReceiver__Class* get_class() {
            return il2cpp::get_class<app::IPostProcessInfluencerUpdateReceiver__Class>(type_info, "", "IPostProcessInfluencerUpdateReceiver");
        }
    } // namespace IPostProcessInfluencerUpdateReceiver
} // namespace app::classes::types
