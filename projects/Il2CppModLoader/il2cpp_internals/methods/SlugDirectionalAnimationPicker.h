#include <interception_macros.h>

namespace app::methods::SlugDirectionalAnimationPicker {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (app::SlugDirectionalAnimationPicker * this_ptr, app::SlugDirectionalAnimation * animation));
IL2CPP_REGISTER_METHOD(0x006C5410, TextureAnimationWithTransitions *, PickAnimation, (app::SlugDirectionalAnimationPicker * this_ptr, app::Vector3 up, bool face_left));
}
