#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EventManifestOptions__Enum {
        namespace {
            inline app::EventManifestOptions__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EventManifestOptions__Enum__Class** type_info = &type_info_ref;
        inline app::EventManifestOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::EventManifestOptions__Enum__Class>(type_info, "System.Diagnostics.Tracing", "EventManifestOptions");
        }
        inline app::EventManifestOptions__Enum* create() {
            return il2cpp::create_object<app::EventManifestOptions__Enum>(get_class());
        }
    } // namespace EventManifestOptions__Enum
} // namespace app::classes::types
