#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISceneRootPreEnableObserver {
        inline app::ISceneRootPreEnableObserver__Class** type_info = (app::ISceneRootPreEnableObserver__Class**)(modloader::win::memory::resolve_rva(0x04750508));
        inline app::ISceneRootPreEnableObserver__Class* get_class() {
            return il2cpp::get_class<app::ISceneRootPreEnableObserver__Class>(type_info, "", "ISceneRootPreEnableObserver");
        }
    } // namespace ISceneRootPreEnableObserver
} // namespace app::classes::types
