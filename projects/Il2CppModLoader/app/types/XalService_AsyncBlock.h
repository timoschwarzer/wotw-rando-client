#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XalService_AsyncBlock {
        inline app::XalService_AsyncBlock__Class** type_info = (app::XalService_AsyncBlock__Class**)(modloader::win::memory::resolve_rva(0x0473CCD8));
        inline app::XalService_AsyncBlock__Class* get_class() {
            return il2cpp::get_nested_class<app::XalService_AsyncBlock__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalService", "AsyncBlock");
        }
        inline app::XalService_AsyncBlock* create() {
            return il2cpp::create_object<app::XalService_AsyncBlock>(get_class());
        }
        inline app::XalService_AsyncBlock__Boxed* box(app::XalService_AsyncBlock value) {
            return il2cpp::box_value<app::XalService_AsyncBlock__Boxed>(get_class(), value);
        }
    } // namespace XalService_AsyncBlock
} // namespace app::classes::types
