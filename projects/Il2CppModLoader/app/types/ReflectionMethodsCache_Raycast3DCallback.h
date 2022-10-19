#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReflectionMethodsCache_Raycast3DCallback {
        inline app::ReflectionMethodsCache_Raycast3DCallback__Class** type_info = (app::ReflectionMethodsCache_Raycast3DCallback__Class**)(modloader::win::memory::resolve_rva(0x0477F258));
        inline app::ReflectionMethodsCache_Raycast3DCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::ReflectionMethodsCache_Raycast3DCallback__Class>(type_info, "UnityEngine.UI", "ReflectionMethodsCache", "Raycast3DCallback");
        }
        inline app::ReflectionMethodsCache_Raycast3DCallback* create() {
            return il2cpp::create_object<app::ReflectionMethodsCache_Raycast3DCallback>(get_class());
        }
    } // namespace ReflectionMethodsCache_Raycast3DCallback
} // namespace app::classes::types
