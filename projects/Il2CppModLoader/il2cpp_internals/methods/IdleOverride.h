#include <interception_macros.h>

namespace app::methods::IdleOverride {
    IL2CPP_REGISTER_METHOD(0x00625640, void, Override, (app::IdleOverride * this_ptr, app::SeinIdlePuppet* puppet));
    IL2CPP_REGISTER_METHOD(0x00625740, void, Revert, (app::IdleOverride * this_ptr, app::SeinIdlePuppet* puppet));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::IdleOverride * this_ptr));
} // namespace app::methods::IdleOverride
