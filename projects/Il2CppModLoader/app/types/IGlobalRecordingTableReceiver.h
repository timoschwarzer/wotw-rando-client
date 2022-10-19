#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IGlobalRecordingTableReceiver {
        inline app::IGlobalRecordingTableReceiver__Class** type_info = (app::IGlobalRecordingTableReceiver__Class**)(modloader::win::memory::resolve_rva(0x04744108));
        inline app::IGlobalRecordingTableReceiver__Class* get_class() {
            return il2cpp::get_class<app::IGlobalRecordingTableReceiver__Class>(type_info, "", "IGlobalRecordingTableReceiver");
        }
    } // namespace IGlobalRecordingTableReceiver
} // namespace app::classes::types
