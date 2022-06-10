#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::TriangleNet::Meshing::Algorithm::Incremental {
    IL2CPP_REGISTER_METHOD(0x02635A00, app::IMesh *, Triangulate, (app::Incremental * this_ptr, app::IList_1_TriangleNet_Geometry_Vertex_ * points, app::Configuration_1 * config))
    IL2CPP_REGISTER_METHOD(0x02635DE0, void, GetBoundingBox, (app::Incremental * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02636390, int32_t, RemoveBox, (app::Incremental * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Incremental * this_ptr))
}
