#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MergeFailedEventArgs {
        inline app::MergeFailedEventArgs__Class** type_info = (app::MergeFailedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04731DF8));
        inline app::MergeFailedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::MergeFailedEventArgs__Class>(type_info, "System.Data", "MergeFailedEventArgs");
        }
        inline app::MergeFailedEventArgs* create() {
            return il2cpp::create_object<app::MergeFailedEventArgs>(get_class());
        }
    } // namespace MergeFailedEventArgs
} // namespace app::classes::types
