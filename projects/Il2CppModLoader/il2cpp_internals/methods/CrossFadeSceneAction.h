#include <interception_macros.h>

namespace app::methods::CrossFadeSceneAction {
    IL2CPP_REGISTER_METHOD(0x00DB9450, void, Perform, (app::CrossFadeSceneAction * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x00DB9550, app::String *, GetNiceName, (app::CrossFadeSceneAction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0044C850, void, __ctor, (app::CrossFadeSceneAction * this_ptr));
}
