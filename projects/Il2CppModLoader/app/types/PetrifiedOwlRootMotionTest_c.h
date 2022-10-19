#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlRootMotionTest_c {
        inline app::PetrifiedOwlRootMotionTest_c__Class** type_info = (app::PetrifiedOwlRootMotionTest_c__Class**)(modloader::win::memory::resolve_rva(0x04762B40));
        inline app::PetrifiedOwlRootMotionTest_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlRootMotionTest_c__Class>(type_info, "", "PetrifiedOwlRootMotionTest", "<>c");
        }
        inline app::PetrifiedOwlRootMotionTest_c* create() {
            return il2cpp::create_object<app::PetrifiedOwlRootMotionTest_c>(get_class());
        }
    } // namespace PetrifiedOwlRootMotionTest_c
} // namespace app::classes::types
