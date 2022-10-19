#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PathDataPoint {
        namespace {
            inline app::PathDataPoint__Class* type_info_ref = nullptr;
        }
        inline app::PathDataPoint__Class** type_info = &type_info_ref;
        inline app::PathDataPoint__Class* get_class() {
            return il2cpp::get_class<app::PathDataPoint__Class>(type_info, "Moon.Telemetry", "PathDataPoint");
        }
        inline app::PathDataPoint* create() {
            return il2cpp::create_object<app::PathDataPoint>(get_class());
        }
    } // namespace PathDataPoint
} // namespace app::classes::types
