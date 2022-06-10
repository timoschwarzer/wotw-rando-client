#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::TriangleNet::Meshing::Data::BadTriQueue {
    IL2CPP_REGISTER_METHOD(0x005C3FF0, int32_t, get_Count, (app::BadTriQueue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B0E8A0, void, ctor, (app::BadTriQueue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B0E970, void, Enqueue_1, (app::BadTriQueue * this_ptr, app::BadTriangle * badtri))
    IL2CPP_REGISTER_METHOD(0x02B0ECD0, void, Enqueue_2, (app::BadTriQueue * this_ptr, app::Otri * enqtri, double minedge, app::Vertex * apex, app::Vertex * org, app::Vertex * dest))
    IL2CPP_REGISTER_METHOD(0x02B0EE70, app::BadTriangle *, Dequeue, (app::BadTriQueue * this_ptr))
}
