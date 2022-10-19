#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XGameSaveBlob_1 {
        inline app::XGameSaveBlob_1__Class** type_info = (app::XGameSaveBlob_1__Class**)(modloader::win::memory::resolve_rva(0x04787E10));
        inline app::XGameSaveBlob_1__Class* get_class() {
            return il2cpp::get_class<app::XGameSaveBlob_1__Class>(type_info, "XGamingRuntime.Interop", "XGameSaveBlob");
        }
        inline app::XGameSaveBlob_1* create() {
            return il2cpp::create_object<app::XGameSaveBlob_1>(get_class());
        }
        inline app::XGameSaveBlob_1__Boxed* box(app::XGameSaveBlob_1 value) {
            return il2cpp::box_value<app::XGameSaveBlob_1__Boxed>(get_class(), value);
        }
    } // namespace XGameSaveBlob_1
} // namespace app::classes::types
