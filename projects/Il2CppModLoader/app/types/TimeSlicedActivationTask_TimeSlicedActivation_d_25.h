#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimeSlicedActivationTask_TimeSlicedActivation_d_25 {
        inline app::TimeSlicedActivationTask_TimeSlicedActivation_d_25__Class** type_info = (app::TimeSlicedActivationTask_TimeSlicedActivation_d_25__Class**)(modloader::win::memory::resolve_rva(0x0474B460));
        inline app::TimeSlicedActivationTask_TimeSlicedActivation_d_25__Class* get_class() {
            return il2cpp::get_nested_class<app::TimeSlicedActivationTask_TimeSlicedActivation_d_25__Class>(type_info, "Moon.TimeSlicer", "TimeSlicedActivationTask", "<TimeSlicedActivation>d__25");
        }
        inline app::TimeSlicedActivationTask_TimeSlicedActivation_d_25* create() {
            return il2cpp::create_object<app::TimeSlicedActivationTask_TimeSlicedActivation_d_25>(get_class());
        }
    } // namespace TimeSlicedActivationTask_TimeSlicedActivation_d_25
} // namespace app::classes::types
