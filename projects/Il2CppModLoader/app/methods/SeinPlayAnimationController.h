#include <interception_macros.h>

namespace app::methods::SeinPlayAnimationController {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::SeinPlayAnimationController * this_ptr, app::SeinCharacter * sein))
    IL2CPP_REGISTER_METHOD(0x005C7E90, void, OnAnimationEndEvent, (app::SeinPlayAnimationController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472A7A8, SeinPlayAnimationController_OnAnimationEndEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x005C7EE0, void, PlayAnimation_1, (app::SeinPlayAnimationController * this_ptr, app::TextureAnimationWithTransitions * animation))
    IL2CPP_REGISTER_METHOD(0x005C8350, void, PlayAnimation_2, (app::SeinPlayAnimationController * this_ptr, app::MoonAnimation * animation))
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, ShouldAnimationKeepPlaying, (app::SeinPlayAnimationController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474F860, SeinPlayAnimationController_ShouldAnimationKeepPlaying__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x005C8740, void, StopAnimation, (app::SeinPlayAnimationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C8750, void, UpdateState, (app::SeinPlayAnimationController * this_ptr))
}
