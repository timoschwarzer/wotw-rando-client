#include <interception_macros.h>

namespace app::methods::MultiplatformVideoPlayerAction {
IL2CPP_REGISTER_METHOD(0x00879F00, void, Stop, (app::MultiplatformVideoPlayerAction * this_ptr));
IL2CPP_REGISTER_METHOD(0x0087A040, bool, get_IsPerforming, (app::MultiplatformVideoPlayerAction * this_ptr));
IL2CPP_REGISTER_METHOD(0x0087A0E0, void, Perform, (app::MultiplatformVideoPlayerAction * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x0087A2D0, void, __ctor, (app::MultiplatformVideoPlayerAction * this_ptr));
}
