#include <interception_macros.h>

namespace app::methods::Moon::SceneManagement::GenericScenePosition {
    IL2CPP_REGISTER_METHOD(0x00B8DCD0, app::Vector3, get_Center, (app::GenericScenePosition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B8DCF0, void, set_Center, (app::GenericScenePosition * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::GenericScenePosition * this_ptr))
}
