#include <interception_macros.h>

namespace app::methods::ServerSeekingProjectile {
    IL2CPP_REGISTER_METHOD(0x0059D6C0, void, ctor, (app::ServerSeekingProjectile * this_ptr, app::Object * data))
    IL2CPP_REGISTER_METHOD(0x0059FB20, app::Object *, CreateData, (app::ServerSeekingProjectile * this_ptr, app::Object * data))
    IL2CPP_REGISTER_METHOD(0x0059FC90, app::Component_1 *, ApplyData, (app::ServerSeekingProjectile * this_ptr, app::GameObject * * gameobj))
    IL2CPP_REGISTER_METHOD(0x0059FDB0, void, RebuildReferences, (app::ServerSeekingProjectile * this_ptr))
}
