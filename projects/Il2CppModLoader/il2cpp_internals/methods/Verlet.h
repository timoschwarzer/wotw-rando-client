#include <interception_macros.h>

namespace app::methods::Verlet {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (app::Verlet * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::Verlet * this_ptr));
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (app::Verlet * this_ptr));
} // namespace app::methods::Verlet
