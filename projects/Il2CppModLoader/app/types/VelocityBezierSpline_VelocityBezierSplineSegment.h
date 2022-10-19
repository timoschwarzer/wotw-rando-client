#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VelocityBezierSpline_VelocityBezierSplineSegment {
        inline app::VelocityBezierSpline_VelocityBezierSplineSegment__Class** type_info = (app::VelocityBezierSpline_VelocityBezierSplineSegment__Class**)(modloader::win::memory::resolve_rva(0x047377D8));
        inline app::VelocityBezierSpline_VelocityBezierSplineSegment__Class* get_class() {
            return il2cpp::get_nested_class<app::VelocityBezierSpline_VelocityBezierSplineSegment__Class>(type_info, "", "VelocityBezierSpline", "VelocityBezierSplineSegment");
        }
        inline app::VelocityBezierSpline_VelocityBezierSplineSegment* create() {
            return il2cpp::create_object<app::VelocityBezierSpline_VelocityBezierSplineSegment>(get_class());
        }
        inline app::VelocityBezierSpline_VelocityBezierSplineSegment__Array* create_array(int size) {
            return il2cpp::array_new<app::VelocityBezierSpline_VelocityBezierSplineSegment__Array>(get_class(), size);
        }
        inline app::VelocityBezierSpline_VelocityBezierSplineSegment__Array* create_array(const std::vector<app::VelocityBezierSpline_VelocityBezierSplineSegment*>& items) {
            return il2cpp::array_new<app::VelocityBezierSpline_VelocityBezierSplineSegment__Array>(get_class(), items);
        }
    } // namespace VelocityBezierSpline_VelocityBezierSplineSegment
} // namespace app::classes::types
