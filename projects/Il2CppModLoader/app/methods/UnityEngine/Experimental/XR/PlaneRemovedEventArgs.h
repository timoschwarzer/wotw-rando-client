#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::UnityEngine::Experimental::XR::PlaneRemovedEventArgs {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, set_PlaneSubsystem, (app::PlaneRemovedEventArgs__Boxed * this_ptr, app::XRPlaneSubsystem * value))
    IL2CPP_REGISTER_METHOD(0x0024AE60, void, set_Plane, (app::PlaneRemovedEventArgs__Boxed * this_ptr, app::BoundedPlane value))
}
