#include <interception_macros.h>

namespace app::methods::SetCameraTargetAction {
    IL2CPP_REGISTER_METHOD(0x005A1EE0, void, Perform, (app::SetCameraTargetAction * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x005A1FE0, app::String *, GetNiceName, (app::SetCameraTargetAction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0044C850, void, __ctor, (app::SetCameraTargetAction * this_ptr));
}
