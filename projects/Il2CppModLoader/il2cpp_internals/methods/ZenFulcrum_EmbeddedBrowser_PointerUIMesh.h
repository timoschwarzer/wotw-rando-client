#include <interception_macros.h>

namespace app::methods::ZenFulcrum_EmbeddedBrowser::PointerUIMesh {
IL2CPP_REGISTER_METHOD(0x01662960, void, Awake, (app::PointerUIMesh * this_ptr));
IL2CPP_REGISTER_METHOD(0x01662A00, Vector2, MapPointerToBrowser, (app::PointerUIMesh * this_ptr, app::Vector2 screen_position, int32_t pointer_id));
IL2CPP_REGISTER_METHOD(0x01662B90, Vector2, MapRayToBrowser, (app::PointerUIMesh * this_ptr, app::Ray world_ray, int32_t pointer_id));
IL2CPP_REGISTER_METHOD(0x01662E30, void, GetCurrentHitLocation, (app::PointerUIMesh * this_ptr, app::Vector3 * pos, app::Quaternion * rot));
IL2CPP_REGISTER_METHOD(0x01663200, void, __ctor, (app::PointerUIMesh * this_ptr));
}
