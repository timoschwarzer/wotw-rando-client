#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IContributeServerContextSink {
        inline app::IContributeServerContextSink__Class** type_info = (app::IContributeServerContextSink__Class**)(modloader::win::memory::resolve_rva(0x0471A6D0));
        inline app::IContributeServerContextSink__Class* get_class() {
            return il2cpp::get_class<app::IContributeServerContextSink__Class>(type_info, "System.Runtime.Remoting.Contexts", "IContributeServerContextSink");
        }
    } // namespace IContributeServerContextSink
} // namespace app::classes::types
