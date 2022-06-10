#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::InteractionLightModifier {
    IL2CPP_REGISTER_METHOD(0x00637F10, void, Reset, (app::InteractionLightModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00637F20, void, ApplyMultipliers, (app::InteractionLightModifier * this_ptr, float strength, float speed))
    IL2CPP_REGISTER_METHOD(0x00637F40, app::String *, get_InteractionName, (app::InteractionLightModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00637FE0, app::IEnumerable_1_System_String_ *, GetKeywordsForShader, (app::InteractionLightModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresVertexColor, (app::InteractionLightModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00638170, float, GetStrength, (app::InteractionLightModifier * this_ptr, app::Vector3 velocity, app::Vector4 strength_val))
    IL2CPP_REGISTER_METHOD(0x006382A0, app::UberInteractionManager_PropertyIDCache *, get_PropertyCache, (app::InteractionLightModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00638380, void, SetProperties, (app::InteractionLightModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00638510, void, ctor, (app::InteractionLightModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00638950, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x006389E0, app::IEnumerable_1_System_String_ *, __n__0, (app::InteractionLightModifier * this_ptr))
}
