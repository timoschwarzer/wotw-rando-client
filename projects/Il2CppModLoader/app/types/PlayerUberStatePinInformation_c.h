#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerUberStatePinInformation_c {
        inline app::PlayerUberStatePinInformation_c__Class** type_info = (app::PlayerUberStatePinInformation_c__Class**)(modloader::win::memory::resolve_rva(0x0477F830));
        inline app::PlayerUberStatePinInformation_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerUberStatePinInformation_c__Class>(type_info, "Moon.uberSerializationWisp", "PlayerUberStatePinInformation", "<>c");
        }
        inline app::PlayerUberStatePinInformation_c* create() {
            return il2cpp::create_object<app::PlayerUberStatePinInformation_c>(get_class());
        }
    } // namespace PlayerUberStatePinInformation_c
} // namespace app::classes::types
