#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::SneezeSlugFallReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x00EDCE30, void, OnEnterLand, (app::SneezeSlugFallReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EDCF10, void, OnInitializeTask, (app::SneezeSlugFallReactionBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00EDD0D0, void, StopKnockupTimeline, (app::SneezeSlugFallReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04723DD0, SneezeSlugFallReactionBehaviour_StopKnockupTimeline__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00733FD0, void, ctor, (app::SneezeSlugFallReactionBehaviour * this_ptr))
}
