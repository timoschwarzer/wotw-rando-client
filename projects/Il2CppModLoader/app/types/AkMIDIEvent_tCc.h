#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkMIDIEvent_tCc {
        inline app::AkMIDIEvent_tCc__Class** type_info = (app::AkMIDIEvent_tCc__Class**)(modloader::win::memory::resolve_rva(0x0475F548));
        inline app::AkMIDIEvent_tCc__Class* get_class() {
            return il2cpp::get_nested_class<app::AkMIDIEvent_tCc__Class>(type_info, "", "AkMIDIEvent", "tCc");
        }
        inline app::AkMIDIEvent_tCc* create() {
            return il2cpp::create_object<app::AkMIDIEvent_tCc>(get_class());
        }
    } // namespace AkMIDIEvent_tCc
} // namespace app::classes::types
