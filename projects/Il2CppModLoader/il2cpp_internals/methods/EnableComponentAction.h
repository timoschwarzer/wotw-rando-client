#include <interception_macros.h>

namespace app::methods::EnableComponentAction {
IL2CPP_REGISTER_METHOD(0x00BFC2A0, void, Perform, (app::EnableComponentAction * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x00BFC310, void, Serialize, (app::EnableComponentAction * this_ptr, app::Archive * ar));
IL2CPP_REGISTER_METHOD(0x00BFC4D0, String *, GetNiceName, (app::EnableComponentAction * this_ptr));
IL2CPP_REGISTER_METHOD(0x004C8C00, void, __ctor, (app::EnableComponentAction * this_ptr));
}
