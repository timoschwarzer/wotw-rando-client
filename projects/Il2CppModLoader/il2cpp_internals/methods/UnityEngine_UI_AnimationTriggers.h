#include <interception_macros.h>

namespace app::methods::UnityEngine_UI::AnimationTriggers {
IL2CPP_REGISTER_METHOD(0x01F2AAA0, void, __ctor, (app::AnimationTriggers * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F2AB40, String *, get_normalTrigger, (app::AnimationTriggers * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_normalTrigger, (app::AnimationTriggers * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x01F25880, String *, get_highlightedTrigger, (app::AnimationTriggers * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_highlightedTrigger, (app::AnimationTriggers * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x01704A60, String *, get_pressedTrigger, (app::AnimationTriggers * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_pressedTrigger, (app::AnimationTriggers * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x01F234C0, String *, get_disabledTrigger, (app::AnimationTriggers * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_disabledTrigger, (app::AnimationTriggers * this_ptr, app::String * value));
}
