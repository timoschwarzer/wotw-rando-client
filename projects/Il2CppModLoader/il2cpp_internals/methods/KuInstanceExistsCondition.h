#include <interception_macros.h>

namespace app::methods::KuInstanceExistsCondition {
    IL2CPP_REGISTER_METHOD(0x0123A250, bool, Validate, (app::KuInstanceExistsCondition * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x0123A340, app::String *, GetNiceName, (app::KuInstanceExistsCondition * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00597BB0, void, __ctor, (app::KuInstanceExistsCondition * this_ptr));
}
