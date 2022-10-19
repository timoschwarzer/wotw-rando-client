#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShadingZoneRendererTarget__Array {
        namespace {
            inline app::ShadingZoneRendererTarget__Array__Class* type_info_ref = nullptr;
        }
        inline app::ShadingZoneRendererTarget__Array__Class** type_info = &type_info_ref;
        inline app::ShadingZoneRendererTarget__Array__Class* get_class() {
            return il2cpp::get_class<app::ShadingZoneRendererTarget__Array__Class>(type_info, "", "ShadingZoneRendererTarget[]");
        }
        inline app::ShadingZoneRendererTarget__Array* create() {
            return il2cpp::create_object<app::ShadingZoneRendererTarget__Array>(get_class());
        }
    } // namespace ShadingZoneRendererTarget__Array
} // namespace app::classes::types
