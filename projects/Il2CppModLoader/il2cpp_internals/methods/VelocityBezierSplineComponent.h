#include <interception_macros.h>

namespace app::methods::VelocityBezierSplineComponent {
IL2CPP_REGISTER_METHOD(0x013C0A10, void, add_spline_event, (app::VelocityBezierSplineComponent * this_ptr, app::SplineEventHandler * value));
IL2CPP_REGISTER_METHOD(0x013C0B00, void, remove_spline_event, (app::VelocityBezierSplineComponent * this_ptr, app::SplineEventHandler * value));
IL2CPP_REGISTER_METHOD(0x013C0BF0, BaseSpline_SplineIterator *, get_Iterator, (app::VelocityBezierSplineComponent * this_ptr));
IL2CPP_REGISTER_METHOD(0x013C0CC0, void, Start, (app::VelocityBezierSplineComponent * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D29E90, void, StartIterator, (app::VelocityBezierSplineComponent * this_ptr));
IL2CPP_REGISTER_METHOD(0x013C0D60, BaseSpline_SplineIterator *, NewIterator, (app::VelocityBezierSplineComponent * this_ptr));
IL2CPP_REGISTER_METHOD(0x013C0E10, BaseSpline_SplineIterator *, NewReverseIterator, (app::VelocityBezierSplineComponent * this_ptr));
IL2CPP_REGISTER_METHOD(0x013C1010, void, ResetIterator, (app::VelocityBezierSplineComponent * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D29FA0, void, KillIterator, (app::VelocityBezierSplineComponent * this_ptr));
IL2CPP_REGISTER_METHOD(0x013C11C0, BaseSpline_SplineIterator *, Iterate, (app::VelocityBezierSplineComponent * this_ptr, float dt));
IL2CPP_REGISTER_METHOD(0x00D2A100, Matrix4x4, GetTransformMatrix, (app::VelocityBezierSplineComponent * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D2A1D0, Vector3, TransformPoint, (app::VelocityBezierSplineComponent * this_ptr, app::Vector3 point));
IL2CPP_REGISTER_METHOD(0x013C1440, Vector3, InvTransformPoint, (app::VelocityBezierSplineComponent * this_ptr, app::Vector3 point));
IL2CPP_REGISTER_METHOD(0x013C1590, void, InsertPoint, (app::VelocityBezierSplineComponent * this_ptr, int32_t idx, app::Vector3 pos, app::BaseSpline_SplinePointType__Enum type, app::Vector3 cp1, app::Vector3 cp2, app::Vector3 v, app::Vector3 p_v, app::Vector3 n_v));
IL2CPP_REGISTER_METHOD(0x013C1690, void, RemovePoint, (app::VelocityBezierSplineComponent * this_ptr, app::VelocityBezierSpline_VelocityBezierSplinePoint * point));
IL2CPP_REGISTER_METHOD(0x002FB9D0, Vector3__Array *, GetDrawPoints, (app::VelocityBezierSplineComponent * this_ptr));
IL2CPP_REGISTER_METHOD(0x013C1740, Vector3, GetWorldPoint, (app::VelocityBezierSplineComponent * this_ptr, int32_t n));
IL2CPP_REGISTER_METHOD(0x013C1840, Vector3, NearestWorldPoint, (app::VelocityBezierSplineComponent * this_ptr, app::Vector3 pos));
IL2CPP_REGISTER_METHOD(0x013C1AD0, float, NearestWorldOffset, (app::VelocityBezierSplineComponent * this_ptr, app::Vector3 pos));
IL2CPP_REGISTER_METHOD(0x013C1D20, void, SetPointWorld, (app::VelocityBezierSplineComponent * this_ptr, int32_t n, app::Vector3 pos));
IL2CPP_REGISTER_METHOD(0x013C1E20, void, SetNextControlWorld, (app::VelocityBezierSplineComponent * this_ptr, int32_t n, app::Vector3 next_control));
IL2CPP_REGISTER_METHOD(0x013C20F0, void, SetPrevControlWorld, (app::VelocityBezierSplineComponent * this_ptr, int32_t n, app::Vector3 prev_control));
IL2CPP_REGISTER_METHOD(0x013C23C0, void, SetControlsWorld, (app::VelocityBezierSplineComponent * this_ptr, int32_t n, app::Vector3 control1, app::Vector3 control2));
IL2CPP_REGISTER_METHOD(0x013C2710, bool, Looped, (app::VelocityBezierSplineComponent * this_ptr));
IL2CPP_REGISTER_METHOD(0x013C2730, void, __ctor, (app::VelocityBezierSplineComponent * this_ptr));
}
