#include <interception_macros.h>

namespace app::methods::RootMotion_Demos::MechSpider {
IL2CPP_REGISTER_METHOD(0x02222FA0, void, Update, (app::MechSpider * this_ptr));
IL2CPP_REGISTER_METHOD(0x02224470, Vector3, GetLegCentroid, (app::MechSpider * this_ptr));
IL2CPP_REGISTER_METHOD(0x022246B0, Vector3, GetLegsPlaneNormal, (app::MechSpider * this_ptr));
IL2CPP_REGISTER_METHOD(0x02224BB0, void, __ctor, (app::MechSpider * this_ptr));
}
