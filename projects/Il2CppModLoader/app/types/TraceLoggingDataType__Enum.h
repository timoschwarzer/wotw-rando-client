#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TraceLoggingDataType__Enum {
        namespace {
            inline app::TraceLoggingDataType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::TraceLoggingDataType__Enum__Class** type_info = &type_info_ref;
        inline app::TraceLoggingDataType__Enum__Class* get_class() {
            return il2cpp::get_class<app::TraceLoggingDataType__Enum__Class>(type_info, "System.Diagnostics.Tracing", "TraceLoggingDataType");
        }
        inline app::TraceLoggingDataType__Enum* create() {
            return il2cpp::create_object<app::TraceLoggingDataType__Enum>(get_class());
        }
    } // namespace TraceLoggingDataType__Enum
} // namespace app::classes::types
