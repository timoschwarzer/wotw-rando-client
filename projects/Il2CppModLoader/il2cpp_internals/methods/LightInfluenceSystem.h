#include <interception_macros.h>

namespace app::methods::LightInfluenceSystem {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ResetStatics, ());
    IL2CPP_REGISTER_METHOD(0x0114E4F0, void, ApplyToLights, (app::LightInfluenceSettings * m_settings_to_apply));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::LightInfluenceSystem * this_ptr));
}
