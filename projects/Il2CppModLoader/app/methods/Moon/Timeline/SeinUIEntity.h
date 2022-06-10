#include <interception_macros.h>

namespace app::methods::Moon::Timeline::SeinUIEntity {
    IL2CPP_REGISTER_METHOD(0x00405F50, bool, get_Show, (app::SeinUIEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00785470, void, OnUpdateEntity, (app::SeinUIEntity * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00785510, void, OnStartPlayback, (app::SeinUIEntity * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00785800, void, OnStopPlayback, (app::SeinUIEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00785AE0, void, ctor, (app::SeinUIEntity * this_ptr))
}
