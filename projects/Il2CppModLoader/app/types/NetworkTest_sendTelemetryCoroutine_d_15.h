#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NetworkTest_sendTelemetryCoroutine_d_15 {
        inline app::NetworkTest_sendTelemetryCoroutine_d_15__Class** type_info = (app::NetworkTest_sendTelemetryCoroutine_d_15__Class**)(modloader::win::memory::resolve_rva(0x047060A8));
        inline app::NetworkTest_sendTelemetryCoroutine_d_15__Class* get_class() {
            return il2cpp::get_nested_class<app::NetworkTest_sendTelemetryCoroutine_d_15__Class>(type_info, "", "NetworkTest", "<sendTelemetryCoroutine>d__15");
        }
        inline app::NetworkTest_sendTelemetryCoroutine_d_15* create() {
            return il2cpp::create_object<app::NetworkTest_sendTelemetryCoroutine_d_15>(get_class());
        }
    } // namespace NetworkTest_sendTelemetryCoroutine_d_15
} // namespace app::classes::types
