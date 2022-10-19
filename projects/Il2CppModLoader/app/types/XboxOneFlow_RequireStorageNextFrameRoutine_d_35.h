#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XboxOneFlow_RequireStorageNextFrameRoutine_d_35 {
        inline app::XboxOneFlow_RequireStorageNextFrameRoutine_d_35__Class** type_info = (app::XboxOneFlow_RequireStorageNextFrameRoutine_d_35__Class**)(modloader::win::memory::resolve_rva(0x0470BC48));
        inline app::XboxOneFlow_RequireStorageNextFrameRoutine_d_35__Class* get_class() {
            return il2cpp::get_nested_class<app::XboxOneFlow_RequireStorageNextFrameRoutine_d_35__Class>(type_info, "", "XboxOneFlow", "<RequireStorageNextFrameRoutine>d__35");
        }
        inline app::XboxOneFlow_RequireStorageNextFrameRoutine_d_35* create() {
            return il2cpp::create_object<app::XboxOneFlow_RequireStorageNextFrameRoutine_d_35>(get_class());
        }
    } // namespace XboxOneFlow_RequireStorageNextFrameRoutine_d_35
} // namespace app::classes::types
