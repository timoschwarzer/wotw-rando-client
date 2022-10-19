#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RenderTextureDescriptor {
        inline app::RenderTextureDescriptor__Class** type_info = (app::RenderTextureDescriptor__Class**)(modloader::win::memory::resolve_rva(0x0474C5A8));
        inline app::RenderTextureDescriptor__Class* get_class() {
            return il2cpp::get_class<app::RenderTextureDescriptor__Class>(type_info, "UnityEngine", "RenderTextureDescriptor");
        }
        inline app::RenderTextureDescriptor* create() {
            return il2cpp::create_object<app::RenderTextureDescriptor>(get_class());
        }
        inline app::RenderTextureDescriptor__Boxed* box(app::RenderTextureDescriptor value) {
            return il2cpp::box_value<app::RenderTextureDescriptor__Boxed>(get_class(), value);
        }
    } // namespace RenderTextureDescriptor
} // namespace app::classes::types
