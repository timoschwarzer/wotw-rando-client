#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Moon::BehaviourSystem::Extensions {
    IL2CPP_REGISTER_METHOD(0x0154F200, void, Shuffle_1, (app::IList_1_System_Object_ * list))
    IL2CPP_REGISTER_METHOD(0x0154F200, void, Shuffle_2, (app::IList_1_Moon_BehaviourSystem_BehaviourNode_ * list))
    IL2CPP_REGISTER_METHODINFO(0x0478B258, Extensions_Shuffle_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0154EFC0, void, Shuffle_3, (app::IList_1_SneezeSlugBurrowBehaviour_UnburrowPointRate_ * list))
    IL2CPP_REGISTER_METHODINFO(0x04779068, Extensions_Shuffle_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0154F200, void, Shuffle_4, (app::IList_1_EntityPlaceholder_ * list))
    IL2CPP_REGISTER_METHODINFO(0x04748258, Extensions_Shuffle_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0154F200, void, Shuffle_5, (app::IList_1_SwarmAgent_ * list))
    IL2CPP_REGISTER_METHODINFO(0x047913C0, Extensions_Shuffle_4__MethodInfo)
}
