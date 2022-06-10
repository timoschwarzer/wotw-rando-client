#include <interception_macros.h>

namespace app::methods::FrogDeathReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x00A48970, void, SkipDeathTimeline, (app::FrogDeathReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016469C0, void, OnInitializeTask, (app::FrogDeathReactionBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x01646A80, void, OnEnterTask, (app::FrogDeathReactionBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x01646CB0, void, PlayTimeline, (app::FrogDeathReactionBehaviour * this_ptr, app::MoonTimeline * timeline, app::Action * on_stop))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::BehaviourStatus__Enum, OnExecuteTask, (app::FrogDeathReactionBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x01646CE0, void, Explode, (app::FrogDeathReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047704C8, FrogDeathReactionBehaviour_Explode__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01646ED0, void, ctor, (app::FrogDeathReactionBehaviour * this_ptr))
}
