#include <interception_macros.h>

namespace app::methods::DynamicVitalsHealthProvider {
    IL2CPP_REGISTER_METHOD(0x00BED0D0, float, GetFloatValue, (app::DynamicVitalsHealthProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BED2B0, void, TryBindToVitals, (app::DynamicVitalsHealthProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DynamicVitalsHealthProvider * this_ptr))
}
