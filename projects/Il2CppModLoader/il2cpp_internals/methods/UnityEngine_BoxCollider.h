#include <interception_macros.h>

namespace app::methods::UnityEngine::BoxCollider {
IL2CPP_REGISTER_METHOD(0x0309DC80, Vector3, get_center, (app::BoxCollider * this_ptr));
IL2CPP_REGISTER_METHOD(0x0309DD00, void, set_center, (app::BoxCollider * this_ptr, app::Vector3 value));
IL2CPP_REGISTER_METHOD(0x0309DD60, Vector3, get_size, (app::BoxCollider * this_ptr));
IL2CPP_REGISTER_METHOD(0x0309DDE0, void, set_size, (app::BoxCollider * this_ptr, app::Vector3 value));
IL2CPP_REGISTER_METHOD(0x0309DE40, void, get_center_Injected, (app::BoxCollider * this_ptr, app::Vector3 * ret));
IL2CPP_REGISTER_METHOD(0x0309DEA0, void, set_center_Injected, (app::BoxCollider * this_ptr, app::Vector3 * value));
IL2CPP_REGISTER_METHOD(0x0309DF00, void, get_size_Injected, (app::BoxCollider * this_ptr, app::Vector3 * ret));
IL2CPP_REGISTER_METHOD(0x0309DF60, void, set_size_Injected, (app::BoxCollider * this_ptr, app::Vector3 * value));
}
