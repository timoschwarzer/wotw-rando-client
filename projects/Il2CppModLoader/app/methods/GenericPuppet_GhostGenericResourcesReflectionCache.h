#include <interception_macros.h>

namespace app::methods::GenericPuppet_GhostGenericResourcesReflectionCache {
    IL2CPP_REGISTER_METHOD(0x00E10300, bool, TryGetValue, (app::GenericPuppet_GhostGenericResourcesReflectionCache * this_ptr, app::Object * obj, app::GhostGenericResourceAttribute * * res))
    IL2CPP_REGISTER_METHOD(0x00E103D0, bool, Contains, (app::GenericPuppet_GhostGenericResourcesReflectionCache * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x00E104B0, void, Add, (app::GenericPuppet_GhostGenericResourcesReflectionCache * this_ptr, app::Object * obj, app::GhostGenericResourceAttribute * attr))
    IL2CPP_REGISTER_METHOD(0x00E10640, app::GhostGenericResourceAttribute *, Get, (app::GenericPuppet_GhostGenericResourcesReflectionCache * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x00E107B0, void, ResetLocalState, (app::GenericPuppet_GhostGenericResourcesReflectionCache * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E10840, void, ctor, (app::GenericPuppet_GhostGenericResourcesReflectionCache * this_ptr))
}
