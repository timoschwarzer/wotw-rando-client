#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CommandBinding__Array {
        inline app::CommandBinding__Array__Class** type_info = (app::CommandBinding__Array__Class**)(modloader::win::memory::resolve_rva(0x04769660));
        inline app::CommandBinding__Array__Class* get_class() {
            return il2cpp::get_class<app::CommandBinding__Array__Class>(type_info, "", "CommandBinding[]");
        }
        inline app::CommandBinding__Array* create() {
            return il2cpp::create_object<app::CommandBinding__Array>(get_class());
        }
    } // namespace CommandBinding__Array
} // namespace app::classes::types
