#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TentacleStabOutcome__Enum {
        inline app::TentacleStabOutcome__Enum__Class** type_info = (app::TentacleStabOutcome__Enum__Class**)(modloader::win::memory::resolve_rva(0x0476B200));
        inline app::TentacleStabOutcome__Enum__Class* get_class() {
            return il2cpp::get_class<app::TentacleStabOutcome__Enum__Class>(type_info, "", "TentacleStabOutcome");
        }
        inline app::TentacleStabOutcome__Enum* create() {
            return il2cpp::create_object<app::TentacleStabOutcome__Enum>(get_class());
        }
    } // namespace TentacleStabOutcome__Enum
} // namespace app::classes::types
