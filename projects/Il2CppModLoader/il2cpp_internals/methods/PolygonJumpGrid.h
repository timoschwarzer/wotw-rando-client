#include <interception_macros.h>

namespace app::methods::PolygonJumpGrid {
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, Init, (app::PolygonJumpGrid * this_ptr, app::ILocomotionTurningHandler * turning_handler));
IL2CPP_REGISTER_METHOD(0x00C5D1D0, PolygonJumpGridEntry *, GetEntryForPoint, (app::PolygonJumpGrid * this_ptr, app::Vector3 point, bool can_be_null));
IL2CPP_REGISTER_METHOD(0x00C5D4A0, PolygonJumpGridEntry *, GetEntryForPointDescendingOrder, (app::PolygonJumpGrid * this_ptr, app::Vector3 point, bool can_be_null));
IL2CPP_REGISTER_METHOD(0x00C5D720, void, OnDrawGizmos, (app::PolygonJumpGrid * this_ptr));
IL2CPP_REGISTER_METHOD(0x00C5D950, void, __ctor, (app::PolygonJumpGrid * this_ptr));
}
