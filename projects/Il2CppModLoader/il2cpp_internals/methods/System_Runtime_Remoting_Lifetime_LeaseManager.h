#include <interception_macros.h>

namespace app::methods::System_Runtime_Remoting_Lifetime::LeaseManager {
    IL2CPP_REGISTER_METHOD(0x02308060, void, SetPollTime, (app::LeaseManager * this_ptr, app::TimeSpan time_span));
    IL2CPP_REGISTER_METHOD(0x023081D0, void, TrackLifetime, (app::LeaseManager * this_ptr, app::ServerIdentity * identity));
    IL2CPP_REGISTER_METHOD(0x02308330, void, StartManager, (app::LeaseManager * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02308610, void, StopManager, (app::LeaseManager * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02308630, void, ManageLeases, (app::LeaseManager * this_ptr, app::Object * state));
    IL2CPP_REGISTER_METHODINFO(0x047838E0, LeaseManager_ManageLeases__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02308900, void, __ctor, (app::LeaseManager * this_ptr));
}
