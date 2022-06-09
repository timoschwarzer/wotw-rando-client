#include <interception_macros.h>

namespace app::methods::GhostIndicatorManager {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (app::GhostIndicatorManager * this_ptr, app::GameObject * indicator));
    IL2CPP_REGISTER_METHOD(0x00E21090, void, EnableIndicators, (app::GhostIndicatorManager * this_ptr, app::List_1_GhostPlayer_ * ghosts));
    IL2CPP_REGISTER_METHOD(0x00E21320, void, DisableIndicators, (app::GhostIndicatorManager * this_ptr));
}
