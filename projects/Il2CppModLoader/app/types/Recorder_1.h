#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Recorder_1 {
        inline app::Recorder_1__Class** type_info = (app::Recorder_1__Class**)(modloader::win::memory::resolve_rva(0x0472F278));
        inline app::Recorder_1__Class* get_class() {
            return il2cpp::get_class<app::Recorder_1__Class>(type_info, "", "Recorder");
        }
        inline app::Recorder_1* create() {
            return il2cpp::create_object<app::Recorder_1>(get_class());
        }
    } // namespace Recorder_1
} // namespace app::classes::types
