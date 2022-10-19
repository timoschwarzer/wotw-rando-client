#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VelocityBezierSpline_VelocityBezierSplineSegment__Array {
        inline app::VelocityBezierSpline_VelocityBezierSplineSegment__Array__Class** type_info = (app::VelocityBezierSpline_VelocityBezierSplineSegment__Array__Class**)(modloader::win::memory::resolve_rva(0x0473FF10));
        inline app::VelocityBezierSpline_VelocityBezierSplineSegment__Array__Class* get_class() {
            return il2cpp::get_class<app::VelocityBezierSpline_VelocityBezierSplineSegment__Array__Class>(type_info, "", "VelocityBezierSpline+VelocityBezierSplineSegment[]");
        }
        inline app::VelocityBezierSpline_VelocityBezierSplineSegment__Array* create() {
            return il2cpp::create_object<app::VelocityBezierSpline_VelocityBezierSplineSegment__Array>(get_class());
        }
    } // namespace VelocityBezierSpline_VelocityBezierSplineSegment__Array
} // namespace app::classes::types
