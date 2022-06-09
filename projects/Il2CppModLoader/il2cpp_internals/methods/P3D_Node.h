#include <interception_macros.h>

namespace app::methods::P3D_Node {
    IL2CPP_REGISTER_METHOD(0x030959C0, P3D_Node*, Spawn, ());
    IL2CPP_REGISTER_METHOD(0x03095BB0, P3D_Node*, Despawn, (app::P3D_Node * node));
    IL2CPP_REGISTER_METHOD(0x03095CA0, void, CalculateBound, (app::P3D_Node * this_ptr, app::List_1_P3D_Triangle_* triangles));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::P3D_Node * this_ptr));
    IL2CPP_REGISTER_METHOD(0x03096070, void, __cctor, ());
} // namespace app::methods::P3D_Node
