#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IContributeDynamicSink {
        inline app::IContributeDynamicSink__Class** type_info = (app::IContributeDynamicSink__Class**)(modloader::win::memory::resolve_rva(0x04775970));
        inline app::IContributeDynamicSink__Class* get_class() {
            return il2cpp::get_class<app::IContributeDynamicSink__Class>(type_info, "System.Runtime.Remoting.Contexts", "IContributeDynamicSink");
        }
    } // namespace IContributeDynamicSink
} // namespace app::classes::types
